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
