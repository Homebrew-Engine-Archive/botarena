#pragma once

class CCreatureCard;
class CManaConsumptionAbilityAction;
class CTargetSpellAction;
class CTargetStackSpellAction;

//____________________________________________________________________________
//
class CORE_EXPORT CTargetSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetSpell(CCard* pCard, AbilityType abilityType,
				 LPCTSTR strManaCost,
				 CardComparer* pComparer,
				 BOOL bTargetPlayers,
				 CTargeting* pTargeting = new CTargeting)
		: CSpell(pCard, abilityType, strManaCost, FALSE)
		, m_bAdjustTargetCountWithExtraCostValue(false)
		, m_bAdjustTargetCountWithExtraCostValueAddOne(false) // for strive ability 
		, m_bFreeAdjustTargetCountWithExtraCostValue(false)
	{
		m_apTargeting.reset(pTargeting);
		m_apTargeting->SetAbility(this);
		m_apTargeting->SetIncludePlayers(bTargetPlayers);
		m_apTargeting->GetSubjectCardFilter().AddComparer(pComparer);
	}

	virtual ~CTargetSpell() 
	{}

public:
	// Targeting

	CTargeting* GetTargeting()								{ return m_apTargeting.get(); }
	const CTargeting* GetTargeting() const					{ return m_apTargeting.get(); }

	CSubjectModifier& GetTargetModifier()					{ return m_TargetModifier; }
	const CSubjectModifier& GetTargetModifier() const		{ return m_TargetModifier; }

	void FlagTargets(BOOL bFlagTargets,						// if set, targets will be flagged by CardFlag::AbilityFlag and the ability's instance ID.
					 BOOL bKeepFlagUntilEndOfTurn = FALSE);	// if set, flags are not cleared until end of turn. Normally flags are cleared immediately after resolutions.

	void AdjustTargetCountWithExtraCostValue()				{ m_bAdjustTargetCountWithExtraCostValue	   = true; }
	void AdjustTargetCountWithExtraCostValueAddOne()		{ m_bAdjustTargetCountWithExtraCostValueAddOne = true; }	// for strive ability 
	void FreeAdjustTargetCountWithExtraCostValue()			{ m_bFreeAdjustTargetCountWithExtraCostValue   = true; }

	// Overrides

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
	{
		if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
			return FALSE;

		return GetTargeting()->HasLegalSubjects(bIncludeTricks);
	}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
	OVERRIDE(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);

	VIRTUAL(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);
	VIRTUAL(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

protected:
	CSubjectModifier	m_TargetModifier;
	bool				m_bAdjustTargetCountWithExtraCostValue;
	bool				m_bAdjustTargetCountWithExtraCostValueAddOne;	// for strive ability 
	bool				m_bFreeAdjustTargetCountWithExtraCostValue;

private:
	std::auto_ptr<CTargeting>	m_apTargeting;
	CCardFlagModifier			m_CardFlagModifier;
};

//____________________________________________________________________________
//
/*
	Ref:
	Rod of Ruin 4
	Artifact
	3, Tap: Rod of Ruin deals 1 damage to target creature or player.
*/
class CORE_EXPORT CTargetChgLifeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer,
				  BOOL bTargetPlayers,
				  Life nLifeDelta,
				  PreventableType preventable);
	virtual ~CTargetChgLifeSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReverseLifeDeltaToController() { m_bReverseLifeDeltaToController = TRUE; }
	void SetPropagateToTargetedPlayersCreatures() { m_bPropagateToTargetedPlayersCreatures = TRUE; }

	void SetDamageType(DamageType damageType) { m_LifeModifier.SetDamageType(damageType); } // default: DamageType::NonCombatDamage

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	BOOL m_bReverseLifeDeltaToController;
	BOOL m_bPropagateToTargetedPlayersCreatures;

	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			if (GetAbility()->GetActionValue().nValue1 < 0)
				return Characteristic::Negative;
			
			if (GetAbility()->GetActionValue().nValue1 > 0)
				return Characteristic::Positive;

			if (!GetAbility()->GetExtraActionValueVector().Any())
				return Characteristic::Neutral;

			return GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive;
		}
	};
};

//____________________________________________________________________________
//
class CORE_EXPORT CTargetChgLifeSpell2 : public CTargetSpell
/*
	Ref:
	Bloodshot Cyclops 5R
	Creature — Cyclops Giant (4/4)
	Tap, Sacrifice a creature: Bloodshot Cyclops deals damage equal to the sacrificed creature's 
	power to target creature or player.

*/
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeSpell2(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 BOOL bTargetPlayers,
						 const CCardFilter* pSacrificeCardFilter,
						 PreventableType preventable,
						 DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CTargetChgLifeSpell2() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CLifeModifier m_LifeModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTargetChgLifeSpell3 : public CTargetSpell					
/*
	Ref:
	Ghitu Fire-Eater 2R
    Creature — Human Nomad (2/2)
	Tap, Sacrifice Ghitu Fire-Eater: Ghitu Fire-Eater deals damage equal to its power to target 
	creature or player.

	Abyssal Hunter 3B
	Creature — Human Assassin (1/1)
	B, Tap: Tap target creature. Abyssal Hunter deals damage equal to Abyssal Hunter's power to 
	that creature.
	 
	Karplusan Yeti 3RR
	Creature — Yeti (3/3)
	Tap: Karplusan Yeti deals damage equal to its power to target creature. That creature deals 
	damage equal to its power to Karplusan Yeti.
*/
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeSpell3(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 BOOL bTargetPlayers,
						 PreventableType preventable,
						 DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CTargetChgLifeSpell3() {}

public:
	void SetReceiveDamageFromTargetedCreature()	
	{ 
		ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());
		m_bReceiveDamageFromTargetedCreature = TRUE; 
	}

	void SetIsFightAbility()	
	{ 
		ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());
		m_bIsFightAbility = TRUE; 
	}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CLifeModifier m_LifeModifier;

	BOOL	m_bReceiveDamageFromTargetedCreature;
	BOOL	m_bIsFightAbility;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTargetPlaneswalkerChgLifeSpell3 : public CTargetSpell					
/*
	Planewalker version of CTargetChgLifeSpell3
    Ref: 
	Ghitu Fire Eater, Abyssal Hunter, Karplusan Yeti
	Specific Ref:
	Garruk, the Veil-Cursed
	Planeswalker — Garruk
	relevant ability
		-3: Creatures you control gain trample and get +X/+X until end of turn, where X is the
	number of creature cards in your graveyard.
*/
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlaneswalkerChgLifeSpell3(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 BOOL bTargetPlayers,
						 PreventableType preventable, Life nLife,
						 DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CTargetPlaneswalkerChgLifeSpell3() {}

public:
	void SetReceiveDamageFromTargetedCreature()	
	{ 
		ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());
		m_bReceiveDamageFromTargetedCreature = TRUE; 
	}

	void SetIsFightAbility()	
	{ 
		ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());
		m_bIsFightAbility = TRUE; 
	}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CLifeModifier m_LifeModifier;

	BOOL	m_bReceiveDamageFromTargetedCreature;
	BOOL	m_bIsFightAbility;
};

//____________________________________________________________________________
//
/*
	Ref:
	Corrupt 5B
	Sorcery
	Corrupt deals damage equal to the number of Swamps you control to target creature or player.
	You gain life equal to the damage dealt this way.
*/
class CORE_EXPORT CTargetChgLifeBySurveySpell : public CTargetSpell	// Note: number of damage calculated at resolves, not during casts
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeBySurveySpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,	// Legal targets
						 BOOL bTargetPlayers,													// "
						 ZoneId uCountCardsInZone,	// Survey which zone
						 BOOL bControllerZone,		// TRUE -> uCountInZone refers to controller's zone, FALSE -> uCountInZone refers to targeted player's zone or targeted cards' controllers' zone
						 CardComparer* pComparer2,	// Count these cards
						 PreventableType preventable);
	virtual ~CTargetChgLifeBySurveySpell() {}

public:
	void SetControllerGainLife(BOOL bControllerGainLife);	// Ref: Corrupt

protected:
	Life GetLifeDelta(const CPlayer* pAltPlayer) const;

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	ZoneId		m_uCountCardsInZone;
	BOOL		m_bControllerZone;
	CCardFilter m_CountCardFilter;

	BOOL		m_bControllerGainLife;
	CLifeModifier	m_LifeModifier;
};

//____________________________________________________________________________
//
/*
Ref:
	Mana Clash R
	Sorcery
	You and target opponent each flip a coin. Mana Clash deals 1 damage to each player whose
	coin comes up tails. Repeat this process until both players' coins come up heads on the
	same flip.
*/
class CORE_EXPORT CTargetRandomChgLifeSpell : public CTargetSpell			// Ref: Mana Clash
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetRandomChgLifeSpell(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  Life nLifeDelta,		// Damage dealt for each iteration
							  PreventableType preventable);
	virtual ~CTargetRandomChgLifeSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			if (GetAbility()->GetActionValue().nValue1 < 0)
				return Characteristic::Negative;
			
			if (GetAbility()->GetActionValue().nValue1 > 0)
				return Characteristic::Positive;

			if (!GetAbility()->GetExtraActionValueVector().Any())
				return Characteristic::Neutral;

			return GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive;
		}
	};
};

