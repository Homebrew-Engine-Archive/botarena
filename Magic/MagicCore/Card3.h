#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CTargetChgLifeTCreatureCard : public CCreatureCard
{
protected:
	CTargetChgLifeTCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
						  LPCTSTR strCostText, Power nPower, Life nToughness,
						  LPCTSTR strChgLifeCost,
						  CardComparer* pComparer,
						  BOOL bTargetPlayer,
						  Life nLifeDelta,
						  PreventableType preventable);

	virtual ~CTargetChgLifeTCreatureCard() {}

protected:
	CActivatedAbility<CTargetChgLifeSpell>* m_pTargetChgLifeAbility;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPumpCreatureCard : public CCreatureCard
{
protected:
	CPumpCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
					  LPCTSTR strCostText, Power nPower, Life nToughness,
					  LPCTSTR strPumpCost,
					  Power nPowerDelta, Life nLifeDelta,
					  CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	virtual ~CPumpCreatureCard() {}

protected:
	CPumpAbility*	m_pPumpAbility;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRegenerationCreatureCard : public CCreatureCard
{
protected:
	CRegenerationCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
							  LPCTSTR strCostText, Power nPower, Life nToughness,
							  LPCTSTR strRegenerateCost);

	virtual ~CRegenerationCreatureCard() {}

protected:
	CRegenerationAbility* m_pRegenerationAbility;
};

//____________________________________________________________________________
//
class CORE_EXPORT CFirstStrikeCreatureCard : public CCreatureCard
{
protected:
	CFirstStrikeCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
							 LPCTSTR strCostText, Power nPower, Life nToughness);

	virtual ~CFirstStrikeCreatureCard() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CFlyingCreatureCard : public CCreatureCard
{
protected:
	CFlyingCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
						LPCTSTR strCostText, Power nPower, Life nToughness);

	virtual ~CFlyingCreatureCard() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CHasteCreatureCard : public CCreatureCard
{
protected:
	CHasteCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
					   LPCTSTR strCostText, Power nPower, Life nToughness);

	virtual ~CHasteCreatureCard() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CLandwalkCreatureCard : public CCreatureCard
{
protected:
	CLandwalkCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
						  LPCTSTR strCostText, Power nPower, Life nToughness,
						  CreatureKeyword landwalk);

	virtual ~CLandwalkCreatureCard() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CUnblockableCreatureCard : public CCreatureCard
{
protected:
	CUnblockableCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
							 LPCTSTR strCostText, Power nPower, Life nToughness);

	virtual ~CUnblockableCreatureCard() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CManaProductionTCreatureCard : public CCreatureCard
{
protected:
	CManaProductionTCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
						   LPCTSTR strCostText, Power nPower, Life nToughness,
						   LPCTSTR strPoolText);

	virtual ~CManaProductionTCreatureCard() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CFearCreatureCard : public CCreatureCard
{
protected:
	CFearCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
					  LPCTSTR strCostText, Power nPower, Life nToughness,
					  const CCardFilter* pUnblockableCreatures = CCardFilter::GetFilter(_T("artifact creatures or black creatures")));

	virtual ~CFearCreatureCard() {}
};
//____________________________________________________________________________
//
class CORE_EXPORT CDevourCreatureCard : public CCreatureCard
{
protected:
	CDevourCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
						LPCTSTR strCostText, Power nPower, Life nToughness,
						const CCardFilter* pDevourFilter = CCardFilter::GetFilter(_T("creatures")));

	virtual ~CDevourCreatureCard() {}

public:
	void SetDevouredCount(int nDevouredCount);
	int GetDevouredCount() const;
	int				nDevouredGoblins;	//for VoraciousDragon

protected:
	int				m_nDevouredCount;
};
//____________________________________________________________________________
//
class CTokenCreature : public CCreatureCard
{
protected:
	CTokenCreature(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
				   LPCTSTR strCostText, Power nPower, Life nToughness)
		: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	{
	}

