#pragma once

class CCard;
class CCountedCardContainer;
class CCountedCardContainer;
class CAbility;

//____________________________________________________________________________
//
struct CORE_EXPORT CardComparer : public Comparer<const CCard*>
{
	virtual CardComparer* Clone() const = 0;
};

//____________________________________________________________________________
//
struct CORE_EXPORT NegateCardComparer : public CardComparer
{
	NegateCardComparer(CardComparer* pComparer)
		: m_pComparer(pComparer)
	{}
	
	virtual bool operator()(const CCard* value) const
	{
		return !m_pComparer->operator()(value);
	}

	virtual NegateCardComparer* Clone() const
	{
		return new NegateCardComparer(m_pComparer->Clone());
	}

protected:
	std::auto_ptr<CardComparer> m_pComparer;
};

//____________________________________________________________________________
//
struct CORE_EXPORT FalseCardComparer : public CardComparer
{
	static bool IsA(const CardComparer* pComparer)
	{
#ifndef _MY_DEBUG
		if (!pComparer)
			return true;
#endif
		return dynamic_cast<const FalseCardComparer*>(pComparer) != NULL;
	}

	virtual bool operator()(const CCard*) const
	{
		return false;
	}

	virtual FalseCardComparer* Clone() const
	{
		return new FalseCardComparer;
	}
};

#ifdef _MY_DEBUG
#define FALSE_CARD_COMPARER new FalseCardComparer
#else
#define FALSE_CARD_COMPARER (CardComparer*)NULL
#endif

//____________________________________________________________________________
//
struct CORE_EXPORT TrueCardComparer : public CardComparer
{
	virtual bool operator()(const CCard*) const
	{
		return true;
	}