//____________________________________________________________________________
//
/*
Ref:
	Dwarven Warriors 2R
	Creature — Dwarf Warrior (1/1)
	Tap: Target creature with power 2 or less can't be blocked this turn.

	Fit of Rage 1R
	Sorcery
	Target creature gets +3/+3 and gains first strike until end of turn.
*/
class CORE_EXPORT CTargetChgPwrTghAttrSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgPwrTghAttrSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						Power nPowerDelta, Life nLifeDelta,
						CreatureKeyword creatureKeywordToAdd, CreatureKeyword creatureKeywordToRemove,
						BOOL bThisTurnOnly,
						PreventableType preventable,
						CardComparer* pComparer = new AnyCreatureComparer);
	virtual ~CTargetChgPwrTghAttrSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	const CCreatureKeywordModifier& GetCreatureKeywordMod() const { return m_CreatureKeywordModifier; }
	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }

	CCreatureKeywordModifier& GetCreatureKeywordMod() { return m_CreatureKeywordModifier; }
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;
	CCreatureKeywordModifier	m_CreatureKeywordModifier;
	CCardKeywordModifier		m_CardKeywordModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CTargetChgPwrTghAttrSpell* pAbility = (CTargetChgPwrTghAttrSpell*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				Life(GetAbility()->GetActionValue().nValue1), Power(GetAbility()->GetActionValue().nValue2),
				!GetAbility()->GetActionValue().nValue1 && !GetAbility()->GetActionValue().nValue2 && GetAbility()->GetExtraActionValueVector().Any() ? 
					(GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive) 
					: Characteristic::Neutral,
				pAbility->m_CardKeywordModifier.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier.GetModifier().GetToRemove(),
				pAbility->m_CreatureKeywordModifier.GetModifier().GetToAdd(),
				pAbility->m_CreatureKeywordModifier.GetModifier().GetToRemove());
		}
	};
};

//____________________________________________________________________________
//
/*
Ref:
	Samite Healer 1W
	Creature — Human Cleric (1/1)
	Tap: Prevent the next 1 damage that would be dealt to target creature or player this turn.
*/
class CORE_EXPORT CTargetDamagePreventionSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetDamagePreventionSpell(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   CardComparer* pComparer, 
						   BOOL bTargetPlayers,
						   Life nLifeDelta,
						   SourceColor sourceColor);
	virtual ~CTargetDamagePreventionSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	SourceColor m_SourceColor;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, SubjectAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
//
/*
Ref:
	Ashen Powder 2BB
	Sorcery
	Put target creature card from an opponent’s graveyard onto the battlefield under your control.

	Threaten 2R
	Sorcery
	Untap target creature and gain control of it until end of turn. That creature gains haste until
	end of turn. (It can attack and Tap this turn.)
*/
class CORE_EXPORT CTargetMoveCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

	CTargetMoveCardSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetMoveCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReturnToPreviousControllerAtNext(NodeId nodeId) { m_ReturnNodeId = nodeId; }

	void SetCardPlacement(CardPlacement placement) { m_Placement = placement; }

	CPlayerModifiers& GetCardControllerModifier() { return m_CardControllerModifier; }
	const CPlayerModifiers& GetCardControllerModifier() const { return m_CardControllerModifier; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	BOOL	m_bToOwner;
	ZoneId	m_ToZoneId;
	NodeId	m_ReturnNodeId;
	MoveType m_MoveType;
	CardPlacement m_Placement;
	CPlayerModifiers m_CardControllerModifier;
};

//____________________________________________________________________________
//
/*
Ref:
	Dregs of Sorrow 4B
	Sorcery
	Destroy X target nonblack creatures. Draw X cards.
*/
class CORE_EXPORT CTargetMoveCardSpell2 : public CTargetMoveCardSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetMoveCardSpell2(CCard* pCard, AbilityType abilityType,
						  LPCTSTR strManaCost,
						  CardComparer* pComparer,
						  ZoneId fromZoneId,
						  ZoneId toZoneId, BOOL bToOwner, MoveType moveType);
	virtual ~CTargetMoveCardSpell2() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
};

//____________________________________________________________________________
//
class CORE_EXPORT CTargetMoveCardSpell3 : public CTargetMoveCardSpell	
/*
Ref:
	Exile 2W
	Instant
	Exile target nonwhite attacking creature. You gain life equal to its toughness.
*/
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetMoveCardSpell3(CCard* pCard, AbilityType abilityType,
						  LPCTSTR strManaCost,
						  CardComparer* pComparer,
						  ZoneId fromZoneId,
						  ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
						  BOOL bGainPower, BOOL bGainToughness);
	virtual ~CTargetMoveCardSpell3() {}

public:
	void SetCreatureControllerGainLife(BOOL bCreatureControllerGainLife) { m_bCreatureControllerGainLife = bCreatureControllerGainLife; } // Default: spell's controller gains life

	BOOL GetGainPower() const { return m_bGainPower; }
	BOOL GetGainToughness() const { return m_bGainToughness; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	BOOL m_bCreatureControllerGainLife;
	BOOL m_bGainPower;
	BOOL m_bGainToughness;

	CLifeModifier m_LifeModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTargetMoveCardSpell4 : public CTargetMoveCardSpell	
/*
Ref:
	Polymorph 3U
	Sorcery
	Destroy target creature. It can't be regenerated. Its controller reveals cards from the top of his or her 
	library until he or she reveals a creature card. The player puts that card onto the battlefield, then 
	shuffles all other cards revealed this way into his or her library.
*/
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetMoveCardSpell4(CCard* pCard, AbilityType abilityType,
						  LPCTSTR strManaCost,
						  CardComparer* pComparer,
						  ZoneId fromZoneId,
						  ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
						  CardComparer* pRevealComparer);
	virtual ~CTargetMoveCardSpell4() {}

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	CCardFilter	m_RevealCardFilter;
};

//____________________________________________________________________________
//
/*
Ref:
	Twiddle U
	Instant
	You may tap or untap target artifact, creature, or land.
	
	Elder Druid 3G (2/2)
	Creature — Elf Cleric Druid
	3G, Tap: You may tap or untap target artifact, creature, or land.
*/
class CORE_EXPORT CTargetTapUntapCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetTapUntapCardSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
							 BOOL bTap,		// if both taps and untaps are allowed, the selection is done during resolution.
							 BOOL bUntap,	// See rulings for Twiddle and Elder druid.
							 CardComparer* pComparer);
	virtual ~CTargetTapUntapCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	BOOL GetTap() const		{ return m_bTap; }
	BOOL GetUntap() const	{ return m_bUntap; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CSelectionSupport m_SelectionSupport;

	BOOL	m_bTap;
	BOOL	m_bUntap;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CTargetTapUntapCardSpell* pAbility = (CTargetTapUntapCardSpell*)GetAbility();
			if (pAbility->m_bTap && pAbility->m_bUntap)
				return Characteristic::Neutral;

			if (pAbility->m_bTap)
				return Characteristic::Negative;

			ATLASSERT(pAbility->m_bUntap);

			return Characteristic::Positive;
		}

		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/*
	This class is used for spells which are targeting a player and in resolution
	affects a certain type of cards controlled by that player.
Ref:
	Mana Short 2U
	Instant
	Tap all lands target player controls and empty his or her mana pool.
*/
class CORE_EXPORT CTargetPlayerCardsSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerCardsSpell(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   ZoneId fromZone,
						   const CCardFilter* pCardFilter,
						   CTargeting* pTargeting = new CTargeting);

	virtual ~CTargetPlayerCardsSpell() {}

public:
	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }
	void ApplyToAllPlayers(BOOL bAllPlayers) { m_bAllPlayers = bAllPlayers; } // default: false (target one player but apply the card modifier to all players' zones

protected:
	SEALED_OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value) { ATLASSERT(false); }
	SEALED_OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	VIRTUAL(void, ResolvePlayerCards)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const CCountedCardContainer& cards, const ContextValue& value);

	void GetCards(CPlayer* pPlayer, CCountedCardContainer& cards) const;

private:
	ZoneId m_FromZone;
	const CCardFilter* m_pPlayerCardFilter;
	CCardModifiers m_CardModifiers;
	BOOL m_bAllPlayers;
};

//____________________________________________________________________________
//
/*
Ref:
	Ancestral Recall U
	Instant
	Target player draws three cards.
*/
class CORE_EXPORT CTargetDrawCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetDrawCardSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 int nDrawCount);
	virtual ~CTargetDrawCardSpell() {}

public:
	void SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
					ZoneId discardToZone = ZoneId::Graveyard, BOOL bDiscardToTop = TRUE);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void UpdateTargetCharacteristic();

	int		m_nDiscardCount;
	BOOL	m_bFromDrawsOnly;
	ZoneId	m_DiscardToZone;
	BOOL	m_bDiscardToTop;
	MoveType m_DiscardMoveType;
};

//____________________________________________________________________________
//
/*
   Mind Twist XB
   Sorcery
   Target player discards X cards at random.
*/
class CORE_EXPORT CTargetPlayerDiscardCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerDiscardCardSpell(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  int nDiscardCount,			// 0 - Reveal hand only, SpecialNumber::Any - Discard all matching the filter, X - Discard this number of cards
								  MoveType discardMoveType,
								  ZoneId toZoneId,
								  BOOL bToOwnersZone,
								  BOOL bTargetedPlayerChooses,
								  const CCardFilter* pCardFilter);
	virtual ~CTargetPlayerDiscardCardSpell() {}