	virtual ~CTokenCreature() {}

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
class CORE_EXPORT CFlipCreatureCard : public CCreatureCard
{
protected:
	CFlipCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
					  LPCTSTR strCostText, Power nPower, Life nToughness,
					  Power nPower2, Life nToughness2, LPCTSTR nFlipCardName);	

public:
	void Flip();
	BOOL CanPlayFlipped(BOOL bIncludeTricks);
	BOOL CanPlayUnflipped(BOOL bIncludeTricks);

	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }
	void AddCreatureModifier(CCreatureModifier* pModifier) { m_CreatureModifiers.Add(pModifier); }

	CCreatureModifiers	GetCreatureModifiers()  {return m_CreatureModifiers;}
	CCardModifiers		GetCardModifiers()  {return m_CardModifiers;}

	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
	OVERRIDE (void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	LPCTSTR m_strFlipCardName;
	Power m_nPowerDelta;
	Life m_nLifeDelta;
	bool b_AddLegendary; //TODO Move to card code

	CCreatureModifiers	m_CreatureModifiers;
	CCardModifiers		m_CardModifiers;

private:
	OVERRIDE (CString, GetPrintedCardName)() const;
	OVERRIDE (CString, GetSecondPrintedCardName)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDoubleFacedCreatureCard : public CCreatureCard
{
protected:
	CDoubleFacedCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
					  LPCTSTR strCostText, Power nPower, Life nToughness,
					  Power nPower2, Life nToughness2, LPCTSTR nFlipCardName);	

public:
	void Transform();
	BOOL CanPlaySecondFace(BOOL bIncludeTricks) const;
	BOOL CanPlayFirstFace(BOOL bIncludeTricks) const;

	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }
	void AddCreatureModifier(CCreatureModifier* pModifier) { m_CreatureModifiers.Add(pModifier); }

	CCreatureModifiers	GetCreatureModifiers()  {return m_CreatureModifiers;}
	CCardModifiers		GetCardModifiers()  {return m_CardModifiers;}

	OVERRIDE (DWORD, GetConvertedManaCost)() const;
	OVERRIDE (DWORD, GetManaCost)(CManaCostBase::Color manaCost, BOOL bMax = TRUE);
	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
	OVERRIDE (void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	LPCTSTR m_strDFCardName;
	Power m_nPowerDelta;
	Life m_nLifeDelta;

	CCreatureModifiers	m_CreatureModifiers;
	CCardModifiers		m_CardModifiers;

private:
	friend CFaceTransformModifier;
	void FirstFace();
	void SecondFace();

	OVERRIDE (CString, GetPrintedCardName)() const;
	OVERRIDE (CString, GetSecondPrintedCardName)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CMorphCreatureCard : public CCreatureCard
{
protected:
	CMorphCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
					  LPCTSTR strCostText, Power nPower, Life nToughness, LPCTSTR unMorphstrCardName);	

public:
	void Morph();
	void UnMorph();

	CAbility* GetMorphAbility() {return m_nMorphAbility;}

	BOOL CanPlayMorph(BOOL bIncludeTricks);
	BOOL CanPlayUnMorph(BOOL bIncludeTricks);

	void AddCreatureType(SingleCreatureType pType);
	void AddCardKeyword(CardKeyword pKeyword);
	void AddCreatureKeyword(CreatureKeyword pKeyword);

	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }
	void AddCreatureModifier(CCreatureModifier* pModifier) { m_CreatureModifiers.Add(pModifier); }

	CCreatureModifiers	GetCreatureModifiers()  {return m_CreatureModifiers;}
	CCardModifiers		GetCardModifiers()		{return m_CardModifiers;}

	int GetMorphNumber() const {return m_number;}

	OVERRIDE (DWORD, GetConvertedManaCost)() const;
	OVERRIDE (DWORD, GetManaCost)(CManaCostBase::Color manaCost, BOOL bMax = TRUE);
	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
	OVERRIDE (void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	LPCTSTR m_strMorphCardName;
	Power m_nPowerDelta;
	Life m_nLifeDelta;

	CCreatureModifiers	m_CreatureModifiers;
	CCardModifiers		m_CardModifiers;

	void RevertMorph();

private:
	int_ p_type;
	int_ m_number;

	OVERRIDE (CString, GetSecondCardName)(BOOL bIncludeDetails = TRUE) const;
	OVERRIDE (CString, GetPrintedCardName)() const;
	OVERRIDE (CString, GetSecondPrintedCardName)() const;

	CAbility* m_nMorphAbility;
};

//____________________________________________________________________________
//