	virtual TrueCardComparer* Clone() const
	{
		return new TrueCardComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardNameComparer : public CardComparer
{
	CardNameComparer(LPCTSTR strPrintedCardName)
		: m_strPrintedCardName(strPrintedCardName)
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual CardNameComparer* Clone() const
	{
		return new CardNameComparer(m_strPrintedCardName);
	}

protected:
	CString m_strPrintedCardName;
};

//____________________________________________________________________________
//
struct CORE_EXPORT PlaneswalkerTypeComparer : public CardComparer
{
	PlaneswalkerTypeComparer(PlaneswalkerType planeswalkerType)
		: m_PlaneswalkerType(planeswalkerType)
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual PlaneswalkerTypeComparer* Clone() const
	{
		return new PlaneswalkerTypeComparer(m_PlaneswalkerType);
	}

protected:
	PlaneswalkerType m_PlaneswalkerType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT PlaneTypeComparer : public CardComparer
{
	PlaneTypeComparer(PlaneType planeType)
		: m_PlaneType(planeType)
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual PlaneTypeComparer* Clone() const
	{
		return new PlaneTypeComparer(m_PlaneType);
	}

protected:
	PlaneType m_PlaneType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT ContainedinComparer : public CardComparer
{
	ContainedinComparer(CCountedCardContainer* pContained)
		: m_pContained(pContained)
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual ContainedinComparer* Clone() const
	{
		return new ContainedinComparer(m_pContained);
	}

protected:
	CCountedCardContainer* m_pContained;
};

//____________________________________________________________________________
//
struct CORE_EXPORT LeylineCardNameComparer : public CardComparer
{
	LeylineCardNameComparer()
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual LeylineCardNameComparer* Clone() const
	{
		return new LeylineCardNameComparer();
	}

};

//____________________________________________________________________________
//
struct CORE_EXPORT PhasingCardNameComparer : public CardComparer
{
	PhasingCardNameComparer()
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual PhasingCardNameComparer* Clone() const
	{
		return new PhasingCardNameComparer();
	}

};

//____________________________________________________________________________
//
struct CORE_EXPORT IndirectPhasingComparer : public CardComparer
{
	IndirectPhasingComparer()
	{
	}

	virtual bool operator()(const CCard* pCard) const;

	virtual IndirectPhasingComparer* Clone() const
	{
		return new IndirectPhasingComparer();
	}

};

//____________________________________________________________________________
//
struct CORE_EXPORT CardTypeComparer : public CardComparer
{
	CardTypeComparer(CardType cardType, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	CardType GetCardType() const { return m_CardType; }

	virtual CardTypeComparer* Clone() const
	{
		return new CardTypeComparer(m_CardType, m_bStrict);
	}

protected:
	bool m_bStrict;
	CardType m_CardType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AlsoCardTypeComparer : public CardComparer
{
	AlsoCardTypeComparer(CardType cardType, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	CardType GetCardType() const { return m_CardType; }

	virtual AlsoCardTypeComparer* Clone() const
	{
		return new AlsoCardTypeComparer(m_CardType, m_bStrict);
	}

protected:
	bool m_bStrict;
	CardType m_CardType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardZoneComparer : public CardComparer
{
	CardZoneComparer(ZoneId zones);
	virtual bool operator()(const CCard* pCard) const;

	virtual CardZoneComparer* Clone() const
	{
		return new CardZoneComparer(m_Zones);
	}

protected:
	ZoneId m_Zones;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardPresentinHistoryComparer : public CardComparer
{
	CardPresentinHistoryComparer(ZoneId toZone, ZoneId fromZone);
	virtual bool operator()(const CCard* pCard) const;

	virtual CardPresentinHistoryComparer* Clone() const
	{
		return new CardPresentinHistoryComparer(m_toZones, m_fromZones);
	}

protected:
	ZoneId m_toZones;
	ZoneId m_fromZones;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardOwnerComparer : public CardComparer
{
	CardOwnerComparer(const CPlayer* pPlayer); // This player
	CardOwnerComparer(const CCard* pCard); // This card's owner
	virtual bool operator()(const CCard* pCard) const;

	virtual CardOwnerComparer* Clone() const
	{
		if (m_pPlayer)
			return new CardOwnerComparer(m_pPlayer);
		return new CardOwnerComparer(m_pCard);
	}

protected:
	const CPlayer* m_pPlayer;
	const CCard* m_pCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardControllerComparer : public CardComparer
{
	CardControllerComparer(const CPlayer* pPlayer); // This player
	CardControllerComparer(const CCard* pCard); // This card's controller
	virtual bool operator()(const CCard* pCard) const;

	virtual CardControllerComparer* Clone() const
	{
		if (m_pPlayer)
			return new CardControllerComparer(m_pPlayer);
		return new CardControllerComparer(m_pCard);
	}

protected:
	const CPlayer* m_pPlayer;
	const CCard* m_pCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AnyCreatureComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual AnyCreatureComparer* Clone() const
	{
		return new AnyCreatureComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT FaceDownMorphComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual FaceDownMorphComparer* Clone() const
	{
		return new FaceDownMorphComparer;
	}
};

//____________________________________________________________________________
//
// this comparer was used as a template for Beseech the Queen comparer - so if you update something here - please upate in that comparer also
template <class C>
struct ConvertedManaCostComparer : public CardComparer
{
	ConvertedManaCostComparer(int nConvertedManaCost)
		: m_nConvertedManaCost(nConvertedManaCost)
	{}

	virtual bool operator()(const CCard* pCard) const
	{
		if (pCard->GetPrintedCardName() == _T("Engineered Explosives"))
			return C()(0, m_nConvertedManaCost);
		else 
			if (C()(pCard->GetConvertedManaCost(), m_nConvertedManaCost))
					return true;
		/*const CPtrContainer_<CSpell>& spells(pCard->GetSpells());		

		if (!spells.GetSize() || pCard->GetPrintedCardName() == _T("Engineered Explosives"))
			return C()(0, m_nConvertedManaCost);

		for (int i = 0; i < spells.GetSize(); ++i)
		{
			CSpell* pSpell = spells.GetAt(i);
			if (!pSpell->IsMainSpell())
				continue;
						
			if (C()(pSpell->GetCost().GetOriginalManaCost().GetTotal(), m_nConvertedManaCost))
					return true;
		}*/
		
		return false;
	}

	virtual ConvertedManaCostComparer<C>* Clone() const
	{
		return new ConvertedManaCostComparer<C>(m_nConvertedManaCost);
	}

protected:
	int m_nConvertedManaCost;
};

//____________________________________________________________________________
//
template <class C>
struct CardCounterComparer : public CardComparer
{
	CardCounterComparer(LPCTSTR strCounterName, int nCounterValue)
		: m_strCounterName(strCounterName)
		, m_nCounterValue(nCounterValue)
	{}

	virtual bool operator()(const CCard* pCard) const
	{
		const Counter* pCounter = pCard->GetCounterContainer()->GetCounter(m_strCounterName);
		return C()(pCounter ? pCounter->GetCount() : 0, m_nCounterValue);
	}

	virtual CardCounterComparer<C>* Clone() const
	{
		return new CardCounterComparer<C>(m_strCounterName, m_nCounterValue);
	}

protected:
	CString m_strCounterName;
	int m_nCounterValue;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CreatureTypeComparer : public CardComparer
{
	CreatureTypeComparer(const CreatureType& creatureType, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	CreatureType GetCreatureType() const { return m_CreatureType; }

	virtual CreatureTypeComparer* Clone() const
	{
		return new CreatureTypeComparer(m_CreatureType, m_bStrict);
	}

protected:
	bool m_bStrict;
	CreatureType m_CreatureType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT LeastPowerCreatureComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual LeastPowerCreatureComparer* Clone() const
	{
		return new LeastPowerCreatureComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT SpecificCardComparer : public CardComparer
{
	SpecificCardComparer(const CCard* pCard1, const CCard* pCard2 = NULL);
	virtual bool operator()(const CCard* pCard) const;

	virtual SpecificCardComparer* Clone() const
	{
		return new SpecificCardComparer(m_pCard1, m_pCard2);
	}

protected:
	const CCard* m_pCard1;
	const CCard* m_pCard2;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AttackingCreatureComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual AttackingCreatureComparer* Clone() const
	{
		return new AttackingCreatureComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT BlockingCreatureComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual BlockingCreatureComparer* Clone() const
	{
		return new BlockingCreatureComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT BlockedCreatureComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual BlockedCreatureComparer* Clone() const
	{
		return new BlockedCreatureComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT AttackingBlockingCreatureComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual AttackingBlockingCreatureComparer* Clone() const
	{
		return new AttackingBlockingCreatureComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT BlockingThisCreatureComparer : public CardComparer
{
	BlockingThisCreatureComparer(const CCreatureCard* pCreatureCard)
		: m_pCreatureCard(pCreatureCard)
	{}
	
	virtual bool operator()(const CCard* pCard) const;

	virtual BlockingThisCreatureComparer* Clone() const
	{
		return new BlockingThisCreatureComparer(m_pCreatureCard);
	}

protected:
	const CCreatureCard* m_pCreatureCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AttackingThisCreatureComparer : public CardComparer
{
	AttackingThisCreatureComparer(const CCreatureCard* pCreatureCard)
		: m_pCreatureCard(pCreatureCard)
	{}
	
	virtual bool operator()(const CCard* pCard) const;

	virtual AttackingThisCreatureComparer* Clone() const
	{
		return new AttackingThisCreatureComparer(m_pCreatureCard);
	}

protected:
	const CCreatureCard* m_pCreatureCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AttackingBlockingThisCreatureComparer : public CardComparer
{
	AttackingBlockingThisCreatureComparer(const CCreatureCard* pCreatureCard)
		: m_pCreatureCard(pCreatureCard)
	{}
	
	virtual bool operator()(const CCard* pCard) const;

	virtual AttackingBlockingThisCreatureComparer* Clone() const
	{
		return new AttackingBlockingThisCreatureComparer(m_pCreatureCard);
	}

protected:
	const CCreatureCard* m_pCreatureCard;
};

//____________________________________________________________________________
//
template <class C>
struct CreaturePowerComparer : public CardComparer
{
	CreaturePowerComparer(int nValue)
		: m_nValue(nValue)
	{}

	virtual bool operator()(const CCard* pCard) const
	{
		if (!pCard->GetCardType().IsCreature())
			return false;

		const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(pCard);
		if (!pCreature) return false;
		return C()(GET_INTEGER(pCreature->GetPower()), m_nValue);
	}

	virtual CreaturePowerComparer<C>* Clone() const
	{
		return new CreaturePowerComparer<C>(m_nValue);
	}

protected:
	int m_nValue;
};

//____________________________________________________________________________
//
template <class C>
struct CreatureCreaturePowerComparer : public CardComparer
{
	CreatureCreaturePowerComparer(CCreatureCard* nCard)
		: m_nCard(nCard)
	{}

	virtual bool operator()(const CCard* pCard) const
	{
		if (!pCard->GetCardType().IsCreature())
			return false;

		const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(pCard);
		if (!pCreature) return false;
		return C()(GET_INTEGER(pCreature->GetPower()), GET_INTEGER(dynamic_cast<const CCreatureCard*>(m_nCard)->GetPower()));
	}

	virtual CreatureCreaturePowerComparer<C>* Clone() const
	{
		return new CreatureCreaturePowerComparer<C>(m_nCard);
	}

protected:
	CCreatureCard* m_nCard;
};

//____________________________________________________________________________
//
template <class C>
struct CreatureToughnessComparer : public CardComparer
{
	CreatureToughnessComparer(int nValue)
		: m_nValue(nValue)
	{}

	virtual bool operator()(const CCard* pCard) const
	{
		if (!pCard->GetCardType().IsCreature())
			return false;

		const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(pCard);
		if (!pCreature) return false;
		return C()(GET_INTEGER(pCreature->GetToughness()), m_nValue);
	}

	virtual CreatureToughnessComparer<C>* Clone() const
	{
		return new CreatureToughnessComparer<C>(m_nValue);
	}

protected:
	int m_nValue;
};

//____________________________________________________________________________
//
template <class C>
struct CreatureLifeComparer : public CardComparer
{
	CreatureLifeComparer(int nValue)
		: m_nValue(nValue)
	{}

	virtual bool operator()(const CCard* pCard) const
	{
		if (!pCard->GetCardType().IsCreature())
			return false;

		const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(pCard);
		if (!pCreature) return false;
		return C()(GET_INTEGER(pCreature->GetLife()), m_nValue);
	}

	virtual CreatureLifeComparer* Clone() const
	{
		return new CreatureLifeComparer<C>(m_nValue);
	}

protected:
	int m_nValue;
};

//____________________________________________________________________________
//
struct CORE_EXPORT TappedComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual TappedComparer* Clone() const
	{
		return new TappedComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT UntappedComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual UntappedComparer* Clone() const
	{
		return new UntappedComparer();
	}
};
//____________________________________________________________________________
//

struct CORE_EXPORT FlippedComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual FlippedComparer* Clone() const
	{
		return new FlippedComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT UnflippedComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual UnflippedComparer* Clone() const
	{
		return new UnflippedComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardKeywordComparer : public CardComparer
{
	CardKeywordComparer(CardKeyword cardKeyword, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	virtual CardKeywordComparer* Clone() const
	{
		return new CardKeywordComparer(m_CardKeyword, m_bStrict);
	}

protected:
	bool m_bStrict;
	CardKeyword m_CardKeyword;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardReplacementKeywordComparer : public CardComparer
{
	CardReplacementKeywordComparer(ReplacementKeyword cardKeyword, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	virtual CardReplacementKeywordComparer* Clone() const
	{
		return new CardReplacementKeywordComparer(m_CardKeyword, m_bStrict);
	}

protected:
	bool m_bStrict;
	ReplacementKeyword m_CardKeyword;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CreatureKeywordComparer : public CardComparer
{
	CreatureKeywordComparer(CreatureKeyword creatureKeyword, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	virtual CreatureKeywordComparer* Clone() const
	{
		return new CreatureKeywordComparer(m_CreatureKeyword, m_bStrict);
	}

protected:
	bool m_bStrict;
	CreatureKeyword m_CreatureKeyword;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardFlagComparer : public CardComparer
{
	CardFlagComparer(CardFlag cardFlag, bool bStrict);
	CardFlagComparer(CardFlag cardFlag, bool bStrict, DWORD dwData);

	void SetData(DWORD dwData) { m_bCompareData = true; m_dwData = dwData; }
	DWORD GetData() const { return m_dwData; }

	virtual bool operator()(const CCard* pCard) const;

	virtual CardFlagComparer* Clone() const
	{
		CardFlagComparer* pComparer = new CardFlagComparer(m_CardFlag, m_bStrict);
		pComparer->m_bCompareData = m_bCompareData;
		pComparer->m_dwData = m_dwData;
		return pComparer;
	}

protected:
	bool m_bStrict;
	CardFlag m_CardFlag;
	bool m_bCompareData;
	DWORD m_dwData;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardAbilityFlagComparer : public CardFlagComparer
{
	CardAbilityFlagComparer(const CAbility* pAbility);
};

//____________________________________________________________________________
//
struct CORE_EXPORT CreatureFlagComparer : public CardComparer
{
	CreatureFlagComparer(CreatureFlag creatureFlag, bool bStrict);
	virtual bool operator()(const CCard* pCard) const;

	virtual CreatureFlagComparer* Clone() const
	{
		return new CreatureFlagComparer(m_CreatureFlag, m_bStrict);
	}

protected:
	bool m_bStrict;
	CreatureFlag m_CreatureFlag;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CreatureAttackedPlayerComparer : public CardComparer
{
	CreatureAttackedPlayerComparer(const CPlayer* pPlayer); // This player
	CreatureAttackedPlayerComparer(const CCard* pCard); // This card's controller
	virtual bool operator()(const CCard* pCard) const;

	virtual CreatureAttackedPlayerComparer* Clone() const
	{
		if (m_pPlayer)
			return new CreatureAttackedPlayerComparer(m_pPlayer);
		return new CreatureAttackedPlayerComparer(m_pCard);
	}

protected:
	const CPlayer* m_pPlayer;
	const CCard* m_pCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardAbilityNameComparer : public CardComparer
{
	CardAbilityNameComparer(LPCTSTR abName);
	virtual bool operator()(const CCard* pCard) const;

	virtual CardAbilityNameComparer* Clone() const
	{
		return new CardAbilityNameComparer(m_abName);
	}

protected:
	LPCTSTR m_abName;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardExtraCostComparer : public CardComparer
{
	CardExtraCostComparer();
	virtual bool operator()(const CCard* pCard) const;

	virtual CardExtraCostComparer* Clone() const
	{
		return new CardExtraCostComparer();
	}

};

//____________________________________________________________________________
//
struct CORE_EXPORT CardAnyCountersComparer : public CardComparer
{
	CardAnyCountersComparer();
	virtual bool operator()(const CCard* pCard) const;

	virtual CardAnyCountersComparer* Clone() const
	{
		return new CardAnyCountersComparer();
	}

};

//____________________________________________________________________________
//
struct CORE_EXPORT CardSpiritArcaneComparer : public CardComparer
{
	CardSpiritArcaneComparer();
	virtual bool operator()(const CCard* pCard) const;

	virtual CardSpiritArcaneComparer* Clone() const
	{
		return new CardSpiritArcaneComparer();
	}

};
//____________________________________________________________________________
//
struct CORE_EXPORT ControlledByCardComparer : public CardComparer
{
	ControlledByCardComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual ControlledByCardComparer* Clone() const
	{
		return new ControlledByCardComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;	
};

//____________________________________________________________________________
//
struct CORE_EXPORT VedalkenShacklesComparer : public CardComparer
{
	VedalkenShacklesComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual VedalkenShacklesComparer* Clone() const
	{
		return new VedalkenShacklesComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;	
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardMulticoloredComparer : public CardComparer
{
	enum Enum
	{
		MulticoloredCards,
		MonocoloredCards,
		ColorlessCards
	};

	CardMulticoloredComparer(Enum eColorType = MulticoloredCards);
	virtual bool operator()(const CCard* pCard) const;

	virtual CardMulticoloredComparer* Clone() const
	{
		return new CardMulticoloredComparer(m_ColorType);
	}

protected:
	Enum m_ColorType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AuraFitComparer : public CardComparer
{
	AuraFitComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual AuraFitComparer* Clone() const
	{
		return new AuraFitComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EquipFitComparer : public CardComparer
{
	EquipFitComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EquipFitComparer* Clone() const
	{
		return new EquipFitComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EnchantableComparer : public CardComparer
{
	EnchantableComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EnchantableComparer* Clone() const
	{
		return new EnchantableComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EquippedByComparer : public CardComparer
{
	EquippedByComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EquippedByComparer* Clone() const
	{
		return new EquippedByComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EquippedOnComparer : public CardComparer
{
	EquippedOnComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EquippedOnComparer* Clone() const
	{
		return new EquippedOnComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EnchantedByComparer : public CardComparer
{
	EnchantedByComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EnchantedByComparer* Clone() const
	{
		return new EnchantedByComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EnchantedOnComparer : public CardComparer
{
	EnchantedOnComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EnchantedOnComparer* Clone() const
	{
		return new EnchantedOnComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EnchantedCardComparer : public CardComparer
{
	EnchantedCardComparer();
	virtual bool operator()(const CCard* pCard) const;

	virtual EnchantedCardComparer* Clone() const
	{
		return new EnchantedCardComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT StackTargetingComparer : public CardComparer
{
	StackTargetingComparer(const CCardFilter* pCardilter, const CCard* pCard1 = NULL, BOOL pYouTargeted = FALSE);
	virtual bool operator()(const CCard* pCard) const;

	virtual StackTargetingComparer* Clone() const
	{
		return new StackTargetingComparer(m_pCardfilter, m_pCard1, m_pYouTargeted);
	}

protected:
	const CCardFilter* m_pCardfilter;
	const CCard* m_pCard1;
	BOOL m_pYouTargeted;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardSharingCardTypeWithLibraryTopComparer : public CardComparer
{
	CardSharingCardTypeWithLibraryTopComparer(); // This card's owner
	virtual bool operator()(const CCard* pCard) const;

	virtual CardSharingCardTypeWithLibraryTopComparer* Clone() const
	{
		return new CardSharingCardTypeWithLibraryTopComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardSharingCardTypeComparer : public CardComparer
{
	CardSharingCardTypeComparer(const CCard* pCard); // This card's owner
	virtual bool operator()(const CCard* pCard) const;

	virtual CardSharingCardTypeComparer* Clone() const
	{
		return new CardSharingCardTypeComparer(m_pCard);
	}

protected:	
	const CCard* m_pCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardSharingCardColorWithYourLibraryTopComparer : public CardComparer
{
	CardSharingCardColorWithYourLibraryTopComparer();
	virtual bool operator()(const CCard* pCard) const;

	virtual CardSharingCardColorWithYourLibraryTopComparer* Clone() const
	{
		return new CardSharingCardColorWithYourLibraryTopComparer();
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardSharingCardColorComparer : public CardComparer
{
	CardSharingCardColorComparer(const CCard* pCard); // This card's owner
	virtual bool operator()(const CCard* pCard) const;

	virtual CardSharingCardColorComparer* Clone() const
	{
		return new CardSharingCardColorComparer(m_pCard);
	}

protected:	
	const CCard* m_pCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CameThisTurnIntoPlayComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual CameThisTurnIntoPlayComparer* Clone() const
	{
		return new CameThisTurnIntoPlayComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT DrawnThisTurnComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual DrawnThisTurnComparer* Clone() const
	{
		return new DrawnThisTurnComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT LastCardDrawnThisTurnComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual LastCardDrawnThisTurnComparer* Clone() const
	{
		return new LastCardDrawnThisTurnComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT AttackedLastTurnComparer : public CardComparer
{
	AttackedLastTurnComparer(const CPlayer* pPlayer); // This player
	AttackedLastTurnComparer(const CCard* pCard); // This card's controller
	virtual bool operator()(const CCard* pCard) const;

	virtual AttackedLastTurnComparer* Clone() const
	{
		if (m_pPlayer)
			return new AttackedLastTurnComparer(m_pPlayer);
		return new AttackedLastTurnComparer(m_pCard);
	}

protected:
	const CPlayer* m_pPlayer;
	const CCard* m_pCard;
};

//____________________________________________________________________________
//
struct CORE_EXPORT AttackedControllersLastTurnComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual AttackedControllersLastTurnComparer* Clone() const
	{
		return new AttackedControllersLastTurnComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT EvenCMCComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual EvenCMCComparer* Clone() const
	{
		return new EvenCMCComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT OddCMCComparer : public CardComparer
{
	virtual bool operator()(const CCard* pCard) const;

	virtual OddCMCComparer* Clone() const
	{
		return new OddCMCComparer;
	}
};

//____________________________________________________________________________
//
struct CORE_EXPORT CardAbilityTypeComparer : public CardComparer
{
	CardAbilityTypeComparer(AbilityType abilityType, bool bStrict,	// returns TRUE if a card has any of these abilities
							AbilityType excludeAbilityType = AbilityType::Null); 
	virtual bool operator()(const CCard* pCard) const;

	AbilityType GetAbilityType() const { return m_AbilityType; }

	virtual CardAbilityTypeComparer* Clone() const
	{
		return new CardAbilityTypeComparer(m_AbilityType, m_bStrict);
	}

protected:
	bool m_bStrict;
	AbilityType m_AbilityType;
	AbilityType m_ExcludeAbilityType;
};

//____________________________________________________________________________
//
struct CORE_EXPORT EnchantedByOtherComparer : public CardComparer
{
	EnchantedByOtherComparer(const CCard* pCard1);
	virtual bool operator()(const CCard* pCard) const;

	virtual EnchantedByOtherComparer* Clone() const
	{
		return new EnchantedByOtherComparer(m_pCard1);
	}

protected:
	const CCard* m_pCard1;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardFilter 
	: noncopyable
{
	friend class CTriggeredPlayerEffectAbility2; // for AddFilter()	

	static const CCardFilter* AddFilter(std::auto_ptr<CCardFilter>& apFilter);

public:
	static const CCardFilter* GetFilter(LPCTSTR strFilterNamePlural);

	CCardFilter();
	explicit CCardFilter(CardComparer* pComparer);
	CCardFilter(LPCTSTR strFilterName, LPCTSTR strFilterNamePlural); // as constructed -> no cards are included
	CCardFilter(LPCTSTR strFilterName, LPCTSTR strFilterNamePlural, CardComparer* pComparer);

	~CCardFilter();

	CCardFilter* Clone() const;

	void SetFilterName(LPCTSTR strFilterName, LPCTSTR strFilterNamePlural) { m_strFilterName = strFilterName; m_strFilterNamePlural = strFilterNamePlural; }

	LPCTSTR GetFilterName() const { return m_strFilterName; }
	LPCTSTR GetFilterNamePlural() const { return m_strFilterNamePlural; }

	// All comparers must return true to be considered to be included by this filter (AND).
	// Otherwise any child filter which returns true will satisfy the parent filter (OR).
	// The first comparer which returns false will terminate the check.

	// 'AND' operations
	void AddComparer(CardComparer* pComparer);			
	void AddNegateComparer(CardComparer* pComparer);
	void RemoveAllComparers();

	void SetComparer(CardComparer* pComparer);			

	// 'OR' operations
	void AddChildFilter(CCardFilter* pChild);
	void RemoveAllChildFilters();

	// Context restrictions
	void SetThisCardsControllerOnly(const CCard* pCard);
	void SetNotThisCardsControllerOnly(const CCard* pCard);
	void SetThisPlayersCardsOnly(const CPlayer* pPlayer);
	void SetNotThisPlayersCardsOnly(const CPlayer* pPlayer);

	const CCard* GetThisCardsControllerOnly() const		{ return m_pThisControllerOnly; }
	const CCard* GetNotThisCardsControllerOnly() const	{ return m_pNotThisControllerOnly; }
	const CPlayer* SetThisPlayersCardsOnly() const		{ return m_pThisPlayersCardsOnly; }
	const CPlayer* SetNotThisPlayersCardsOnly() const	{ return m_pNotThisPlayersCardsOnly; }

	// Checks
	bool IsCardIncluded(const CCard* pCard) const;
	bool IsCardIncludedIgnoreController(const CCard* pCard) const;
	bool IsPlayersCardsIncluded(const CPlayer* pPlayer) const;

	template <class C>
	int CountIncluded(const C& cardContainer) const
	{
		int nIncludedCount = 0;
		int nCardCount = cardContainer.GetSize();
		for (int i = 0; i < nCardCount; ++i)
			if (IsCardIncluded(cardContainer.GetAt(i)))
				++nIncludedCount;

		return nIncludedCount;
	}

	template <class C>
	int GetIncluded(const C& cardContainer, CCountedCardContainer& includedCards) const
	{
		int nIncludedCount = 0;
		int nCardCount = cardContainer.GetSize();
		for (int i = 0; i < nCardCount; ++i)
			if (IsCardIncluded(cardContainer.GetAt(i)))
			{
				++nIncludedCount;
				includedCards.AddCard(cardContainer.GetAt(i), CardPlacement::Top);
			}

		return nIncludedCount;
	}

protected:
	struct FilterMap
	{
		~FilterMap()
		{
			for (std::map<CString, const CCardFilter*, iless>::const_iterator i = m_Filters.begin();
				i != m_Filters.end(); ++i)
				delete i->second;
		}

		std::map<CString, const CCardFilter*, iless> m_Filters;
	};

	static void AddPredefinedFilters();

	static FilterMap s_FilterMap;
	static bool s_bInitializedPredefinedFilters;

	bool IsCardIncludedIgnoreControllerImpl(const CCard* pCard) const;
	bool IsPlayersCardIncludedImpl(const CPlayer* pPlayer) const;

	CString m_strFilterName;
	CString m_strFilterNamePlural;

	std::list<CardComparer*> m_Comparers;
	std::list<CCardFilter*> m_Children;

	const CCard*	m_pThisControllerOnly;
	const CCard*	m_pNotThisControllerOnly;
	const CPlayer*	m_pThisPlayersCardsOnly;
	const CPlayer*	m_pNotThisPlayersCardsOnly;
};

//____________________________________________________________________________
//
class CCardFilterHelper
{
public:
	struct FilterType
	{
		enum Enum
		{
			Predefined,
			Custom
		};

		DEFINE_DISTINCT_ENUM_OPS( FilterType );
	};
	
	CCardFilterHelper(const CCardFilter* pPredefinedFilter = CCardFilter::GetFilter(_T("cards")))
		: m_FilterType(FilterType::Predefined)
		, m_pPredefinedFilter(pPredefinedFilter)
	{}

	FilterType GetFilterType() const { return m_FilterType; }
	void SetFilterType(FilterType filterType) { m_FilterType = filterType; }

	const CCardFilter& GetCustomFilter() const { return m_CustomFilter; }
	CCardFilter& GetCustomFilter() { return m_CustomFilter; }

	void SetPredefinedFilter(const CCardFilter* pPredefinedFilter) { m_pPredefinedFilter = pPredefinedFilter; }

	bool IsCardIncluded(const CCard* pCard) const { return Get()->IsCardIncluded(pCard); }
	bool IsCardIncludedIgnoreController(const CCard* pCard) const { return Get()->IsCardIncludedIgnoreController(pCard); }
	bool IsPlayersCardsIncluded(const CPlayer* pPlayer) const { return Get()->IsPlayersCardsIncluded(pPlayer); }

	template <class C>
	int CountIncluded(const C& cardContainer) const 
	{ 
		return Get()->CountIncluded(cardContainer); 
	}

	const CCardFilter* Get() const
	{
		if (m_FilterType == FilterType::Predefined)
			return m_pPredefinedFilter;

		return &m_CustomFilter;
	}

protected:
	FilterType m_FilterType;
	const CCardFilter* m_pPredefinedFilter;
	CCardFilter m_CustomFilter;
};

//____________________________________________________________________________
//
struct PredefinedCardFilterEntry
{
	PredefinedCardFilterEntry(const CCardFilter* pPredefinedCardFilter = NULL, 
							  BOOL bThisTurnOnly = FALSE, int nUniqueId = 0)
		: m_pPredefinedCardFilter(pPredefinedCardFilter)
		, m_bThisTurnOnly(bThisTurnOnly)
		, m_nUniqueId(nUniqueId)
	{}

	bool operator==(const PredefinedCardFilterEntry& entry) const
	{
		CString strFilterName1 = (m_pPredefinedCardFilter ? m_pPredefinedCardFilter->GetFilterName() : _T(""));
		CString strFilterName2 = (entry.m_pPredefinedCardFilter ? entry.m_pPredefinedCardFilter->GetFilterName() : _T(""));

		return strFilterName1 == strFilterName2 &&
			m_bThisTurnOnly == entry.m_bThisTurnOnly &&
			m_nUniqueId == entry.m_nUniqueId;
	}
	
	const CCardFilter*	m_pPredefinedCardFilter;	
	BOOL	m_bThisTurnOnly;
	int		m_nUniqueId;
};

class CPredefinedCardFilterStack
	: protected CValueContainerBase_<PredefinedCardFilterEntry>
{
public:
	CPredefinedCardFilterStack(CGame* pGame, const CCardFilter* pPredefinedFilter)
		: m_pGame(pGame)
	{
		SetPredefinedCardFilter(pPredefinedFilter, FALSE);
	}

	virtual ~CPredefinedCardFilterStack()
	{
		RemoveSavedState();
	}

	int SetPredefinedCardFilter(const CCardFilter* pPredefinedFilter, BOOL bThisTurnOnly);
	void RemovePredefinedCardFilter(int nUniqueId);
	void ResetTurnPredefinedCardFilters();

	const CCardFilter* Get() const 
	{ 
		int nSize = GetSize();

		if (!nSize)
			return NULL;

		return GetAt(nSize - 1).m_pPredefinedCardFilter; 
	}

protected:
	CGame* m_pGame;
             
private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const PredefinedCardFilterEntry& entry = GetAt(i);

			m_Stack.AddTail((PVOID)entry.m_pPredefinedCardFilter);
			m_Stack.AddTail((PVOID)entry.m_bThisTurnOnly);
			m_Stack.AddTail((PVOID)entry.m_nUniqueId);
		}

		m_Stack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<PredefinedCardFilterEntry>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			PredefinedCardFilterEntry entry;
			entry.m_nUniqueId = (int)m_Stack.RemoveTail();
			entry.m_bThisTurnOnly = (BOOL)m_Stack.RemoveTail();
			entry.m_pPredefinedCardFilter = (const CCardFilter*)m_Stack.RemoveTail();

			CValueContainer<PredefinedCardFilterEntry>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<PredefinedCardFilterEntry>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			PredefinedCardFilterEntry entry;
			entry.m_nUniqueId = (int)m_Stack.GetPrev(pos);
			entry.m_bThisTurnOnly = (BOOL)m_Stack.GetPrev(pos);
			entry.m_pPredefinedCardFilter = (const CCardFilter*)m_Stack.GetPrev(pos);

			CValueContainer<PredefinedCardFilterEntry>::AddImpl(entry);
		}
	}
};