public:
	void SetDiscardPlacement(CardPlacement placement) { m_Placement = placement; }	// Default: top
	void SetShowHandBeforeDiscards()	{ m_bShowHandBeforeDiscards = TRUE; }
	void SetAtRandom()					{ m_bAtRandom = TRUE; }	// Overrides bTargetedPlayerChooses
	void SetDiscarderOrder(BOOL bDiscarderOrder)	{ m_bDiscarderOrder = bDiscarderOrder; } // TRUE (default): discarder order cards; FALSE: caster order cards

	void SetSecondaryAction(int nDiscardCount,			// 0 - Reveal hand only, SpecialNumber::Any - Discard all matching the filter, X - Discard this number of cards
							MoveType discardMoveType,
							ZoneId toZoneId,
							BOOL bToOwnersZone,
							BOOL bTargetedPlayerChooses,
							CardComparer* pComparer,
							BOOL bShowHandBeforeDiscards = FALSE,
							BOOL bAtRandom = FALSE,
							CardPlacement placement = CardPlacement::Top,
							BOOL fromPrimaryDiscards = FALSE
							);

	void SetDrawCount(int nDrawCount, bool bControllerDraw)		 // If draw count is SpecialNumber::Any - draw as many as discarded
	{ 
		m_nDrawCount = nDrawCount; 
		m_bControllerDraw = bControllerDraw;
	}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	const CCardFilter* m_pCardFilter;

	BOOL	m_bTargetedPlayerChooses;
	BOOL	m_bShowHandBeforeDiscards;
	BOOL	m_bAtRandom;
	ZoneId	m_ToZoneId;
	BOOL	m_bToOwnersZone;
	CardPlacement m_Placement;
	MoveType m_DiscardMoveType;
	BOOL	m_bDiscarderOrder;

	BOOL	m_bHasSecondaryAction;
	BOOL	m_bTargetedPlayerChooses2;
	BOOL	m_bShowHandBeforeDiscards2;
	BOOL	m_bAtRandom2;
	ZoneId	m_ToZoneId2;
	BOOL	m_bToOwnersZone2;
	CardPlacement m_Placement2;
	CCardFilter m_SecondaryCardFilter;
	BOOL	m_bFromPrimaryDiscards;
	MoveType m_DiscardMoveType2;

	int		m_nDrawCount;
	bool	m_bControllerDraw;
};

//____________________________________________________________________________
//
/*
Ref:
	Mind Sludge 4B
	Sorcery
	Target player discards a card for each Swamp you control.
*/
class CORE_EXPORT CTargetPlayerDiscardCardSpell3 : public CTargetPlayerDiscardCardSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerDiscardCardSpell3(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  MoveType discardMoveType,
								  ZoneId toZoneId,
								  BOOL bToOwnersZone,
								  BOOL bTargetedPlayerChooses,
								  const CCardFilter* pCardFilter,
								  ZoneId uSurveyZoneId);
	virtual ~CTargetPlayerDiscardCardSpell3() {}

public:
	const CCardFilter& GetSurveyCardFilter() const { return m_SurveyCardFilter; }
	CCardFilter& GetSurveyCardFilter() { return m_SurveyCardFilter; }

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CCardFilter m_SurveyCardFilter;
	ZoneId	m_uSurveyZoneId;
};

//____________________________________________________________________________
//
/*
Ref: 
	Persecute 2BB
	Sorcery
	Choose a color. Target player reveals his or her hand and discards all cards of that color.
*/
class CORE_EXPORT CTargetPlayerDiscardCardSpell2 : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerDiscardCardSpell2(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   ZoneId toZoneId,
								   BOOL bToOwnersZone,
								   CTargeting* pTargeting = new CTargeting);
	virtual ~CTargetPlayerDiscardCardSpell2() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter);

	ZoneId	m_ToZoneId;
	BOOL	m_bToOwnersZone;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
Ref:
	Jester's Cap 4
	Artifact
	2, Tap, Sacrifice Jester's Cap: Search target player's library for three cards and exile them. 
	Then that player shuffles his or her library.
*/
class CORE_EXPORT CTargetPlayerSearchLibraryCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerSearchLibraryCardSpell(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  MinimumValue nMinSearchCount,
								  MaximumValue nMaxSearchCount,
								  const CCardFilter* pCardFilter,
								  CTargeting* pTargeting = new CTargeting);
	virtual ~CTargetPlayerSearchLibraryCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetSearchLibraryData(ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped, BOOL bRevealCardsToOthers)
	{
		m_ToZoneId = toZoneId;
		m_bToOwnersZone = bToOwnersZone;
		m_bToTop = bToTop;
		m_bTapped = bTapped;
		m_bRevealCardsToOthers = bRevealCardsToOthers;

		UpdateTargetCharacteristic();
	}

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void UpdateTargetCharacteristic();

	MinimumValue	m_nMinSearchCount;
	MaximumValue	m_nMaxSearchCount;
	ZoneId	m_ToZoneId;			// Default: to caster's hand
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	BOOL	m_bTapped;
	BOOL	m_bRevealCardsToOthers;	// Default: reveal to others
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
/*
Ref: 
	Baleful Stare 2U
	Sorcery
	Target opponent reveals his or her hand. You draw a card for each Mountain and red card in it.
*/
class CORE_EXPORT CTargetPlayerRevealHandSpell2 : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerRevealHandSpell2(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  const CCardFilter* pCardFilter,
								  CTargeting* pTargeting = new CTargeting);
	virtual ~CTargetPlayerRevealHandSpell2() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
/* 
Ref:
	Psychic Transfer 4U
	Sorcery
	If the difference between your life total and target player's life total is 5 or less, 
	exchange life totals with that player.
*/
class CORE_EXPORT CExchangeLifeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CExchangeLifeSpell(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   int nAbsLifeDiff);
	virtual ~CExchangeLifeSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	int m_nAbsLifeDiff;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/*
Ref:
	Orcish Spy R (1/1)
	Creature — Orc Rogue
	Tap: Look at the top three cards of target player's library.
*/
class CORE_EXPORT CTargetRevealLibraryCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetRevealLibraryCardSpell(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCost,
				     int nRevealCount);	// Supports SpecialNumber::DivideBy2RoundUp and SpecialNumber::DivideBy2RoundDown
	virtual ~CTargetRevealLibraryCardSpell() {}

public:
	// Default: false
	void SetRevealCardsToOthers(BOOL bRevealCardsToOthers) { m_bRevealCardsToOthers = bRevealCardsToOthers; }

	// Reorder revealed card before putting them back on top of the Library
	// Default: false
	void SetReorder(BOOL bReorder, 
		ZoneId reorderToZone = ZoneId::Library,
		CardPlacement reorderToZonePlacement = CardPlacement::Top) 
	{ 
		m_bReorder = bReorder; 
		m_ReorderToZone = reorderToZone;
		m_ReorderToZonePlacement = reorderToZonePlacement;

		UpdateTargetCharacteristic();
	}

	void SetSelectionOptions(
		MaximumValue nMaxSelectionCount, 
		ZoneId selectToZone, 
		CardPlacement selectToZonePlacement,
		const CCardFilter* pSelectionCardFilter,
		MinimumValue nMinSelectionCount = MinimumValue(1)) 
	{ 
		m_nMaxSelectionCount = nMaxSelectionCount; 
		m_nMinSelectionCount = nMinSelectionCount; 
		m_SelectToZone = selectToZone;
		m_SelectToZonePlacement = selectToZonePlacement;
		m_pSelectionCardFilter = pSelectionCardFilter;

		UpdateTargetCharacteristic();
	} 

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void UpdateTargetCharacteristic();

	BOOL		m_bRevealCardsToOthers;
	BOOL		m_bReorder;
	ZoneId		m_ReorderToZone;
	CardPlacement m_ReorderToZonePlacement;

	MaximumValue	m_nMaxSelectionCount;
	MinimumValue	m_nMinSelectionCount;
	ZoneId			m_SelectToZone;
	CardPlacement	m_SelectToZonePlacement;
	const CCardFilter* m_pSelectionCardFilter;
};

//____________________________________________________________________________
//
/*
Ref:
	Deathlace B
	Instant
	Target spell or permanent becomes black. (Mana symbols on that permanent remain unchanged.)
*/
class CORE_EXPORT CTargetChangeCardTypeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChangeCardTypeSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pTargetComparer);
	virtual ~CTargetChangeCardTypeSpell() {}

public:
	void AddCardTypeToSelection(CardType cardTypeToAdd, CardType additionMask,
							    BOOL bThisTurnOnly,
							    LPCTSTR strCardTypeText);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	struct CardTypeSelectionEntry
	{
		CardType cardTypeToAdd;
		CardType additionMask;
		BOOL	 bThisTurnOnly;
		CString	 strCardTypeText;
	};

	vector<CardTypeSelectionEntry>	m_Selection;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
Ref:
	Juxtapose 3U
	Sorcery
	You and target player exchange control of the creature you each control with the highest converted mana cost. 
	Then exchange control of artifacts the same way. If two or more permanents a player controls are tied for 
	highest cost, their controller chooses one of them.
*/
class CORE_EXPORT CExchangeControlSpell : public CTargetSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CExchangeControlSpell(CCard* pCard, AbilityType abilityType,
						  LPCTSTR strManaCost);
	virtual ~CExchangeControlSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void GetCardsFromPlayer(const CPlayer* pPlayer, CCountedCardContainer& maxCards, const CCardFilter* pCardFilter, const CCard* pExcludeCard1, const CCard* pExcludeCard2) const;
	BOOL PlayerHasCardsToExchange(const CPlayer* pPlayer, const CCardFilter* pCardFilter) const;
	void PromptForSelection(CPlayer* pCaster, CPlayer* pTarget, DWORD dwContext, CCard* pCasterCard1 = NULL, CCard* pCasterCard2 = NULL);
	void GainControl(CCard* pCard, CPlayer* pNewController, CPlayer* pCaster);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CCardFilter	m_FirstExchangeCardFilter;
	CCardFilter	m_SecondExchangeCardFilter;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/*
Ref: 
	Balance of Power 3UU
	Sorcery
	If target opponent has more cards in hand than you, draw cards equal to the difference.
*/
class CORE_EXPORT CTargetPlayerSurveyDrawCardSpell : public CTargetSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

protected:
	CTargetPlayerSurveyDrawCardSpell(CCard* pCard, AbilityType abilityType,
									 LPCTSTR strManaCost,
									 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetPlayerSurveyDrawCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);
};

//____________________________________________________________________________
//
/*
Ref:
	Death Ward W
	Instant
	Regenerate target creature.
*/
class CORE_EXPORT CTargetRegenerationSpell : public CTargetSpell
{										
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetRegenerationSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
						     CardComparer* pComparer);
	virtual ~CTargetRegenerationSpell() {}

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);
};

