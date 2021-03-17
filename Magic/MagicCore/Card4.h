#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CPlaneswalkerCard : public CInPlaySpellCard
{
	friend class CPlaneswalkerTrait;

protected:
	CPlaneswalkerCard(CGame* pGame, LPCTSTR strCardName, UINT uID,
					  LPCTSTR strCostText, 
					  const PlaneswalkerType& subtype, int nLoyaltyCounter,
					  CardType cardType = CardType::Planeswalker, 
					  AbilityType abilityType = AbilityType::Creature);
	virtual ~CPlaneswalkerCard();

public:
	const PlaneswalkerType& GetSubtype() const;

	Counter* GetLoyaltyCounter();
	const Counter* GetLoyaltyCounter() const;
	BOOL GetTurnAbilityUsed() const {return m_bTurnAbilityUsed;}

	OVERRIDE(void, AddAbility)(CAbility* pAbility);

	OVERRIDE(int, GetScore)() const;

	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,	// Card moved by this player (NULL if not applicable)
						 MoveType moveType,
						 CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	OVERRIDE(void, ResetTurnPropertiesNoFlag)();
	OVERRIDE(void, ResetTurnProperties)();

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	PlaneswalkerType		m_Subtype;
	Counter*				m_pLoyaltyCounter;
	int						m_nLoyaltyCounter;
	BOOL_					m_bTurnAbilityUsed;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDoubleFacedPlaneswalkerCard : public CPlaneswalkerCard
{
protected:
	CDoubleFacedPlaneswalkerCard(CGame* pGame, LPCTSTR strCardName, UINT uID, LPCTSTR strCostText, const PlaneswalkerType& subtype, int nLoyaltyCounter,
								LPCTSTR nFlipCardName);	

public:
	void Transform();
	BOOL CanPlaySecondFace(BOOL bIncludeTricks) const;
	BOOL CanPlayFirstFace(BOOL bIncludeTricks) const;

	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }

	CCardModifiers		GetCardModifiers()  {return m_CardModifiers;}

	OVERRIDE (DWORD, GetConvertedManaCost)() const;
	OVERRIDE (DWORD, GetManaCost)(CManaCostBase::Color manaCost, BOOL bMax = TRUE);
	OVERRIDE (void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	LPCTSTR m_strFlipCardName;

	CCardModifiers m_CardModifiers;

private:
	friend CFaceTransformModifier;
	void FirstFace();
	void SecondFace();

	int_ p_type;

	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
	OVERRIDE (CString, GetPrintedCardName)() const;
	OVERRIDE (CString, GetSecondPrintedCardName)() const;
};

//____________________________________________________________________________
//

