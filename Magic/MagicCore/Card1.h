#pragma once

//____________________________________________________________________________
//
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
class CORE_EXPORT CInPlaySpellCard : public CCard
{
protected:
	CInPlaySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					 LPCTSTR strCostText, AbilityType abilityType);

	virtual ~CInPlaySpellCard() {}
};

//____________________________________________________________________________
//
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
class CORE_EXPORT CNonbasicLandCard : public CBasicLandCard
{
protected:
	CNonbasicLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID, CardType landType = CardType::NonbasicLand);
};

//____________________________________________________________________________
//
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
class CORE_EXPORT CInPlayTribalSpellCard : public CTribalCard
{
protected:
	CInPlayTribalSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					 LPCTSTR strCostText, AbilityType abilityType,  const CreatureType& creatureType);

	virtual ~CInPlayTribalSpellCard() {}
};

//____________________________________________________________________________
//
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