//____________________________________________________________________________
//
/*
Ref:
	Final Punishment 3BB
	Sorcery
	Target player loses life equal to the damage already dealt to him or her this turn.
*/
class CORE_EXPORT CTargetChgLifeSpell4 : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeSpell4(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 PreventableType preventable);
	virtual ~CTargetChgLifeSpell4() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/* 
Ref:
	Cruel Edict 1B
	Sorcery
	Target opponent sacrifices a creature.
*/
class CORE_EXPORT CTargetPlayerSacrificeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

protected:
	CTargetPlayerSacrificeSpell(CCard* pCard, AbilityType abilityType,
								LPCTSTR strManaCost,
								const CCardFilter* pCardFilter,
								CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetPlayerSacrificeSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);
	VIRTUAL(void, GetSelectionEntries)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CSelectionSupport m_SelectionSupport;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
/*
Ref:  
   Give and Take 6
   Artifact
   2 Tap, sacrifice a permanent: Target opponent sacrifices a permanent with the same card type.
*/
class CORE_EXPORT CTargetPlayerSacrificeSpell2 : public CTargetPlayerSacrificeSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerSacrificeSpell2(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 const CCardFilter* pSacrificeCardFilter);
	virtual ~CTargetPlayerSacrificeSpell2() {}

	OVERRIDE(void, GetSelectionEntries)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries);
};

//____________________________________________________________________________
//
/* 
Ref:  
	Jade Monolith 1
	Artifact
	The next time a source of your choice would deal damage to target creature this turn, 
	that source deals that damage to you instead. 
*/
class CORE_EXPORT CTargetCreatureDamageRedirectionSpell : public CTargetSpell
{																		
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetCreatureDamageRedirectionSpell(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  CardComparer* pComparer, 
								  SourceColor sourceColor,
								  BOOL bThisTurnOnly);
	virtual ~CTargetCreatureDamageRedirectionSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetRedirectValue(Life nRedirect) { m_nRedirect = nRedirect; }	// Default: All
	void SetDamageType(DamageType damageType) { m_DamageType = damageType; } // Default: all

	BOOL GetThisTurnOnly() const { return m_bThisTurnOnly; }

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);

	SourceColor m_SourceColor;
	BOOL		m_bThisTurnOnly;
	Life		m_nRedirect;
	DamageType	m_DamageType;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/*
Ref:	
	Zealous Inquisitor 1W
	Creature - Human Cleric (2/2)
	The next 1 damage that would be dealt to <this> this turn is dealt to target creature instead.
*/
class CORE_EXPORT CTargetCreatureDamageRedirectionSpell2 : public CTargetSpell			
{																		
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetCreatureDamageRedirectionSpell2(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  CardComparer* pComparer, 
								  BOOL bTargetPlayers,
								  SourceColor sourceColor,
								  BOOL bThisTurnOnly);
	virtual ~CTargetCreatureDamageRedirectionSpell2() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetRedirectValue(Life nRedirect) { m_nRedirect = nRedirect; }	// Default: All
	void SetDamageType(DamageType damageType) { m_DamageType = damageType; } // Default: all

	BOOL GetThisTurnOnly() const { return m_bThisTurnOnly; }

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	SourceColor m_SourceColor;
	BOOL		m_bThisTurnOnly;
	Life		m_nRedirect;
	DamageType	m_DamageType;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/* 
Ref:
	Oracle's Attandents 3W
	Creature - Human Soldier (1/5)
	Tap: All damage that would be dealt to target creature this turn by a source of your 
	choice is dealt to Oracle's Attendants <this> instead.
*/
class CORE_EXPORT CTargetCreatureDamageRedirectionSpell3 : public CTargetSpell			
{																		
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetCreatureDamageRedirectionSpell3(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer, 
										   BOOL bTargetPlayers,
										   SourceColor sourceColor,
										   BOOL bThisTurnOnly);
	virtual ~CTargetCreatureDamageRedirectionSpell3() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetRedirectValue(Life nRedirect) { m_nRedirect = nRedirect; }	// Default: All
	void SetDamageType(DamageType damageType) { m_DamageType = damageType; } // Default: all

	BOOL GetThisTurnOnly() const { return m_bThisTurnOnly; }

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	SourceColor m_SourceColor;
	BOOL		m_bThisTurnOnly;
	Life		m_nRedirect;
	DamageType	m_DamageType;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/*
Ref: 
	Exhaustion 2U
	Sorcery
	Creatures and lands target opponent controls don't untap during his or her next untap step.
*/
class CORE_EXPORT CTargetChgUntapCardTypeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgUntapCardTypeSpell(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 CardType untapCardTypeToRemove);

	virtual ~CTargetChgUntapCardTypeSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CardType	m_UntapCardTypeToRemove;
};

//____________________________________________________________________________
//
/*
Ref:	
	Vulshok Morningstar 2
	Artifact — Equipment
	Equipped creature gets +2/+2.
	Equip 2 (2: Attach to target creature you control. Equip only as a sorcery.)
*/
class CORE_EXPORT CEquipAbility : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CEquipAbility(CCard* pCard, 
				  LPCTSTR strManaCost,
				  CardComparer* pComparer = new AnyCreatureComparer);
	virtual ~CEquipAbility() {}

public:
	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }
	void AddCreatureModifier(CCreatureModifier* pModifier) { m_CreatureModifiers.Add(pModifier); }

	CCreatureModifiers	GetCreatureModifiers()  {return m_CreatureModifiers;}
	CCardModifiers		GetCardModifiers()  {return m_CardModifiers;}

	void CloneCardModifier( CCardModifiers pModifier) { m_CardModifiers.Clone(pModifier); }  // doesn't work for unknown reason
	void CloneCreatureModifier(CCreatureModifiers pModifier) { m_CreatureModifiers.Clone(pModifier); }  // doesn't work for unknown reason

	CardComparer* GetComparer() const {return p_Comparer;}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	CCreatureCard* GetEquippedOnCreature() const { return m_pEquippedCreature; }
	void Unequip(bool phase_out=false);
	void Equip(CCreatureCard* pCreature);

protected:
	BOOL IsLegalEquipment() const;


	void OnThisCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);
	void OnThisCardAlsoAChanged(CCard* pCard, CCard* pFromCard, CCard* pToCard);
	void OnThisCardMoved(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnEquippedCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnEquippedCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);
	void OnEquippedCardKeywordChanged(CCardKeyword* pCardKeyword, CardKeyword fromCardKeyword, CardKeyword toCardKeyword);
	void OnEquippedCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword);
	void OnEquippedCardChanged();
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);

	CWhenSelfCardTypeChanged	m_WhenThisCardTypeChanged;
	CWhenIsAlsoAChanged		m_WhenThisCardAlsoAChanged;
	CWhenSelfMoved			m_WhenThisCardMoved;


	ListenerPtr<CardMovementEventSource::Listener>	m_cpPhaseListener;
	CStateSupportPtrType<CCreatureCard>			m_pEquippedCreature;
	ListenerPtr<CardMovementEventSource::Listener>	m_cpEquippedCardMoveListener;
	ListenerPtr<CardTypeEventSource::Listener>	m_cpEquippedCardTypeListener;
	ListenerPtr<CCreatureKeyword::Listener>		m_cpEquippedCreatureKeywordListener;
	ListenerPtr<CCardKeyword::Listener>			m_cpEquippedCardKeywordListener;

	CCreatureModifiers	m_CreatureModifiers;
	CCardModifiers		m_CardModifiers;

	CardComparer* p_Comparer;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/* 
Ref:
	Starlight 1W
	Sorcery
	You gain 3 life for each black creature target opponent controls.
*/
class CORE_EXPORT CTargetChgLifeBySurveySpell2 : public CTargetPlayerCardsSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeBySurveySpell2(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 const CCardFilter* pCardFilter,
								 int nMultiplier);
	virtual ~CTargetChgLifeBySurveySpell2() {}

	OVERRIDE(void, ResolvePlayerCards)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const CCountedCardContainer& cards, const ContextValue& value);

	int m_nMultiplier;
	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
/*
Ref: 
	Plague of Damnation XBG (custom card)
	Sorcery
	Destroy each artifact, creature, and enchantment with converted mana cost X. Then target opponent reveals 
	his or her hand and discards each artifact, creature, and enchantment with converted mana cost X.
*/
class CORE_EXPORT CTargetPlayerDiscardCardSpell4 : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerDiscardCardSpell4(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   const CCardFilter* pCardFilter = CCardFilter::GetFilter(_T("cards")),
								   MoveType discardMoveType = MoveType::Discard,
								   ZoneId toZoneId = ZoneId::Graveyard,
								   BOOL bToOwnersZone = TRUE,
								   CardPlacement placement = CardPlacement::Top,
								   CTargeting* pTargeting = new CTargeting);

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	MoveType		m_DiscardMoveType;
	ZoneId			m_ToZoneId;
	BOOL			m_bToOwnersZone;
	CardPlacement	m_Placement;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
/*
Ref: 
	Plague of Damnation XBG (custom card)
	Sorcery
	Destroy each artifact, creature, and enchantment with converted mana cost X. Then target opponent reveals 
	his or her hand and discards each artifact, creature, and enchantment with converted mana cost X.
*/
class CORE_EXPORT CTargetPlayerDiscardCardSpell5 : public CTargetPlayerDiscardCardSpell4
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerDiscardCardSpell5(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   const CCardFilter* pCardFilter = CCardFilter::GetFilter(_T("cards")),
								   MoveType discardMoveType = MoveType::Discard,
								   ZoneId toZoneId = ZoneId::Graveyard,
								   BOOL bToOwnersZone = TRUE,
								   CardPlacement placement = CardPlacement::Top,
								   CTargeting* pTargeting = new CTargeting);

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CMoveCardModifier m_Modifier;
};

//____________________________________________________________________________
//
/*
Ref:
	Imperial Edict 1B
	Sorcery
	Target opponent chooses a creature he or she controls. Destroy it.
*/
class CORE_EXPORT CImperialEdictSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

protected:
	CImperialEdictSpell(CCard* pCard, AbilityType abilityType,
								LPCTSTR strManaCost,
								const CCardFilter* pCardFilter,
								CTargeting* pTargeting = new CMyTargeting);
	virtual ~CImperialEdictSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);
	VIRTUAL(void, GetSelectionEntries)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CSelectionSupport m_SelectionSupport;
	const CCardFilter* m_pCardFilter;
};
//____________________________________________________________________________
//
/*
	Target opponent sacrifices a creature + some effect.
Ref:
	Warren Weirding 1B
	Tribal Sorcery — Goblin
	Target player sacrifices a creature. If a Goblin is sacrificed this way, that player puts two 1/1 black 
	Goblin Rogue creature tokens onto the battlefield, and those tokens gain haste until end of turn.
*/
class CORE_EXPORT CTargetSacrificePlusSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};


public:
	void SetCreateGoblins(BOOL nCreateGoblins) { m_CreateGoblins = nCreateGoblins; }
	void SetGainLifeEqualToughness(BOOL nGainLife) { m_GainLife = nGainLife; }
	void SetDrawCardsEqualPower(BOOL nDrawCards) { m_DrawCards = nDrawCards; }

protected:
	CTargetSacrificePlusSpell(CCard* pCard, AbilityType abilityType,
								LPCTSTR strManaCost,
								const CCardFilter* pCardFilter,
								CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetSacrificePlusSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);
	VIRTUAL(void, GetSelectionEntries)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CSelectionSupport m_SelectionSupport;
	const CCardFilter* m_pCardFilter;
	BOOL m_CreateGoblins;
	BOOL m_GainLife;
	BOOL m_DrawCards;
};

//____________________________________________________________________________
//
/*
	Specific to Oona, Queen of the Fae
Ref:
	Oona, Queen of the Fae 3 U/B U/B U/B
	Legendary Creature — Faerie Wizard (5/5)
	Flying
	X U/B: Choose a color. Target opponent exiles the top X cards of his or her library. 
	For each card of the chosen color exiled this way, put a 1/1 blue and black 
	Faerie Rogue creature token with flying onto the battlefield.
*/
class CORE_EXPORT COonaQueenoftheFaeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	COonaQueenoftheFaeSpell(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCost,
				     int nRevealCount);	// Supports SpecialNumber::DivideBy2RoundUp and SpecialNumber::DivideBy2RoundDown
	virtual ~COonaQueenoftheFaeSpell() {}

public:
	// Default: false
	void SetRevealCardsToOthers(BOOL bRevealCardsToOthers) { m_bRevealCardsToOthers = bRevealCardsToOthers; }

	// Reorder revealed card before putting them back on top of the Library
	// Default: false
	void SetReorder(BOOL bReorder, 
		ZoneId reorderToZone = ZoneId::Library,
		CardPlacement reorderToZonePlacement = CardPlacement::Top) 
	{ 
		m_bReorder = bReorder; 
		m_ReorderToZone = reorderToZone;
		m_ReorderToZonePlacement = reorderToZonePlacement;

		UpdateTargetCharacteristic();
	}

	void SetSelectionOptions(
		MaximumValue nMaxSelectionCount, 
		ZoneId selectToZone, 
		CardPlacement selectToZonePlacement,
		const CCardFilter* pSelectionCardFilter,
		MinimumValue nMinSelectionCount = MinimumValue(1)) 
	{ 
		m_nMaxSelectionCount = nMaxSelectionCount; 
		m_nMinSelectionCount = nMinSelectionCount; 
		m_SelectToZone = selectToZone;
		m_SelectToZonePlacement = selectToZonePlacement;
		m_pSelectionCardFilter = pSelectionCardFilter;

		UpdateTargetCharacteristic();
	} 

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter, int nRevealCount);

	void UpdateTargetCharacteristic();

	BOOL		m_bRevealCardsToOthers;
	BOOL		m_bReorder;
	ZoneId		m_ReorderToZone;
	CardPlacement m_ReorderToZonePlacement;

	MaximumValue	m_nMaxSelectionCount;
	MinimumValue	m_nMinSelectionCount;
	ZoneId			m_SelectToZone;
	CardPlacement	m_SelectToZonePlacement;
	const CCardFilter* m_pSelectionCardFilter;
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
	Specific to Banfire card.
Ref:
	Banefire XR
	Sorcery
	Banefire deals X damage to target creature or player.
	If X is 5 or more, Banefire can't be countered by spells or abilities and the damage can't be prevented.
*/
class CORE_EXPORT CBanefireSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CBanefireSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer,
				  BOOL bTargetPlayers,
				  Life nLifeDelta,
				  PreventableType preventable);
	virtual ~CBanefireSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReverseLifeDeltaToController() { m_bReverseLifeDeltaToController = TRUE; }
	void SetPropagateToTargetedPlayersCreatures() { m_bPropagateToTargetedPlayersCreatures = TRUE; }

	void SetDamageType(DamageType damageType) { m_LifeModifier.SetDamageType(damageType); } // default: DamageType::NonCombatDamage

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	BOOL m_bReverseLifeDeltaToController;
	BOOL m_bPropagateToTargetedPlayersCreatures;

	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			if (GetAbility()->GetActionValue().nValue1 < 0)
				return Characteristic::Negative;
			
			if (GetAbility()->GetActionValue().nValue1 > 0)
				return Characteristic::Positive;

			if (!GetAbility()->GetExtraActionValueVector().Any())
				return Characteristic::Neutral;

			return GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive;
		}
	};
};

//____________________________________________________________________________
//
/* 
Ref:
	Path to Exile W	
	Instant
	Exile target creature. Its controller may search his or her library for a basic land card, 
	put that card onto the battlefield tapped, then shuffle his or her library.

	Ghost Quarter
	Land
	Tap: Add 1 to your mana pool.
	Tap, Sacrifice Ghost Quarter: Destroy target land. Its controller may search his or her 
	library for a basic land card, put it onto the battlefield, then shuffle his or her library.

*/
class CORE_EXPORT CTargetMoveCardSearchSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

protected:
	CTargetMoveCardSearchSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType, MinimumValue nMinSearchCount,
				         MaximumValue nMaxSearchCount,
						const CCardFilter* pCardFilter,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetMoveCardSearchSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReturnToPreviousControllerAtNext(NodeId nodeId) { m_ReturnNodeId = nodeId; }

	void SetCardPlacement(CardPlacement placement) { m_Placement = placement; }

	void SetSearchTapped() { m_bTapped = TRUE; } //Tap searched card

	CPlayerModifiers& GetCardControllerModifier() { return m_CardControllerModifier; }
	const CPlayerModifiers& GetCardControllerModifier() const { return m_CardControllerModifier; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	void OnSearchSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_SearchSelection;

	BOOL	m_bToOwner;
	ZoneId	m_ToZoneId;
	NodeId	m_ReturnNodeId;
	MoveType m_MoveType;
	CardPlacement m_Placement;
	CPlayerModifiers m_CardControllerModifier;


	CPlayer* m_pController;
	MinimumValue	m_nMinSearchCount;
	MaximumValue	m_nMaxSearchCount;
	ZoneId	m_SearchToZoneId;			// Default: to caster's hand
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	BOOL	m_bTapped;
	BOOL	m_bRevealCardsToOthers;	// Default: reveal to others
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
/*
Ref:
	Cabal Therapy B
	Sorcery
	Name a nonland card. Target player reveals his or her hand and discards all cards with that name.
	Flashback—Sacrifice a creature. (You may cast this card from your graveyard for its flashback cost. 
	Then exile it.)

	Cranial Extraction 3B
	Sorcery — Arcane
	Name a nonland card. Search target player's graveyard, hand, and library for all cards with that name 
	and exile them. Then that player shuffles his or her library.

	Thought Hemorrhage 2BR
	Sorcery
	Name a nonland card. Target player reveals his or her hand. Thought Hemorrhage deals 3 damage to that 
	player for each card with that name revealed this way. Search that player's graveyard, hand, and library 
	for all cards with that name and exile them. Then that player shuffles his or her library.
*/
class CORE_EXPORT CTargetPlayerDiscardCardNameSpell: public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetPlayerDiscardCardNameSpell(CCard* pCard, AbilityType abilityType, // e.g AbilityType::Sorcery, AbilityType::Instant etc.
								   LPCTSTR strManaCost,						 // cost e.g. _T("3") BLACK_MANA_TEXT
								   ZoneId toZoneId,							 // named cards go to this zone e.g. ZoneId::Graveyard
								   BOOL bToOwnersZone,						 // 
								   const CCardFilter* pCardFilter,			 // legal search targets, card types that can be named. normally non land
								   BOOL bExileAll = FALSE, BOOL bDamage = FALSE,
								   CTargeting* pTargeting = new CTargeting ); 
	virtual ~CTargetPlayerDiscardCardNameSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter);

	const CCardFilter* m_pCardFilter;
	
	ZoneId	m_ToZoneId;
	BOOL	m_bToOwnersZone;
	BOOL	m_bExileAll;
	BOOL	m_bDamage;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
	Specific to Lammastide Weave card.
Ref:
	Lammastide Weave 1G
	Instant
	Name a card, then target player puts the top card of his or her library into his or her graveyard. 
	If that card is the named card, you gain life equal to its converted mana cost.
	Draw a card.
*/
class CORE_EXPORT CLammastideWeaveSpell: public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CLammastideWeaveSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   CTargeting* pTargeting = new CTargeting);
	virtual ~CLammastideWeaveSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
// If you have time please convert from CTargetDrawCard spell via __super (only last selection need to be added)
/*
	Specific to Compulsive Research card.
Ref:
	Compulsive Research 2U
	Sorcery
	Target player draws three cards. Then that player discards two cards unless he or she 
	discards a land card.
*/
class CORE_EXPORT CCompulsiveResearchSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCompulsiveResearchSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 int nDrawCount);
	virtual ~CCompulsiveResearchSpell() {}

public:
	void SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
					ZoneId discardToZone = ZoneId::Graveyard, BOOL bDiscardToTop = TRUE);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void UpdateTargetCharacteristic();

	int		m_nDiscardCount;
	BOOL	m_bFromDrawsOnly;
	ZoneId	m_DiscardToZone;
	BOOL	m_bDiscardToTop;
	MoveType m_DiscardMoveType;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
	Specific to Intuition card.
Ref:
	Intuition 2U
	Instant
	Search your library for three cards and reveal them. Target opponent chooses one. 
	Put that card into your hand and the rest into your graveyard. 
	Then shuffle your library.
*/
class CORE_EXPORT CIntuitionSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CIntuitionSpell(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  MinimumValue nMinSearchCount,
								  MaximumValue nMaxSearchCount,
								  const CCardFilter* pCardFilter,
								  CTargeting* pTargeting = new CTargeting);
	virtual ~CIntuitionSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetSearchLibraryData(ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped, BOOL bRevealCardsToOthers)
	{
		m_ToZoneId = toZoneId;
		m_bToOwnersZone = bToOwnersZone;
		m_bToTop = bToTop;
		m_bTapped = bTapped;
		m_bRevealCardsToOthers = bRevealCardsToOthers;

		UpdateTargetCharacteristic();
	}

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);
	
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void UpdateTargetCharacteristic();

	MinimumValue	m_nMinSearchCount;
	MaximumValue	m_nMaxSearchCount;
	ZoneId	m_ToZoneId;			// Default: to caster's hand
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	BOOL	m_bTapped;
	BOOL	m_bRevealCardsToOthers;	// Default: reveal to others
	const CCardFilter* m_pCardFilter;

	CCountedCardContainer m_SearchedCards;
	CSelectionSupport m_SelectionSupport;
};

//____________________________________________________________________________
//
/*
Ref:
	Stave Off W
	Instant
	Target creature gains protection from the color of your choice until end of turn. (It can't be 
	blocked, targeted, dealt damage, or enchanted by anything of that color.)
*/
class CORE_EXPORT CTargetGainKeywordSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetGainKeywordSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pTargetComparer);
	virtual ~CTargetGainKeywordSpell() {}

public:
	void AddCardKeywordToSelection(CardKeyword cardKeywordToAdd, BOOL bThisTurnOnly,
							    LPCTSTR strCardKeywordText);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	struct CardKeywordSelectionEntry
	{
		CardKeyword cardKeywordToAdd;
		BOOL	 bThisTurnOnly;
		CString	 strCardKeywordText;
	};

	vector<CardKeywordSelectionEntry>	m_Selection;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
Ref:
	Detonate XR
	Sorcery
	Destroy target artifact with converted mana cost X. It can't be regenerated. Detonate deals 
	X damage to that artifact's controller.
*/
class CORE_EXPORT CTargetExtraMoveCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

protected:
	CTargetExtraMoveCardSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType, BOOL pOrLess = FALSE,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetExtraMoveCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReturnToPreviousControllerAtNext(NodeId nodeId) { m_ReturnNodeId = nodeId; }

	void SetCardPlacement(CardPlacement placement) { m_Placement = placement; }

	CPlayerModifiers& GetCardControllerModifier() { return m_CardControllerModifier; }
	const CPlayerModifiers& GetCardControllerModifier() const { return m_CardControllerModifier; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	BOOL	m_bToOwner;
	ZoneId	m_ToZoneId;
	NodeId	m_ReturnNodeId;
	MoveType m_MoveType;
	CardPlacement m_Placement;
	CPlayerModifiers m_CardControllerModifier;
	BOOL m_pOrLess;
};

//____________________________________________________________________________
//
/*
Specific to Gifts Ungiven card.
Ref:
	Gifts Ungiven 3U
	Instant
	Search your library for up to four cards with different names and reveal them. 
	Target opponent chooses two of those cards. Put the chosen cards into your graveyard and 
	the rest into your hand. Then shuffle your library.
*/
class CORE_EXPORT CGiftsUngivenSpell : public CTargetSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGiftsUngivenSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   CardComparer* pComparer, CTargeting* pTargeting = new CTargeting);	
	virtual ~CGiftsUngivenSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CardComparer* m_pComparer;
	CCountedCardContainer m_FoundCards;
	int_ m_pAmount;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer_			m_DiscardedCards;
};

//____________________________________________________________________________
//
/*
Specific to Searing Blaze card.
Ref:
	Searing Blaze RR
	Instant	
	Searing Blaze deals 1 damage to target player and 1 damage to target creature that player controls.
	Landfall — If you had a land enter the battlefield under your control this turn, Searing Blaze deals 
	3 damage to that player and 3 damage to that creature instead.
*/
class CORE_EXPORT CSearingBlazeSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSearingBlazeSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer,
				  BOOL bTargetPlayers,
				  Life nLifeDelta,
				  PreventableType preventable);
	virtual ~CSearingBlazeSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReverseLifeDeltaToController() { m_bReverseLifeDeltaToController = TRUE; }
	void SetPropagateToTargetedPlayersCreatures() { m_bPropagateToTargetedPlayersCreatures = TRUE; }

	void SetDamageType(DamageType damageType) { m_LifeModifier.SetDamageType(damageType); } // default: DamageType::NonCombatDamage

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	BOOL m_bReverseLifeDeltaToController;
	BOOL m_bPropagateToTargetedPlayersCreatures;

	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			if (GetAbility()->GetActionValue().nValue1 < 0)
				return Characteristic::Negative;
			
			if (GetAbility()->GetActionValue().nValue1 > 0)
				return Characteristic::Positive;

			if (!GetAbility()->GetExtraActionValueVector().Any())
				return Characteristic::Neutral;

			return GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive;
		}
	};
};

//____________________________________________________________________________
//
/*
Ref:
	Horde of Notions
	WUBRG
	Legendary Creature — Elemental
	Vigilance, trample, haste
	WUBRG: You may play target Elemental card from your graveyard without paying its mana cost.
*/
class CORE_EXPORT CTargetFreeCastSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetFreeCastSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId, CTargeting* pTargeting = new CTargeting);
	virtual ~CTargetFreeCastSpell() {}

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);		

		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;
};

//____________________________________________________________________________
//
/*
Ref: 
	Cursed Scroll 1
	Artifact
	3, Tap: Name a card. Reveal a card at random from your hand. If it's the named card, 
	Cursed Scroll deals 2 damage to target creature or player.
*/
class CORE_EXPORT CCursedScrollSpell: public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCursedScrollSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   CTargeting* pTargeting = new CTargeting);
	virtual ~CCursedScrollSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);	


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener1;
	
	void OnSelectionDone2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);	


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener2;

	CLifeModifier m_LifeModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			if (GetAbility()->GetActionValue().nValue1 < 0)
				return Characteristic::Negative;
			
			if (GetAbility()->GetActionValue().nValue1 > 0)
				return Characteristic::Positive;

			if (!GetAbility()->GetExtraActionValueVector().Any())
				return Characteristic::Neutral;

			return GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive;
		}
	};
};


//____________________________________________________________________________
//

/*
Ref:
	Peel From Reality 1U
	Instant
	Return target creature you control and target creature you don't control to their owners' hands.
*/
class CORE_EXPORT CDoubleTargetSpell : public CSpell
{
protected:
	DEFINE_CREATE_TO_CPTR_ONLY

	CDoubleTargetSpell(CCard* pCard, AbilityType abilityType,
				 LPCTSTR strManaCost,
				 CardComparer* pComparer1,
				 BOOL bTargetPlayers1,
				 CardComparer* pComparer2,
				 BOOL bTargetPlayers2,
				 LPCTSTR pText,
				 BOOL pAnother = FALSE,
				 CTargeting* pTargeting1 = new CTargeting, 
				 CTargeting* pTargeting2 = new CTargeting)
		: CSpell(pCard, abilityType, strManaCost, FALSE)
		, m_bAdjustTargetCountWithExtraCostValue1(false)
		, m_bAdjustTargetCountWithExtraCostValueAddOne1(false)	// for strive ability
		, m_bFreeAdjustTargetCountWithExtraCostValue1(false)
		, m_bAdjustTargetCountWithExtraCostValue2(false)
		, m_bAdjustTargetCountWithExtraCostValueAddOne2(false)	// for strive ability
		, m_bFreeAdjustTargetCountWithExtraCostValue2(false)
		, m_pText(pText)
		, m_pAnother(pAnother)
	{
		m_apTargeting1.reset(pTargeting1);
		m_apTargeting1->SetAbility(this);
		m_apTargeting1->SetIncludePlayers(bTargetPlayers1);
		m_apTargeting1->GetSubjectCardFilter().AddComparer(pComparer1);

		m_apTargeting2.reset(pTargeting2);
		m_apTargeting2->SetAbility(this);
		m_apTargeting2->SetIncludePlayers(bTargetPlayers2);
		m_apTargeting2->GetSubjectCardFilter().AddComparer(pComparer2);
	}

	virtual ~CDoubleTargetSpell() 
	{}

public:
	// Targeting

	CTargeting* GetTargeting1()								{ return m_apTargeting1.get(); }
	const CTargeting* GetTargeting1() const					{ return m_apTargeting1.get(); }

	CTargeting* GetTargeting2()								{ return m_apTargeting2.get(); }
	const CTargeting* GetTargeting2() const					{ return m_apTargeting2.get(); }

//	CSubjectModifier& GetTargetModifier()					{ return m_TargetModifier; }
//	const CSubjectModifier& GetTargetModifier() const		{ return m_TargetModifier; }

	void FlagTargets(BOOL bFlagTargets,						// if set, targets will be flagged by CardFlag::AbilityFlag and the ability's instance ID.
					 BOOL bKeepFlagUntilEndOfTurn = FALSE);	// if set, flags are not cleared until end of turn. Normally flags are cleared immediately after resolutions.

	void AdjustTarget1CountWithExtraCostValue()				{ m_bAdjustTargetCountWithExtraCostValue1		= true; }
	void AdjustTarget1CountWithExtraCostValueAddOne()		{ m_bAdjustTargetCountWithExtraCostValueAddOne1 = true; }	// for strive ability
	void FreeAdjustTarget1CountWithExtraCostValue()			{ m_bFreeAdjustTargetCountWithExtraCostValue1   = true; }
	void AdjustTarget2CountWithExtraCostValue()				{ m_bAdjustTargetCountWithExtraCostValue2		= true; }
	void AdjustTarget2CountWithExtraCostValueAddOne()       { m_bAdjustTargetCountWithExtraCostValueAddOne2 = true; }	// for strive ability
	void FreeAdjustTarget2CountWithExtraCostValue()			{ m_bFreeAdjustTargetCountWithExtraCostValue2	= true; }

	// Overrides

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
	{
		if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
			return FALSE;

		return (GetTargeting1()->HasLegalSubjects(bIncludeTricks) && GetTargeting2()->HasLegalSubjects(bIncludeTricks));
	}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
//	OVERRIDE(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);

	VIRTUAL(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2);
//	VIRTUAL(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

protected:
//	CSubjectModifier	m_TargetModifier;
	bool				m_bAdjustTargetCountWithExtraCostValue1;
	bool				m_bAdjustTargetCountWithExtraCostValueAddOne1;	// for strive ability
	bool				m_bFreeAdjustTargetCountWithExtraCostValue1;
	bool				m_bAdjustTargetCountWithExtraCostValue2;
	bool				m_bAdjustTargetCountWithExtraCostValueAddOne2;	// for strive ability
	bool				m_bFreeAdjustTargetCountWithExtraCostValue2;

private:
	std::auto_ptr<CTargeting>	m_apTargeting1;
	std::auto_ptr<CTargeting>	m_apTargeting2;
	CCardFlagModifier			m_CardFlagModifier;
	LPCTSTR						m_pText;
	BOOL                        m_pAnother;
};

//____________________________________________________________________________
//
/*
Ref:
	Auriok Windwalker 3W
	Creature — Human Wizard
	Flying
	Tap: Attach target Equipment you control to target creature you control.
*/
class CORE_EXPORT CEquipSpell: public CDoubleTargetSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CEquipSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost);
	virtual ~CEquipSpell() {}

protected:
	OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2);
};

//____________________________________________________________________________
//
/*
Ref:
	Donate 2U
	Sorcery
	Target player gains control of target permanent you control.
*/
class CORE_EXPORT CDonateSpell: public CDoubleTargetSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDonateSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost);
	virtual ~CDonateSpell() {}

protected:
	OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2);
};

//____________________________________________________________________________
//
/*
Ref:
	Consume Strength 1BG
	Instant
	Target creature gets +2/+2 until end of turn. Another target creature gets -2/-2 until end of turn.
*/
class CORE_EXPORT CDoubleTargetChgPwrTghAttrSpell : public CDoubleTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDoubleTargetChgPwrTghAttrSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						Power nPowerDelta1, Life nLifeDelta1, Power nPowerDelta2, Life nLifeDelta2,
						CreatureKeyword creatureKeywordToAdd1, CreatureKeyword creatureKeywordToRemove1,
						CreatureKeyword creatureKeywordToAdd2, CreatureKeyword creatureKeywordToRemove2,
						BOOL bThisTurnOnly,
						PreventableType preventable,
						CardComparer* pComparer1 = new AnyCreatureComparer,
						CardComparer* pComparer2 = new AnyCreatureComparer);
	virtual ~CDoubleTargetChgPwrTghAttrSpell() {}

public:
	const CCreatureKeywordModifier& GetCreatureKeywordMod1() const { return m_CreatureKeywordModifier1; }
	const CCardKeywordModifier& GetCardKeywordMod1() const { return m_CardKeywordModifier1; }
	
	const CCreatureKeywordModifier& GetCreatureKeywordMod2() const { return m_CreatureKeywordModifier2; }
	const CCardKeywordModifier& GetCardKeywordMod2() const { return m_CardKeywordModifier2; }

	CCreatureKeywordModifier& GetCreatureKeywordMod1() { return m_CreatureKeywordModifier1; }
	CCardKeywordModifier& GetCardKeywordMod1() { return m_CardKeywordModifier1; }

	CCreatureKeywordModifier& GetCreatureKeywordMod2() { return m_CreatureKeywordModifier2; }
	CCardKeywordModifier& GetCardKeywordMod2() { return m_CardKeywordModifier2; }

	const CLifeModifier& GetLifeMod1() const { return m_LifeModifier1; }
	const CPowerModifier& GetPowerMod1() const { return m_PowerModifier1; }

	const CLifeModifier& GetLifeMod2() const { return m_LifeModifier2; }
	const CPowerModifier& GetPowerMod2() const { return m_PowerModifier2; }

	 CLifeModifier& GetLifeMod1() { return m_LifeModifier1; }
	 CPowerModifier& GetPowerMod1() { return m_PowerModifier1; }

	 CLifeModifier& GetLifeMod2() { return m_LifeModifier2; }
	 CPowerModifier& GetPowerMod2()  { return m_PowerModifier2; }

protected:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2);	

	CLifeModifier				m_LifeModifier1;
	CPowerModifier				m_PowerModifier1;
	CCreatureKeywordModifier	m_CreatureKeywordModifier1;
	CCardKeywordModifier		m_CardKeywordModifier1;

	CLifeModifier				m_LifeModifier2;
	CPowerModifier				m_PowerModifier2;
	CCreatureKeywordModifier	m_CreatureKeywordModifier2;
	CCardKeywordModifier		m_CardKeywordModifier2;

private:
	class CORE_EXPORT CMyTargeting1 : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CDoubleTargetChgPwrTghAttrSpell* pAbility = (CDoubleTargetChgPwrTghAttrSpell*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				pAbility->GetLifeMod1().GetLifeDelta(), pAbility->GetPowerMod1().GetPowerDelta(),
				!GET_INTEGER(pAbility->GetLifeMod1().GetLifeDelta()) && !GET_INTEGER(pAbility->GetPowerMod1().GetPowerDelta()) && GetAbility()->GetExtraActionValueVector().Any() ? 
					(GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive) 
					: Characteristic::Neutral,
				pAbility->m_CardKeywordModifier1.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier1.GetModifier().GetToRemove(),
				pAbility->m_CreatureKeywordModifier1.GetModifier().GetToAdd(),
				pAbility->m_CreatureKeywordModifier1.GetModifier().GetToRemove());
		}
	};
	
	class CORE_EXPORT CMyTargeting2 : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CDoubleTargetChgPwrTghAttrSpell* pAbility = (CDoubleTargetChgPwrTghAttrSpell*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				pAbility->GetLifeMod2().GetLifeDelta(), pAbility->GetPowerMod2().GetPowerDelta(),
				!GET_INTEGER(pAbility->GetLifeMod2().GetLifeDelta()) && !GET_INTEGER(pAbility->GetPowerMod2().GetPowerDelta()) && GetAbility()->GetExtraActionValueVector().Any() ? 
					(GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive) 
					: Characteristic::Neutral,
				pAbility->m_CardKeywordModifier2.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier2.GetModifier().GetToRemove(),
				pAbility->m_CreatureKeywordModifier2.GetModifier().GetToAdd(),
				pAbility->m_CreatureKeywordModifier2.GetModifier().GetToRemove());
		}
	};
};

//____________________________________________________________________________
//
/*
Ref:
	Orim's Chant W
	Instant
	Kicker W (You may pay an additional W as you cast this spell.)
	Target player can't cast spells this turn.
	If Orim's Chant was kicked, creatures can't attack this turn.
*/
class CORE_EXPORT COrimsChantSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	COrimsChantSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost);
	virtual ~COrimsChantSpell() {}

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
/*
Specific to Vengeful Rebirth card.
Ref:
	Vengeful Rebirth 4RG
	Sorcery
	Return target card from your graveyard to your hand. If you return a nonland card to 
	your hand this way, Vengeful Rebirth deals damage equal to that card's converted mana 
	cost to target creature or player.
	Exile Vengeful Rebirth.
*/
class CORE_EXPORT CVengefulRebirthSpell: public CDoubleTargetSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CVengefulRebirthSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost);
	virtual ~CVengefulRebirthSpell() {}

protected:
	OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2);
};

//____________________________________________________________________________
//
/*
Specific to Blinding Beam card.
Ref:	
	Blinding Beam 2W
	Instant
	Choose one — Tap two target creatures; or creatures don't untap during target player's next untap step.
	Entwine 1 (Choose both if you pay the entwine cost.)
*/
class CORE_EXPORT CBlindingBeamSpell: public CDoubleTargetSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CBlindingBeamSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost);
	virtual ~CBlindingBeamSpell() {}

protected:
	OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2);
};

//____________________________________________________________________________
//
/*
Ref:
	Shrine of Burning Rage 2
	Artifact
	At the beginning of your upkeep or whenever you cast a red spell, put a charge 
	counter on Shrine of Burning Rage.
	3, Tap, Sacrifice Shrine of Burning Rage: Shrine of Burning Rage deals damage 
	equal to the number of charge counters on it to target creature or player.

	Magma Mine 1
	Artifact
	4: Put a pressure counter on Magma Mine.
	Tap, Sacrifice Magma Mine: Magma Mine deals damage equal to the number of pressure 
	counters on it to target creature or player.

*/
class CORE_EXPORT CTargetChgLifeSpellCounter : public CTargetSpell					
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetChgLifeSpellCounter(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 BOOL bTargetPlayers,
						 PreventableType preventable,
						 LPCTSTR pCounter,
						 DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CTargetChgLifeSpellCounter() {}

public:
/*	void SetReceiveDamageFromTargetedCreature()	
	{ 
		ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());
		m_bReceiveDamageFromTargetedCreature = TRUE; 
	}*/

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CLifeModifier m_LifeModifier;
	LPCTSTR m_pCounter;

	//BOOL	m_bReceiveDamageFromTargetedCreature;
};

//____________________________________________________________________________
//
/*
Ref:
	Hex Parasite 1
	Artifact Creature — Insect
	X Phyrexian B: Remove up to X counters from target permanent. For each counter removed this way, 
	Hex Parasite gets +1/+0 until end of turn. (Phyrexian Black can be paid with either Black or 
	2 life.)
*/
class CORE_EXPORT CTargetCounterPumpSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetCounterPumpSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer);
	virtual ~CTargetCounterPumpSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);	

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);		

	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;

};

//____________________________________________________________________________
//
/*
Specific to Surgical Extraction card.
Ref:
	Surgical Extraction Phyrexian B
	Instant
	(Phyrexian Black can be paid with either Black or 2 life.)
	Choose target card in a graveyard other than a basic land card. Search its owner's graveyard, 
	hand, and library for any number of cards with the same name as that card and exile them. 
	Then that player shuffles his or her library.
*/
class CORE_EXPORT CSurgicalExtractionSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSurgicalExtractionSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer);
	virtual ~CSurgicalExtractionSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);	

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);		
};

//____________________________________________________________________________
//
// 10/08/2011 Created using CTargetDrawCardSpell as template. This type of spell can be used to add a CPlayerEffectModifier to a target player
// Using this ability class would fix deflection effect bug on some spells, which can'be be deflected.
/*
Ref:
	Sleep 2UU
	Sorcery
	Tap all creatures target player controls. Those creatures don't untap during that player's next untap step.
*/
class CORE_EXPORT CGenericTargetPlayerSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGenericTargetPlayerSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost);
	virtual ~CGenericTargetPlayerSpell() {}
};

//____________________________________________________________________________
//
/*
Ref:	
	Roar of the Crowd 3R
	Sorcery
	Choose a creature type. Roar of the Crowd deals damage to target creature or player equal
	to the number of permanents you control of the chosen type.
*/
class CORE_EXPORT CGenericTargetPlayerCreatureSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGenericTargetPlayerCreatureSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost, CardComparer* comparer);
	virtual ~CGenericTargetPlayerCreatureSpell() {}
};

//____________________________________________________________________________
//
/*
Ref:
	Repentance 2W
	Sorcery
	Target creature deals damage to itself equal to its power.
*/
class CORE_EXPORT CGenericTargetCreatureSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGenericTargetCreatureSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost, CardComparer* comparer);
	virtual ~CGenericTargetCreatureSpell() {}
};

//____________________________________________________________________________
//
/*
Ref:
	Gauntlets of Chaos 5
	Artifact
	5, Sacrifice Gauntlets of Chaos: Exchange control of target artifact, creature, or land you control 
	and target permanent an opponent controls that shares one of those types with it. If those permanents 
	are exchanged this way, destroy all Auras attached to them.
*/
class CORE_EXPORT CExhangeControllSpell : public CDoubleTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CExhangeControllSpell(CCard* pCard, AbilityType abilityType,
				LPCTSTR strManaCost,
				CardComparer* pComparer1,
				CardComparer* pComparer2);
	virtual ~CExhangeControllSpell() {}

protected:
	//OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
	OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
};

//____________________________________________________________________________
//
/*
Ref:
	Thrull Parasite B
	Creature — Thrull
	Extort (Whenever you cast a spell, you may pay White or Black. If you do, each opponent 
	loses 1 life and you gain that much life.)
	Tap, Pay 2 life: Remove a counter from target nonland permanent.
*/
class CORE_EXPORT CTargetRemoveCounterSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetRemoveCounterSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
							 CardComparer* pComparer,
							 int nCount);

	virtual ~CTargetRemoveCounterSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_SelectionSupport;
};

//____________________________________________________________________________
//
/*
Ref:
	Reverberate RR
	Instant
	Copy target instant or sorcery spell. You may choose new targets for the copy.
*/
class CORE_EXPORT CTargetCopyCastSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetCopyCastSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId, CTargeting* pTargeting = new CTargeting);
	virtual ~CTargetCopyCastSpell() {}

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);		

		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	bool HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction);
};

//____________________________________________________________________________
//
/*
Ref:
	Echo Mage 1UU
	Creature - Human Wizard
	Level up 1U (1U: Put a level counter on this. Level up only as a sorcery.)
	LEVEL 2-3
	2/4
	UU, Tap: Copy target instant or sorcery spell. You may choose new targets for the copy.
	LEVEL 4+
	2/5
	UU, Tap: Copy target instant or sorcery spell twice. You may choose new targets for the copies.

	Used at LEVEL 4+ ability
*/

class CORE_EXPORT CTargetCopyCastTwiceSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTargetCopyCastTwiceSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId, CTargeting* pTargeting = new CTargeting);
	virtual ~CTargetCopyCastTwiceSpell() {}

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);		

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	bool HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction);
};

//____________________________________________________________________________
//
/*
Ref:
*/
/*
class CORE_EXPORT CMeletisCharlatanSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CMeletisCharlatanSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId, CTargeting* pTargeting = new CTargeting);
	virtual ~CMeletisCharlatanSpell() {}

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);		

		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	bool HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction);
};
*/
//____________________________________________________________________________
//
/*
	Specific to Foreshadow card.	
Ref:
	Foreshadow 1U
	Instant
	Name a card, then target opponent puts the top card of his or her library into his or her graveyard. 
	If that card is the named card, you draw a card.
	Draw a card at the beginning of the next turn's upkeep.
*/
class CORE_EXPORT CForeshadowSpell: public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CForeshadowSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   CTargeting* pTargeting = new CTargeting);
	virtual ~CForeshadowSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
	Specific to Predict card.	
Ref:
	Predict 1U
	Instant
	Name a card, then target player puts the top card of his or her library into his or her graveyard. 
	If that card is the named card, you draw two cards. Otherwise, you draw a card.
*/
class CORE_EXPORT CPredictSpell: public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPredictSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   CTargeting* pTargeting = new CTargeting);
	virtual ~CPredictSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
/*
Ref: 
	Karn Liberated 7
	Planeswalker — Karn
	+4: Target player exiles a card from his or her hand.
	-3: Exile target permanent.
	-14: Restart the game, leaving in exile all non-Aura permanent cards exiled with Karn Liberated. 
	Then put those cards onto the battlefield under your control.

	Used in +4 part of card.

*/
class CORE_EXPORT CTargetPlayerExileSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

protected:
	CTargetPlayerExileSpell(CCard* pCard, AbilityType abilityType,
								LPCTSTR strManaCost,
								const CCardFilter* pCardFilter,
							    CCountedCardContainer* pContainer,
								CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetPlayerExileSpell() {}

	OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);
	VIRTUAL(void, GetSelectionEntries)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CSelectionSupport m_SelectionSupport;
	const CCardFilter* m_pCardFilter;
	CCardModifier* m_pModifier;
	CCountedCardContainer* m_pContainer;
};

//____________________________________________________________________________
//
/*
Ref:
	Killing Glare XB
	Instant
	Destroy target creature with power X or less.
*/
class CORE_EXPORT CTargetExtraPowerMoveCardSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

protected:
	CTargetExtraPowerMoveCardSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId fromZoneId,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType, BOOL pOrLess = FALSE,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetExtraPowerMoveCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetReturnToPreviousControllerAtNext(NodeId nodeId) { m_ReturnNodeId = nodeId; }

	void SetCardPlacement(CardPlacement placement) { m_Placement = placement; }

	CPlayerModifiers& GetCardControllerModifier() { return m_CardControllerModifier; }
	const CPlayerModifiers& GetCardControllerModifier() const { return m_CardControllerModifier; }

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	BOOL	m_bToOwner;
	ZoneId	m_ToZoneId;
	NodeId	m_ReturnNodeId;
	MoveType m_MoveType;
	CardPlacement m_Placement;
	CPlayerModifiers m_CardControllerModifier;
	BOOL m_pOrLess;
};

//____________________________________________________________________________
//
/*
Ref:
	Minamo Sightbender 1U
	Creature — Human Wizard
	X, Tap: Target creature with power X or less can't be blocked this turn.
*/
class CORE_EXPORT CTargetExtraPowerSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

protected:
	CTargetExtraPowerSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer, BOOL pOrLess = FALSE,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CTargetExtraPowerSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	BOOL m_pOrLess;
};

//____________________________________________________________________________
//
/*
Ref:
	Helm of Obedience 4	
	Artifact
	X, Tap: Target opponent puts cards from the top of his or her library into his or her 
	graveyard until a creature card or X cards are put into that graveyard this way, 
	whichever comes first. If a creature card is put into that graveyard this way, 
	sacrifice Helm of Obedience and put that card onto the battlefield under your control. 
	X can't be 0.
*/
class CORE_EXPORT CXLowerLimitTargetSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

protected:
	CXLowerLimitTargetSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer, BOOL pTargetPlayers, int LowerLimit = 1,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CXLowerLimitTargetSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	

	int_ m_nLowerLimit;
};

//____________________________________________________________________________
//
/*
	Specific to Simic Manipulator card.
Ref:
	Simic Manipulator 1UU
	Creature — Mutant Wizard
	Evolve (Whenever a creature enters the battlefield under your control, if that 
	creature has greater power or toughness than this creature, put a +1/+1 counter 
	on this creature.)
	Tap, Remove one or more +1/+1 counters from Simic Manipulator: Gain control of 
	target creature with power less than or equal to the number of +1/+1 counters removed this way.
*/
class CORE_EXPORT CSimicManipulatorSpell : public CTargetSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		//OVERRIDE(void, DeflectTargetToCard)(CTargetSpellAction* pAction, CCard* pCard);
		OVERRIDE(BOOL, SubjectAllowed)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;
	};

protected:
	CSimicManipulatorSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 CTargeting* pTargeting = new CMyTargeting);
	virtual ~CSimicManipulatorSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);	
};

//____________________________________________________________________________
//