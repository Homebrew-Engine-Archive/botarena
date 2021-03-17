#pragma once
class CCountedCardContainer;
class Counter;

//____________________________________________________________________________
//
class CORE_EXPORT CCostConfigEntry;

template<class M>
class CCostBase;

template<class M>
class CBaseManaCost;
class CBaseManaCostEntry;
class COptionManaCostEntry;

class CAbstractCost;
class CAbstractCostEntry;


typedef std::vector<CCostConfigEntry> CostConfigurationArray;

typedef std::vector<TCheapList<CBaseManaCost<CManaCost>,CAbstractCost> > OptCostArray;

typedef TCheapList<CBaseManaCostEntry,CAbstractCostEntry> CostEntryList;
typedef TCheapList<COptionManaCostEntry,CAbstractCostEntry> OptCostEntryList;
typedef std::vector<OptCostEntryList> OptCostEntryArray;

//____________________________________________________________________________
//
class CAbstractCostEntry
{
public:
	explicit CAbstractCostEntry(const CAbstractCostEntry& e)
		: m_strCostName(e.m_strCostName)
	{}
	CAbstractCostEntry()
		: m_strCostName()
	{}
	VIRTUAL(const	CCountedCardContainer*, GetCards)() const	{return NULL;}
	VIRTUAL(BOOL,PayCost)(CPlayer* pByPlayer) const				{return FALSE;}

	const CString& GetCostName() const							{return m_strCostName;}
	void ResetCostName(const LPCTSTR& strCostName)				{m_strCostName = strCostName;}
	void AppendToCostName(const LPCTSTR& strCostName)
	{
		if(!m_strCostName.IsEmpty())
			m_strCostName += _T(", ");
		m_strCostName+= strCostName;
	}

protected:
	CString			m_strCostName;
};
class CZeroCostEntry : public CAbstractCostEntry
{
public:
	explicit CZeroCostEntry(const CZeroCostEntry& e)
		: CAbstractCostEntry(e)
	{}
	CZeroCostEntry()
		: CAbstractCostEntry()
	{}
	OVERRIDE(BOOL,PayCost)(CPlayer* pByPlayer) const			{return TRUE;}
};
class CAbstractCost
{
public:
	typedef TCheapListBase<CAbstractCostEntry>::iterator OutIterator;
	typedef TCheapListBase<CAbstractCostEntry>::const_iterator OutConstIterator;
	VIRTUAL(const CCardFilter*, GetFilter)()const							{return NULL;}
	VIRTUAL(bool, IsMoveCost)()const										{return false;}
	VIRTUAL(bool, HasExtraCost)()const										{return false;}
	VIRTUAL(BOOL, IsPlayable)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, 
						  BOOL bAssumeSufficientMana) const					{return FALSE;}
	VIRTUAL(bool,GetConfigurations)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const								{return 0;}
	VIRTUAL(const AbilityType::Enum, GetAbilityType)()						{return AbilityType::Null;}
};

//____________________________________________________________________________
//
class CBaseManaCostEntry : public CAbstractCostEntry
{
	friend class CCostConfigEntry;//to avoid virtual functions in AI-thinking!
public:
	OVERRIDE(BOOL,PayCost)(CPlayer* pByPlayer) const;
	void AppendToCostName(LPCTSTR strCostName)
		{m_strCostName += strCostName;}//not virtual! we don't want additional mana-costs to be ,-seperated!
	friend bool operator==(const CBaseManaCostEntry& i, const CBaseManaCostEntry& j)
		{return i.m_ManaPool==j.m_ManaPool;}
protected:
	CManaPool		m_ManaPool;
};
class COptionManaCostEntry : public CZeroCostEntry //optional mana-costs already paid
{
	friend class CCostConfigEntry;//to avoid virtual functions in AI-thinking!
public:
	COptionManaCostEntry(const COptionManaCostEntry& c)
		: m_ManaCost(c.m_ManaCost)
		, CZeroCostEntry(c)
	{}
	explicit COptionManaCostEntry(const CManaCost& m=CManaCost())
		: m_ManaCost(m)
		, CZeroCostEntry()
	{}

	friend bool operator==(const COptionManaCostEntry& i, const COptionManaCostEntry& j)
		{return i.m_ManaCost==j.m_ManaCost;}
protected:
	CManaCost		m_ManaCost;
};

template<class M>
class CBaseManaCost : public CAbstractCost
{
	typedef CBaseManaCost<M> Me;
	friend class CCostBase<CManaCost>;//to avoid virtual functions!
	friend class CCostBase<CManaCost_>;//optional cost isn't state-managed!
	friend class CBaseManaCost<CManaCost>;//State-Managed can be converted to normal.
public:
	typedef CAbstractCost::OutConstIterator OutConstIterator;
	typedef CAbstractCost::OutIterator OutIterator;
	//typedef TCheapList<CBaseManaCostEntry, CAbstractCostEntry> OutType;

	explicit CBaseManaCost(const M& m=M(), const int x=0, const CManaCost::Color::Enum xc=CManaCost::Color::Generic)
		: m_ManaCost(m)
		, m_nExtraManaCost(x)
		, m_ExtraManaCostColors(xc)
		, m_bAllowZeroExtra(TRUE)
		, m_bZeroExtraIsTrick(TRUE)
		, m_bDivideExtraCost(FALSE)
	{}
	template<class M_>
	CBaseManaCost(const CBaseManaCost<M_>& c)
		: m_ManaCost()
		, m_nExtraManaCost(0)
		, m_ExtraManaCostColors(CManaCost::Color::Generic)
		, m_bAllowZeroExtra(TRUE)
		, m_bZeroExtraIsTrick(TRUE)
		, m_bDivideExtraCost(FALSE)
	{operator=(c);}

	template<class M_>
	Me& operator=(const CBaseManaCost<M_>& c)
	{
		ATLASSERT(reinterpret_cast<const Me*>(&c) != this);

		m_ManaCost.SetCost(c.m_ManaCost);
		m_ReductionCost.SetCost(c.m_ReductionCost);
		m_IncreasedCost.SetCost(c.m_IncreasedCost);

		m_nExtraManaCost = c.m_nExtraManaCost;
		m_ExtraManaCostColors = c.m_ExtraManaCostColors;
		m_bAllowZeroExtra = c.m_bAllowZeroExtra;
		m_bZeroExtraIsTrick = c.m_bZeroExtraIsTrick;
		m_bDivideExtraCost = c.m_bDivideExtraCost;
		return *this;
	}

	OVERRIDE(bool, HasExtraCost)()const		{return m_nExtraManaCost != 0;}
	OVERRIDE(BOOL, IsPlayable)
		(const CPlayer* pByPlayer, BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
	{
		const CManaPool_& manaPool = pByPlayer->GetManaPool();

		if (!bAssumeSufficientMana)
		{
			if(!m_ExtraManaCostColors.HasColor(CManaCost::Color::Generic))
			{
				if(!m_bAllowZeroExtra)
					return IsPlayableNongeneric(manaPool);
				else
					if(bIncludeTricks && m_bZeroExtraIsTrick)
						return IsPlayableNongeneric(manaPool);
			}

			CManaCost manaCost(GetManaCost());

			if (!manaCost.CompareToPool(manaPool, FALSE))
				return FALSE;

			if(m_nExtraManaCost)
			{
				// Satisfied the base cost so we are fine
				if (bIncludeTricks || !m_bZeroExtraIsTrick)
					return TRUE;
				else
					if (m_bAllowZeroExtra)
						return TRUE;

				// Has generic cost
				int pool = manaPool.GetTotal();
				if (int(pool - manaCost.GetTotal()) > int(m_bDivideExtraCost))
					return TRUE;

				if(m_ReductionCost.Any())
				{
					// barely fulfills base cost 
					pool -= m_ManaCost.GetTotal() + m_IncreasedCost.GetTotal();
					pool += m_ReductionCost.GetTotal();

					if(pool > int(m_bDivideExtraCost))
						return TRUE;
				}

				return FALSE;//TODO: is it really faster or smaller code when this case gets inverted?
			}
		}
		return TRUE;
	}
	OVERRIDE(bool, GetConfigurations)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const
	{
		const CManaPool_& byPlayerManaPool = pByPlayer->GetManaPool();
		if (!m_nExtraManaCost)
		{
			const CManaCost manaCost(GetManaCost());
			if (manaCost.Any()) 
			{
				ManaPoolArray manaConfigs;
				int nConfigCount = byPlayerManaPool.CalculateCostPermutations(manaCost, manaConfigs);
				if(nConfigCount == 0) 
					return false;

				for (int i = 0; i < nConfigCount; ++i)
				{
					CManaPool& manaConfig(manaConfigs[i]);

					CCostConfigEntry costConfig;
					if (bSetNames)
						costConfig.GetCosts()->AppendToCostName(_T("{") + manaConfig.ToString() + _T("}"));
					costConfig.SetManaPool(manaConfig);

					configurations.push_back(costConfig);
				}
			}
		}
		else //if (!m_nExtraManaCost)
		{
			/*
				Current mana pool

				Card cost:
				(X)(#)A
					^  ^ ^
					|  | |
					|  | color cost \_base cost
					| generic cost  /
				extra cost
			*/

			// Add special case of reduced cost with extra cost

			CManaPool extraPool;
			const CManaCost manaCost(GetExtraMana(extraPool));
			int nExtraPoolCount = extraPool.GetTotal();
			int nVariableCost = byPlayerManaPool.GetTotal() - manaCost.GetTotal() + nExtraPoolCount;

			const CManaCost::Color variableCostColor = GetVariableCostColor();

			// The pre-condition is that the player's pool can already pay the base cost, so if the extra
			// cost contains generic cost, we can use all the mana in the pool.

			if (m_nExtraManaCost != SpecialNumber::Any)
				if (nVariableCost > m_nExtraManaCost)//TODO:there's a subtle difference between "X can't be >" and "you can't pay >"
					nVariableCost = m_nExtraManaCost;

			CManaCost variableCost(manaCost);

			ManaPoolArray manaConfigs;

			for (int j = 0; j <= nVariableCost; ++j)
			{
				if (m_bAllowZeroExtra || j)
				{
					if (!m_bDivideExtraCost || !IS_ODD(j))
					{
						int nConfigCount = byPlayerManaPool.CalculateCostPermutations(variableCost, manaConfigs);

						for (int i = 0; i < nConfigCount; ++i)
						{
							CManaPool& manaConfig(manaConfigs[i]);

							CCostConfigEntry costConfig;
							int X=j;

							if(m_bDivideExtraCost)
								X/=2;
							if (bSetNames)
							{
								CString strXEquals;
									strXEquals.Format(_T("(X=%d)"), X);

								if(manaConfig.Any())
									costConfig.GetCosts()->AppendToCostName(_T("{") + manaConfig.ToString() + _T("}, ") + strXEquals);
							}

							costConfig.SetManaPool(manaConfig);
							costConfig.SetExtraValue(X);

							configurations.push_back(costConfig);
						}

						manaConfigs.clear();
					}
				}

				// Increase the cost by one, note that all illegal colors from the pool has already been
				// removed from byPlayerManaPool before the loop. This will make sure we are only paying legal manas.
				if(j >= nExtraPoolCount)
					variableCost.AddCost(variableCostColor, 1);
			}
		}

		return true;
	}
	bool GetConfigurationsThinking
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  const size_t start) const
	{

		if (m_nExtraManaCost)
		{
			CManaPool byPlayerManaPool = pByPlayer->GetManaPool();
			CManaCost manaCost(GetExtraMana(byPlayerManaPool));//TODO:speedup by omitting colour-elimination and below

			const CManaCost::Color variableCostColor = GetVariableCostColor();

			// The pre-condition is that the player's pool can already pay the base cost, so if the extra
			// cost contains generic cost, we can use all the mana in the pool.

			int nVariableCost = byPlayerManaPool.GetTotal() - manaCost.GetTotal();

			if (m_bDivideExtraCost && IS_ODD(nVariableCost))
				--nVariableCost;

			if (!m_bAllowZeroExtra && !nVariableCost)
				return false;

			if (m_nExtraManaCost != SpecialNumber::Any)
				if (nVariableCost > m_nExtraManaCost)
					nVariableCost = m_nExtraManaCost;

			CManaCost variableCost(manaCost);
			variableCost.AddCost(variableCostColor, nVariableCost);	// When thinking, always use max. variable cost

			ManaPoolArray manaConfigs;
			int nConfigCount = byPlayerManaPool.CalculateCostPermutations(variableCost, manaConfigs);

			for (int i = 0; i < nConfigCount; ++i)
			{
				CManaPool& manaConfig(manaConfigs[i]);

				CCostConfigEntry costConfig;
				costConfig.SetManaPool(manaConfig);
				costConfig.SetExtraValue(nVariableCost/(m_bDivideExtraCost+1));

				configurations.push_back(costConfig);
			}
			return true;
		} else return GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations, start);
	}
	OVERRIDE(const AbilityType::Enum, GetAbilityType)()
	{
		if(GetManaCost().GetTotal() || m_nExtraManaCost == SpecialNumber::Any)
			return AbilityType::_ConsumeMana;  //optimization for most cards!
		if(m_nExtraManaCost == 0)
			return AbilityType::Null;
		return ( GetMaximumWantedMana() > 0 ? 
			AbilityType::_ConsumeMana : 
			AbilityType::Null);
	}

	int GetMaximumWantedMana() const
	{
		if(m_nExtraManaCost == SpecialNumber::Any)
			return SpecialNumber::Any;
		if(m_nExtraManaCost == 0)
			return GetManaCost().GetTotal();
		CManaPool pool;
		int total=GetExtraMana(pool).GetTotal();//XX cost doesn't happen with fixed max-cost -- yet!
		return total + m_nExtraManaCost - pool.GetTotal(); //could be negative!
	}

	void AddCost(const Me& c)
	{
		ATLASSERT(c.m_nExtraManaCost != SpecialNumber::Any || m_nExtraManaCost == 0);
		ATLASSERT(m_nExtraManaCost != SpecialNumber::Any || c.m_nExtraManaCost == 0);

		m_ManaCost.AddCost(c.GetManaCost());//in case there's cost-reduction on kickers alone

		m_nExtraManaCost+=c.m_nExtraManaCost;
		ATLASSERT(c.m_ExtraManaCostColors.HasColor(CManaCost::Color::Generic));//TODO: support for kickers with coloured extra

		m_bAllowZeroExtra|=c.m_bAllowZeroExtra;
		m_bZeroExtraIsTrick|=c.m_bZeroExtraIsTrick;
		m_bDivideExtraCost|=c.m_bDivideExtraCost;
	}
	CManaCost::Color GetVariableCostColor() const
	{
		if (!m_ExtraManaCostColors.HasColor(CManaCost::Color::Generic))
		{
			// Extra cost has no generic cost

			ATLASSERT(m_ExtraManaCostColors.GetCount() == 1);	// Only support one extra cost color to simplify the logic here
			if (m_ExtraManaCostColors.GetCount() == 1)
			{
				return m_ExtraManaCostColors.GetFirstColor();
			}
		}
		return CManaCost::Color::Generic;
	}
	int GetMaxExtra(CManaPool pool) const
	{
		CManaCost manaCost=GetExtraMana(pool);
		return pool.GetTotal()-manaCost.GetTotal();//TODO: actually remove the coloured cost below!
	}
	CManaCost GetManaCost() const						{return GetManaCost(m_ManaCost);}
	friend bool operator==(const Me& i, const Me& j)
	{
		return (i.m_nExtraManaCost == j.m_nExtraManaCost) &&
			(i.m_ExtraManaCostColors == j.m_ExtraManaCostColors) &&
			(i.m_bAllowZeroExtra == j.m_bAllowZeroExtra) &&
			(i.m_bZeroExtraIsTrick == j.m_bZeroExtraIsTrick) &&
			(i.m_bDivideExtraCost == j.m_bDivideExtraCost) &&
			(i.m_ManaCost == j.m_ManaCost) &&
			(i.m_ReductionCost == j.m_ReductionCost) &&
			(i.m_IncreasedCost == j.m_IncreasedCost);
	}
protected:
	CManaCost GetExtraMana(CManaPool& extraPool) const
	{
		ATLASSERT(m_nExtraManaCost);

			if (m_ReductionCost.Any())
			{
				// Need to find out how much reduction cost is used in manaCost

				CManaCost effectiveManaCost(m_ManaCost);
				effectiveManaCost.AddCost(m_IncreasedCost);

				CManaCost remainingReduction(m_ReductionCost);
				CManaCost removedCost;
				effectiveManaCost.RemoveCost(remainingReduction, removedCost);

				// If we allow generic cost in extra cost, any color mana/cost left in the reduction cost is allowed. Otherwise, keep only those allowed

				if (!m_ExtraManaCostColors.HasColor(CManaCost::Color::Generic)) 
					remainingReduction.RemoveAllCostExcept(m_ExtraManaCostColors);

				extraPool.AddMana(remainingReduction.GetAsPool());
				return effectiveManaCost;
			}
			return GetManaCost();
	}
	CManaCost GetManaCost(CManaCost effectiveManaCost) const
	{
		if (!m_IncreasedCost.Any() && !m_ReductionCost.Any())
			return effectiveManaCost;

		if (m_IncreasedCost.Any())
			effectiveManaCost.AddCost(m_IncreasedCost);
		if (m_ReductionCost.Any())
			effectiveManaCost.RemoveCost(m_ReductionCost);
		return effectiveManaCost; //TODO:Cache this!
	}
	BOOL IsPlayableNongeneric(const CManaPool& manaPool) const
	{
		CManaCost tempCost(m_ManaCost);

		ATLASSERT(m_nExtraManaCost);//please remove extra-colours when removing extra cost!
		ATLASSERT(m_ExtraManaCostColors.GetCount() == 1);	// Only support one extra cost color to simplify the logic here

		tempCost.AddCost(m_ExtraManaCostColors.GetFirstColor(), 1 + m_bDivideExtraCost);

		if (!GetManaCost(tempCost).CompareToPool(manaPool, FALSE))
			return FALSE;
		return TRUE;
	}

	M					m_ManaCost;
	M					m_ReductionCost;
	M					m_IncreasedCost;
	int					m_nExtraManaCost;
	CManaCost::Colors	m_ExtraManaCostColors;
	BOOL				m_bAllowZeroExtra;
	BOOL				m_bZeroExtraIsTrick;
	BOOL				m_bDivideExtraCost;

};


//____________________________________________________________________________
//
	// Player life cost
class CORE_EXPORT CPlayerLifeCostEntry : public CAbstractCostEntry
{
	friend class CPlayerLifeCost;
public:
	CPlayerLifeCostEntry()
		: m_pPlayerLifeToPay(0)
		, m_PlayerLifeCost()
	{}
	CPlayerLifeCostEntry(const CPlayerLifeCostEntry& c)
		: m_pPlayerLifeToPay(c.m_pPlayerLifeToPay)
		, m_PlayerLifeCost(c.m_PlayerLifeCost)
	{}
	CPlayerLifeCostEntry(CCard* pSourceCard, CPlayer* pPlayer, Life nLifeDelta)
		: m_pPlayerLifeToPay(pPlayer)
		, m_PlayerLifeCost(nLifeDelta,pSourceCard, PreventableType::NotPreventable, DamageType::NotDealingDamage)
	{}
	OVERRIDE(BOOL,PayCost)(CPlayer* pByPlayer) const;
	Life GetLifeDelta()const					{return m_PlayerLifeCost.GetLifeDelta();}
	friend bool operator==(const CPlayerLifeCostEntry& i, const CPlayerLifeCostEntry& j)
	{
		return i.m_pPlayerLifeToPay == j.m_pPlayerLifeToPay &&
				i.m_PlayerLifeCost.Equals(j.m_PlayerLifeCost);
	}
protected:
	CPlayer*		m_pPlayerLifeToPay;
	CLifeModifier	m_PlayerLifeCost;
};

class CORE_EXPORT CPlayerLifeCost : public CAbstractCost
{
	typedef CPlayerLifeCost Me;
	typedef TCheapList<CPlayerLifeCostEntry, CAbstractCostEntry> OutType;
public:
	CPlayerLifeCost(CCard* c,Life l)
		: m_pDecreaseSource(c)
		, m_nDelta(l)
	{}
	CPlayerLifeCost(const Me& c)
		: m_pDecreaseSource(NULL)
		, m_nDelta(0)
	{operator=(c);}
	Me& operator=(const Me& c)
	{
		m_pDecreaseSource=c.m_pDecreaseSource;
		m_nDelta=c.m_nDelta;
		return *this;
	}
	OVERRIDE(BOOL, IsPlayable)
						(const CPlayer* pByPlayer,
						  BOOL bIncludeTricks,
						  BOOL bAssumeSufficientMana) const
		{return IsPlayable(pByPlayer,m_nDelta);}
	BOOL IsPlayable	(const CPlayer* pByPlayer,
						  const Life& nLife) const;
	OVERRIDE(bool, GetConfigurations)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const;
	OVERRIDE(bool, HasExtraCost)() const						{return m_nDelta==Life(SpecialNumber::Any);}
	friend bool operator==(const Me& i, const Me& j)
	{
		return (i.m_pDecreaseSource == j.m_pDecreaseSource) &&
			(i.m_nDelta == j.m_nDelta);
	}
protected:
	CCard*				m_pDecreaseSource;
	Life				m_nDelta;
};

//____________________________________________________________________________
//
class CThisCounterCost;
struct CounterCostBase;

class CORE_EXPORT CThisCounterCostEntry : public CAbstractCostEntry
{
	friend CThisCounterCost;
public:
	CThisCounterCostEntry(CCard* card, Counter* counter, int cost)
		: m_pCounterCard(card)
		, m_pCounter(counter)
		, m_nCounterCost(cost)
	{}

	OVERRIDE(BOOL,PayCost)(CPlayer* pByPlayer) const;
	friend bool operator==(const CThisCounterCostEntry& i, const CThisCounterCostEntry& j)
	{
		return (i.m_pCounter == j.m_pCounter) &&
			(i.m_nCounterCost == j.m_nCounterCost);
	}
protected:
	CCard*			m_pCounterCard;
	Counter*		m_pCounter;
	int				m_nCounterCost;
};

class CORE_EXPORT CThisCounterCost : public CAbstractCost
{
	typedef CThisCounterCost Me;
	typedef TCheapList<CThisCounterCostEntry, CAbstractCostEntry> OutType;
public:
	typedef CounterCostBase Code;

	CThisCounterCost::CThisCounterCost(Counter* c,int n);
	CThisCounterCost(const Me& c)
		: m_pCounterCard(NULL)
		, m_pCounter(NULL)
		, m_nCounterCost(0)
	{operator=(c);}
	Me& operator=(const Me& c)
	{
		m_pCounterCard=c.m_pCounterCard;
		m_pCounter=c.m_pCounter;
		m_nCounterCost=c.m_nCounterCost;
		return *this;
	}
	OVERRIDE(BOOL, IsPlayable)
						(const CPlayer* pByPlayer,
						  BOOL bIncludeTricks,
						  BOOL bAssumeSufficientMana) const;
	OVERRIDE(bool, GetConfigurations)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const;
	OVERRIDE(bool, HasExtraCost)() const						{return m_nCounterCost==SpecialNumber::AnyNegative;}
	friend bool operator==(const Me& i, const Me& j)
	{
		return (i.m_pCounter == j.m_pCounter) &&
			(i.m_nCounterCost == j.m_nCounterCost);
	}
	const Counter* GetCounter() const							{return m_pCounter;}
protected:
	CCard*			m_pCounterCard;
	Counter*		m_pCounter;
	int				m_nCounterCost; // supports SpecialNumber::AnyNegative
};

//____________________________________________________________________________
//
template<class Code>
class TThisCardCost;
template<class Code>
class TCardFilterCost;
struct CCostCode
{
	friend bool operator==(const CCostCode&, const CCostCode&)		{return true;}
};

template<class Code>
class TSelectCostEntry : public CAbstractCostEntry
{
	typedef TSelectCostEntry<Code> Me;
	friend TThisCardCost<Code>; //the creators
	friend TCardFilterCost<Code>;
public:
	typedef CCountedCardContainer CardVector;

	TSelectCostEntry(const Me& c)
		: m_apSelectedCards(new CardVector(*c.m_apSelectedCards))
		, m_Code(c.m_Code)
		, CAbstractCostEntry(c)
	{}
	TSelectCostEntry()
		: m_apSelectedCards(new CardVector())
		, m_Code()
	{}
	explicit TSelectCostEntry(const size_t n, const Code& code=Code())
		: m_apSelectedCards(new CardVector())
		, m_Code(code)
	{
		//m_apSelectedCards->reserve(n);	//TODO: implement some kind of preallocation
	}

	OVERRIDE(const	CCountedCardContainer*, GetCards)() const	{return m_apSelectedCards.get();}
	OVERRIDE(BOOL,PayCost)(CPlayer* pByPlayer) const
	{
		BOOL bOut = TRUE;
		ATLASSERT(m_apSelectedCards->GetSize()); //may occur, but better replace it by ZeroCost then.
		for (int i = 0; i < m_apSelectedCards->GetSize(); ++i)
		{
			CCard* pCard = m_apSelectedCards->GetAt(i);
			
			if ((pCard->GetController() == pByPlayer) &&
				m_Code.IsPlayable(pCard, pByPlayer))
				bOut &= m_Code.PayCost(pCard, pByPlayer);
			else
				bOut = FALSE;
		}
		return bOut;
	}
	const CCard* GetCard() const
	{
		ATLASSERT(m_apSelectedCards.get() && m_apSelectedCards->GetSize()==1);
		return m_apSelectedCards->GetAt(0);
	}
	friend bool operator==(const Me& i, const Me& j)
	{
		ATLASSERT(i.m_apSelectedCards.get() && j.m_apSelectedCards.get());
		return *i.m_apSelectedCards == *j.m_apSelectedCards;
	}
protected:
	void newCards(const CardVector* c)
	{//TODO: replace auto_ptr by counted pointer to avoid redundancy!
		m_apSelectedCards->RemoveAll();
		m_apSelectedCards->AddCards(*c,CardPlacement::Top);
	}
	void AddCard(CCard* pCard)
	{
		m_apSelectedCards->AddCard(pCard,CardPlacement::Top);
	}
	 std::auto_ptr<CardVector>	m_apSelectedCards;
	 Code m_Code;
};

class CThisCost : public CAbstractCost
{
protected:
	CThisCost(CCard* pCard=NULL)
		: m_pCard(pCard)
		, CAbstractCost()
	{}

public:
	const CCard* GetCard() const				{return m_pCard;}

protected:
	CCard*				m_pCard;
};
template<class Code>
class TThisCardCost : public CThisCost
{
	typedef TThisCardCost<Code> Me;
	typedef TCheapList<typename Code::EntryType, CAbstractCostEntry> OutType;

public:
	TThisCardCost(CCard* pCard, const Code& code=Code())
		: CThisCost(pCard)
		, m_Code(code)
	{}
	TThisCardCost(const Me& c)
		: CThisCost(c.m_pCard)
		, m_Code(c.m_Code)
	{}
	OVERRIDE(BOOL, IsPlayable)
						(const CPlayer* pByPlayer,
						  BOOL bIncludeTricks,
						  BOOL bAssumeSufficientMana) const
	{
		ATLASSERT(m_pCard->GetController() == pByPlayer); //how could this fail?
		return m_Code.IsPlayable(m_pCard,pByPlayer);
	}
	OVERRIDE(bool,GetConfigurations)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const
	{
		if (configurations.empty())
			configurations.push_back(CCostConfigEntry());

		const size_t end=configurations.size();

		for (size_t i = start; i < end; ++i)
		{
			CostEntryList& costConfig = configurations[i].GetCosts();

			if (m_Code.IsPlayable(m_pCard, pByPlayer))
			{
				OutType& Entry=*new OutType(1,m_Code);//see above classes
				costConfig.pushBack(&Entry);
				Entry->AddCard(m_pCard);

				if (bSetNames)
				{
					CString strCostName;

					if ((m_pCard->GetCardType() & CardType::Creature).Any())
						strCostName.Format(m_Code.sText, ((CCreatureCard*)m_pCard)->GetCreatureName(TRUE));
					else
						strCostName.Format(m_Code.sText, m_pCard->GetCardName());

					Entry->AppendToCostName(strCostName);
				}

			} else return false;
		}
		return true;
	}
	friend bool operator==(const Me& i, const Me& j)
	{return i.m_pCard == j.m_pCard && i.m_Code == j.m_Code;}
protected:
	Code				m_Code;
};

//____________________________________________________________________________
//
template<int I=1>//to force a 2nd pass for resolving circular dependency in inline-code!
struct CORE_EXPORT TapCostBase : CCostCode
{
	typedef TSelectCostEntry<TapCostBase<I> > EntryType;
	enum {Zone=ZoneId::Battlefield};

	static bool IsPlayable(const CCard* pCard, const CPlayer* pByPlayer)
		{return (!pCard->GetOrientation()->IsTapped());}

	static BOOL PayCost(CCard*const& pCard, const CPlayer* pByPlayer)
		{return pCard->GetOrientation()->Tap();}

	static const CString sText;
};
typedef TThisCardCost<TapCostBase<> > CTapThisCost;
typedef TapCostBase<1>::EntryType CTapCostEntry;

//____________________________________________________________________________
//
template<int I=1>//to force a 2nd pass for resolving circular dependency in inline-code!
struct CORE_EXPORT UntapCostBase : CCostCode
{
	typedef TSelectCostEntry<UntapCostBase<I> > EntryType;
	enum {Zone=ZoneId::Battlefield};

	static bool IsPlayable(const CCard* pCard, const CPlayer* pByPlayer)
		{return (!pCard->GetOrientation()->IsUntapped());}

	static BOOL PayCost(CCard*const& pCard, const CPlayer* pByPlayer)
		{return pCard->GetOrientation()->Untap();}

	static const CString sText;
};
typedef TThisCardCost<UntapCostBase<> > CUntapThisCost;
typedef UntapCostBase<>::EntryType CUntapCostEntry;

//____________________________________________________________________________
//
class CFilterCost : public CAbstractCost
{
protected:
	explicit CFilterCost(const CCardFilter* pFilter)
		: m_pCardFilter(pFilter)
		, m_pExcludeCard(NULL)
		, CAbstractCost()
	{}
	explicit CFilterCost()
		: CAbstractCost()
	{}

public:
	CFilterCost(const CFilterCost& c)
		: m_pCardFilter(c.m_pCardFilter)
		, m_pExcludeCard(c.m_pExcludeCard)
		, CAbstractCost(c)
	{}

	VIRTUAL(ZoneId, GetFilterZone)()const				{return ZoneId::_AllZones;}

	OVERRIDE(const CCardFilter*, GetFilter)()const								
	{
		ATLASSERT(m_pCardFilter);
		return m_pCardFilter;
	}

	void SetExcludeCard(const CCard* pCard)
	{
		ATLASSERT(m_pExcludeCard==NULL || m_pExcludeCard==pCard);
		m_pExcludeCard=pCard;
	}

protected:
	const CCardFilter*	m_pCardFilter;
	const CCard*		m_pExcludeCard;
};

template<class Code>
class TCardFilterCost : public CFilterCost
{
	typedef TCardFilterCost<Code> Me;
	typedef TCheapList<typename Code::EntryType,CAbstractCostEntry> OutType;

public:
	TCardFilterCost(int nCount
#ifdef _MY_DEBUG
						=0
#endif
		, const CCardFilter* pFilter
#ifdef _MY_DEBUG
						=NULL
#endif
		, const Code& code=Code())
		: CFilterCost(pFilter)
		, m_nCardCount(nCount)
		, m_Code(code)
	{}

	TCardFilterCost(const Me& c)
		: CFilterCost()
		, m_nCardCount(0)
		, m_Code(c.m_Code)
	{operator=(c);}

	Me& operator=(const Me& c)
	{
		if(c.m_nCardCount)
		{
			m_pCardFilter=c.m_pCardFilter;
			m_pExcludeCard=c.m_pExcludeCard;
		}
		m_nCardCount=c.m_nCardCount;
		ATLASSERT(m_Code==c.m_Code);//contains const-values and can't be copied
		return *this;
	}

	OVERRIDE(BOOL, IsPlayable)
						(const CPlayer* pByPlayer,
						  BOOL bIncludeTricks,
						  BOOL bAssumeSufficientMana) const
	{
		if (m_nCardCount == SpecialNumber::Any || m_nCardCount == SpecialNumber::All)
			return TRUE;

		CZone* pZone = GetZone(pByPlayer);
		int nCount = 0;
		for (int i = 0; (i < pZone->GetSize()) && (nCount < m_nCardCount); ++i)
			if (m_Code.IsPlayable(pZone->GetAt(i),pByPlayer) &&
				m_pExcludeCard!=pZone->GetAt(i) &&
				m_pCardFilter->IsCardIncluded(pZone->GetAt(i)))
				++nCount;

		if (m_nCardCount == SpecialNumber::AnyPositive)
			return (nCount > 0) ? TRUE : FALSE;
		
		if (nCount < m_nCardCount)
			return FALSE;

		return TRUE;
	}

	OVERRIDE(bool,GetConfigurations)
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const
	{
		CCountedCardContainer Cards;
		FillContainer(pByPlayer,Cards);

		if ((!SpecialNumber::IsSpecialNumber(m_nCardCount) && Cards.GetSize() < m_nCardCount) ||
			(m_nCardCount == SpecialNumber::AnyPositive && Cards.GetSize() < 1))
			return false;

		if(Cards.GetSize())
		{
			if (!configurations.size())
				configurations.push_back(CCostConfigEntry());	// Add an empty entry for multiplication

			size_t end=configurations.size();
			int nFromCardCount = m_nCardCount;
			int nToCardCount = m_nCardCount;

			if (m_nCardCount == SpecialNumber::Any)
			{
				nFromCardCount = 1;
				nToCardCount = Cards.GetSize();

				// Add 0 cost
				configurations.insert<CostConfigurationArray::const_iterator>(configurations.end(),
					CostConfigurationArray::const_iterator(&configurations[start],&configurations),
						configurations.end());
				start=end;
				end=configurations.size();
			}
			else if (m_nCardCount == SpecialNumber::AnyPositive)
			{
				nFromCardCount = 1;
				nToCardCount = Cards.GetSize();
			}
			else if (m_nCardCount == SpecialNumber::All)
			{
				nFromCardCount = Cards.GetSize();
				nToCardCount = nFromCardCount;
			}

			CostConfigurationArray configurations2;
			std::vector<OutType*> newConfigs(end-start,NULL);
			if(nFromCardCount==nToCardCount && Cards.GetSize()==nFromCardCount) //TODO: buggy once filters overlap!
				CheckPointers(newConfigs, Cards, configurations, start, end);
			else
			{
				configurations2.assign<CostConfigurationArray::const_iterator>(CostConfigurationArray::const_iterator(&configurations[start],&configurations),configurations.end());
				CheckPointers(newConfigs, Cards, configurations2, 0, end-start);
			}

			bool bFirst=true;
			for (int nCardCount = nFromCardCount;
				nCardCount <= nToCardCount;
				++nCardCount)
			{
				IntArray current;
				current.resize(nCardCount);

				IntArray bound;
				bound.resize(nCardCount);

				for (int i = 0; i < nCardCount; ++i)
				{
					current[i] = i;
					bound[i] = Cards.GetSize() - 1;
				}
						
				do
				{
					for (size_t i = 0; i < end-start; ++i)
					{
						OutType& newConfig=*newConfigs[i];
						OutType oldConfig=newConfig;

						for (int j = 0; j < nCardCount; ++j)
						{
							CCard* pCard = Cards.GetAt(current[j]);
							newConfig->AddCard(pCard);

							if (bSetNames)
							{
								CString strCostName1;

								if ((pCard->GetCardType() & CardType::Creature).Any())
									strCostName1.Format(m_Code.sText, ((CCreatureCard*)pCard)->GetCreatureName(TRUE));
								else
									strCostName1.Format(m_Code.sText, pCard->GetCardName());

								newConfig->AppendToCostName(strCostName1);
							}
						}

						if(!bFirst)
							configurations.push_back(configurations2[i]);
						else
							if(!configurations2.empty())
								configurations[start+i]=configurations2[i];

						if(!configurations2.empty())
						{
							newConfig->newCards(oldConfig->GetCards());
							if (bSetNames)
								newConfig->ResetCostName(oldConfig->GetCostName());
						}
					}
					bFirst=false;

				} while (Permutation(bound, nCardCount, current, TRUE, TRUE));
			}
		}

		return true;
	}
	OVERRIDE(ZoneId, GetFilterZone)()const				{return static_cast<ZoneId::Enum>(Code::Zone);}
	int GetCardCount() const							{return m_nCardCount;}
	friend bool operator==(const Me& i, const Me& j)
	{return i.m_pCardFilter == j.m_pCardFilter && i.m_Code == j.m_Code;} //m_pExcludeCard isn't compared!
protected:
	static CZone* GetZone(const CPlayer* pByPlayer)
		{return pByPlayer->GetZoneById(static_cast<ZoneId::Enum>(Code::Zone));}
	
	VIRTUAL(void, FillContainer)
						(const CPlayer* pByPlayer, 
						  CCountedCardContainer& out) const
	{
		if(m_nCardCount==0) return;
		const CZone* pZone = GetZone(pByPlayer);

		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			const CCard* pCard = pZone->GetAt(k);

			if (pCard!=m_pExcludeCard && m_pCardFilter->IsCardIncluded(pCard) && m_Code.IsPlayable(pCard,pByPlayer))
				out.AddCard(const_cast<CCard*>(pCard), CardPlacement::Top);
		}
	}
	void CheckPointers(std::vector<OutType*>& newConfigs,
						const CCountedCardContainer& Cards,
						CostConfigurationArray& configurations,
						const size_t start, 
						const size_t end) const
	{
		for (size_t i = start; i < end; ++i)
		{
			CostEntryList& costConfig = configurations[i].GetCosts();
			OutType* temp = &costConfig.next().findid<Code::EntryType>().downcast<Code::EntryType>();
#ifdef _MY_DEBUG
			if(temp)
				for(int j=0; j<(*temp)->GetCards()->GetSize(); j++)
					ATLASSERT(!Cards.HasCard((*temp)->GetCards()->GetAt(j))); //TODO: actually alter Cards to exclude already selected ones
#endif
			if(temp)
				newConfigs[i-start] = temp;
			else
			{
				if(!SpecialNumber::IsSpecialNumber(m_nCardCount))
					temp = new OutType(m_nCardCount,m_Code);
				else
					temp = new OutType(Cards.GetSize(),m_Code);
				costConfig.pushBack(temp);
				newConfigs[i-start]=temp;
			}
		}
	}
	int					m_nCardCount;
	Code				m_Code;
};
template<class Code>
class TVisualCardFilterCost : public TCardFilterCost<Code>
{
	typedef TCardFilterCost<Code> Parent;
	typedef TVisualCardFilterCost<Code> Me;

public:
	TVisualCardFilterCost(int nCount
#ifdef _MY_DEBUG
							=0
#endif
						, const CCardFilter* pFilter
#ifdef _MY_DEBUG
							=NULL
#endif
						, const Code& code=Code())
		: Parent(nCount, pFilter, code)
	{}
	TVisualCardFilterCost(const Me& c)
		: Parent(c)
	{}
	OVERRIDE(void, FillContainer)
						(const CPlayer* pByPlayer, 
						  CCountedCardContainer& out) const
	{
		if(static_cast<ZoneId::Enum>(Code::Zone)!=ZoneId::Battlefield &&
				m_nCardCount &&
				pByPlayer->GetGame()->IsThinking() &&
				(pByPlayer->GetGame()->GetThinkingPlayer() != pByPlayer->GetGame()->GetPriorityPlayer()))
			{
				const CZone* pZone = GetZone(pByPlayer);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					const CCard* pCard = pZone->GetAt(k);

					if (pByPlayer->GetGame()->IsCardVisible(pCard) &&
						m_pCardFilter->IsCardIncluded(pCard))
						out.AddCard(const_cast<CCard*>(pCard), CardPlacement::Top);
				}
			}
			else
				Parent::FillContainer(pByPlayer, out);
	}
};
typedef TCardFilterCost<TapCostBase<> > CTapFilterCost;
typedef TCardFilterCost<UntapCostBase<> > CUntapFilterCost;

//____________________________________________________________________________
//
struct CORE_EXPORT RevealCostBase : CCostCode
{
	typedef TSelectCostEntry<RevealCostBase> EntryType;
	enum {Zone=ZoneId::Hand};
	static bool IsPlayable(const CCard* pCard, const CPlayer* pByPlayer)
		{return true;}
	static BOOL PayCost(CCard*const& pCard, const CPlayer* pByPlayer);
	static const CString sText;
};
typedef TVisualCardFilterCost<RevealCostBase> CRevealFilterCost;
typedef RevealCostBase::EntryType CRevealCostEntry;

//____________________________________________________________________________
//
struct CORE_EXPORT CounterCostBase : CCostCode
{
	typedef TSelectCostEntry<CounterCostBase> EntryType;
	enum {Zone=ZoneId::Battlefield};
	CounterCostBase(int nCounterCost
#ifdef _MY_DEBUG
						=0
#endif
					, LPCTSTR pCounterName
#ifdef _MY_DEBUG
						=NULL
#endif
					)
		: m_nCounterCost(nCounterCost)
		, m_pCounterName(pCounterName)
		, sText(ToString(abs(nCounterCost))+_T(" ")
			+ pCounterName 
			+ (nCounterCost > 0	? _T(" to %s") 
								: _T(" from %s")))
	{}
	CounterCostBase(const CounterCostBase& c)
		: m_nCounterCost(c.m_nCounterCost)
		, m_pCounterName(c.m_pCounterName)
		, sText(c.sText)
	{}
	bool IsPlayable(const CCard* pCard, const CPlayer* pByPlayer) const;
	BOOL PayCost(CCard*const& pCard, const CPlayer* pByPlayer) const;
	bool typeof(const CounterCostBase& c)		{return m_pCounterName==c.m_pCounterName;}
	friend bool operator==(const CounterCostBase& i, const CounterCostBase& j)
	{return i.m_nCounterCost==j.m_nCounterCost && i.m_pCounterName==j.m_pCounterName;}
	const CString		sText;
	int					m_nCounterCost;
	LPCTSTR				m_pCounterName;
};
typedef TCardFilterCost<CounterCostBase> CCounterFilterCost;
typedef CounterCostBase::EntryType CCounterCostEntry;

//____________________________________________________________________________
//
template<class Code2>
class TMoveCostCode : public Code2
{
	typedef TMoveCostCode<Code2> Me;
public:
	typedef TSelectCostEntry<Me> EntryType;

	static bool IsPlayable(const CCard* pCard, const CPlayer* pByPlayer)
		{return (pCard->GetZoneId() == static_cast<ZoneId::Enum>(Code2::Zone));}

	static BOOL PayCost(CCard*const& pCard, const CPlayer* pByPlayer)
	{
		CZone* pZone = pCard->GetOwner()->GetZoneById(static_cast<ZoneId::Enum>(Code2::ToZone));
			
		pCard->Move(pZone, pByPlayer, 
			static_cast<MoveType::Enum>		(Code2::Type), 
			static_cast<CardPlacement::Enum>(Code2::Placement), 
			static_cast<BOOL>				(Code2::can_dredge));
		return TRUE; //TODO: can't be destroyed and similar should return FALSE here and above!
	}
};
template<class Code2>
class TMoveThisCost : public TThisCardCost< TMoveCostCode<Code2> >
{
	typedef TThisCardCost< TMoveCostCode<Code2> > Parent;
	typedef TMoveThisCost<Code2> Me;
public:
	typedef TMoveCostCode<Code2> Code;

	TMoveThisCost(CCard* pCard, const Code& code=Code())
		: TThisCardCost(pCard, code)
	{}
	TMoveThisCost(const Me& c)
		: TThisCardCost(c)
	{}

	OVERRIDE(bool, IsMoveCost)()const		{return true;}//TODO:returns if actual move happens
};
template<class Code2>
class TMoveFilterCost : public TVisualCardFilterCost< TMoveCostCode<Code2> >
{
	typedef TVisualCardFilterCost< TMoveCostCode<Code2> > Parent;
	typedef TMoveFilterCost<Code2> Me;

public:
	typedef TMoveCostCode<Code2> Code;

	TMoveFilterCost(int nCount, const CCardFilter* pFilter, const Code& code=Code())
		: Parent(nCount, pFilter, code)
	{}
	TMoveFilterCost(const Me& c)
		: Parent(c)
	{}

	OVERRIDE(bool, IsMoveCost)() const		{return true;}//TODO:returns if actual move happens
};

//____________________________________________________________________________
//
struct CORE_EXPORT SacrificeCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Battlefield,
		ToZone=ZoneId::Graveyard,
		Type=MoveType::Sacrifice, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static CString const sText;
};
typedef TMoveThisCost<SacrificeCostBase> CSacrificeThisCost;
typedef TMoveFilterCost<SacrificeCostBase> CSacrificeFilterCost;
typedef CSacrificeThisCost::Code::EntryType CSacrificeCostEntry;

//____________________________________________________________________________
//
struct CORE_EXPORT ReturnCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Battlefield,
		ToZone=ZoneId::Hand,
		Type=MoveType::Others, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static const CString sText;
};
typedef TMoveThisCost<ReturnCostBase> CReturnThisCost;
typedef TMoveFilterCost<ReturnCostBase> CReturnFilterCost;
typedef CReturnThisCost::Code::EntryType CReturnCostEntry;

//____________________________________________________________________________
//
struct CORE_EXPORT ExileCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Battlefield,
		ToZone=ZoneId::Exile,
		Type=MoveType::Others, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static const CString sText;
};
typedef TMoveThisCost<ExileCostBase> CExileThisCost;
typedef TMoveFilterCost<ExileCostBase> CExileFilterCost;
typedef CExileThisCost::Code::EntryType CExileCostEntry;

//____________________________________________________________________________
//
struct CORE_EXPORT DiscardCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Hand,
		ToZone=ZoneId::Graveyard,
		Type=MoveType::Discard, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static const CString sText;
};
typedef TMoveFilterCost<DiscardCostBase> CDiscardFilterCost;
typedef CDiscardFilterCost::Code::EntryType CDiscardCostEntry;
typedef TMoveThisCost<DiscardCostBase> CDiscardThisCost;

//____________________________________________________________________________
//
struct CORE_EXPORT ExileHandCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Hand,
		ToZone=ZoneId::Exile,
		Type=MoveType::Others, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static const CString sText;
};
typedef TMoveFilterCost<ExileHandCostBase> CExileHandFilterCost;
typedef CExileHandFilterCost::Code::EntryType CExileHandCostEntry;

//____________________________________________________________________________
//
struct CORE_EXPORT ExileGraveyardCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Graveyard,
		ToZone=ZoneId::Exile,
		Type=MoveType::Others, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static const CString sText;
};
typedef TMoveFilterCost<ExileGraveyardCostBase> CExileGraveyardFilterCost;
typedef CExileGraveyardFilterCost::Code::EntryType CExileGraveyardCostEntry;

//____________________________________________________________________________
//
struct CORE_EXPORT ExileStackCostBase : CCostCode
{
	enum
	{
		Zone=ZoneId::Stack,
		ToZone=ZoneId::Exile,
		Type=MoveType::Others, 
		Placement=CardPlacement::Top, 
		can_dredge=TRUE
	};
	static const CString sText;
};
typedef TMoveFilterCost<ExileStackCostBase> CExileStackFilterCost;
typedef CExileStackFilterCost::Code::EntryType CExileStackCostEntry;

//____________________________________________________________________________
//
class CORE_EXPORT CCostConfigEntry
{
	friend CCostBase<CManaCost>;
	friend CCostBase<CManaCost_>;

public:
	typedef CostEntryList::iterator Iterator;
	typedef CostEntryList::const_iterator ConstIterator;


	typedef TCheapList<CTapCostEntry,CAbstractCostEntry> TapCostEntry;
	typedef TCheapList<CUntapCostEntry,CAbstractCostEntry> UntapCostEntry;

	typedef TCheapList<CPlayerLifeCostEntry,CAbstractCostEntry> PlayerLifeCostEntry;

	typedef TCheapList<CReturnCostEntry,CAbstractCostEntry> ReturnCostEntry;
	typedef TCheapList<CSacrificeCostEntry,CAbstractCostEntry> SacrificeCostEntry;
	typedef TCheapList<CExileCostEntry,CAbstractCostEntry> ExileCostEntry;

	typedef TCheapList<CDiscardCostEntry,CAbstractCostEntry> DiscardCostEntry;
	typedef TCheapList<CRevealCostEntry,CAbstractCostEntry> RevealCostEntry;
	typedef TCheapList<CExileHandCostEntry,CAbstractCostEntry> ExileHandCostEntry;
	typedef TCheapList<CExileGraveyardCostEntry,CAbstractCostEntry> ExileGraveyardCostEntry;
	typedef TCheapList<CExileStackCostEntry,CAbstractCostEntry> ExileStackCostEntry;
	
	typedef TCheapList<CThisCounterCostEntry,CAbstractCostEntry> ThisCounterCostEntry;
	typedef TCheapList<CCounterCostEntry,CAbstractCostEntry> CounterCostEntry;

	CCostConfigEntry();
	CCostConfigEntry(const CCostConfigEntry& CostConfigEntry);

	CManaPool& GetManaPool()								{ return m_CostEntryList->m_ManaPool; }
	const CManaPool& GetManaPool() const					{ return m_CostEntryList->m_ManaPool; }
	void SetManaPool(const CManaPool& manaPool)				{ m_CostEntryList->m_ManaPool = manaPool; }

	const OptCostEntryArray& GetOptionalManaCosts() const		{ return m_OptionalCosts; }
	OptCostEntryArray& GetOptionalManaCosts()					{ return m_OptionalCosts; }
	bool HasOptionalManaCost(const CManaCost& manaCost) const;

	const CostEntryList& GetCosts() const		{ return m_CostEntryList; }
	CostEntryList& GetCosts()					{ return m_CostEntryList; }

	void SetPlayerLifeCost(CCard* pSourceCard, CPlayer* pPlayer, Life nLifeDelta);
	Life GetPlayerLifeCost() const							
	{
		const PlayerLifeCostEntry& lifeEntry = find<CPlayerLifeCostEntry>();	//TODO: for multikicker make this a loop!
		return (&lifeEntry ? lifeEntry->GetLifeDelta() : Life(0));
	}

	const CCountedCardContainer* GetSacrificeCards()const{return find<CSacrificeCostEntry>()->GetCards();}
	const CCountedCardContainer* GetExileCards()const{return find<CExileCostEntry>()->GetCards();}
	const CCountedCardContainer* GetReturnFromPlayCards()const{return find<CReturnCostEntry>()->GetCards();}
	const CCountedCardContainer* GetTapCards()const{return find<CTapCostEntry>()->GetCards();}
	const CCountedCardContainer* GetUntapCards()const{return find<CUntapCostEntry>()->GetCards();}
	const CCountedCardContainer* GetDiscardCards()const{return find<CDiscardCostEntry>()->GetCards();}
	const CCountedCardContainer* GetRevealCards()const{return find<CRevealCostEntry>()->GetCards();}
	const CCountedCardContainer* GetExileHandCards()const{return find<CExileHandCostEntry>()->GetCards();}
	const CCountedCardContainer* GetExileGraveyardCards()const{return find<CExileGraveyardCostEntry>()->GetCards();}
	const CCountedCardContainer* GetExileStackCards()const{return find<CExileStackCostEntry>()->GetCards();}
	const CCountedCardContainer* GetAnyCardCounterCostCards()const{return find<CCounterCostEntry>()->GetCards();}

	//void SetCounterCost(Counter* pCounter, int nCounterCost);
	//int GetCounterCost() const;
	//int GetAnyCardCounterCost() const;

	const CCard* GetReturnCard() const							{ return find<CReturnCostEntry>()->GetCard(); }

	void AppendToCostName(LPCTSTR strCostName);
	CString GetCostName() const;

	void SetExtraValue(int v)								{ m_nExtraValue=v; }
	int GetExtraValue() const								{ return m_nExtraValue; }

	CCostConfigEntry& operator=(const CCostConfigEntry& CostConfigEntry);
	bool operator==(const CCostConfigEntry& CostConfigEntry) const;
	VIRTUAL(bool, Equals)(const CCostConfigEntry* pEntry) const { return operator==(*pEntry); }

	BOOL PayCost(CPlayer* pByPlayer) const;

	template<class T>
	TCheapList<T,CAbstractCostEntry>& find()
	{
		//_STATIC_ASSERT(typeid(T)!=typeid(CBaseManaCostEntry));
		Iterator out=m_CostEntryList.next().findid<T>();
		for(size_t i=0; !out && i < m_OptionalCosts.size(); i++)
			out = m_OptionalCosts[i].next().findid<T>();
		return out.downcast<T>();
	}
	template<class T>
	const TCheapList<T,CAbstractCostEntry>& find() const
	{
		//_STATIC_ASSERT((typeid(T)!=typeid(CBaseManaCostEntry)));
		ConstIterator out=m_CostEntryList.next().findid<T>();
		for(size_t i=0; !out && i < m_OptionalCosts.size(); i++)
			out = m_OptionalCosts[i].next().findid<T>();
		return out.downcast<T>();
	}
protected:
	CString			m_strCostName;

	int				m_nExtraValue;

	CostEntryList m_CostEntryList;
	OptCostEntryArray	m_OptionalCosts;
};

//____________________________________________________________________________
//
template <class M>
class CCostBase
{
	typedef TCheapList<CBaseManaCost<M>,CAbstractCost> CostList;
	typedef OptCostArray::value_type OptType;
	typedef typename OptType::iterator Iterator;
	typedef typename OptType::const_iterator ConstIterator;

	typedef TCheapList<CFilterCost,CAbstractCost> FilterCost;
	typedef TCheapList<CThisCost,CAbstractCost> ThisCost;
public:
	typedef M ManaCostType;

	typedef TCheapList<CTapThisCost,CAbstractCost> TapThisCost;
	typedef TCheapList<CTapFilterCost,CAbstractCost> TapFilterCost;
	typedef TCheapList<CUntapThisCost,CAbstractCost> UntapThisCost;
	typedef TCheapList<CUntapFilterCost,CAbstractCost> UntapFilterCost;

	typedef TCheapList<CPlayerLifeCost,CAbstractCost> PlayerLifeCost;

	typedef TCheapList<CReturnThisCost,CAbstractCost> ReturnThisCost;
	typedef TCheapList<CReturnFilterCost,CAbstractCost> ReturnFilterCost;

	typedef TCheapList<CSacrificeThisCost,CAbstractCost> SacrificeThisCost;
	typedef TCheapList<CSacrificeFilterCost,CAbstractCost> SacrificeFilterCost;

	typedef TCheapList<CExileThisCost,CAbstractCost> ExileThisCost;
	typedef TCheapList<CExileFilterCost,CAbstractCost> ExileFilterCost;

	typedef TCheapList<CDiscardFilterCost,CAbstractCost> DiscardFilterCost;
	typedef TCheapList<CDiscardThisCost,CAbstractCost> DiscardThisCost;
	typedef TCheapList<CRevealFilterCost,CAbstractCost> RevealFilterCost;
	typedef TCheapList<CExileHandFilterCost,CAbstractCost> ExileHandFilterCost;
	typedef TCheapList<CExileGraveyardFilterCost,CAbstractCost> ExileGraveyardFilterCost;
	typedef TCheapList<CExileStackFilterCost,CAbstractCost> ExileStackFilterCost;
	
	typedef TCheapList<CThisCounterCost,CAbstractCost> ThisCounterCost;
	typedef TCheapList<CCounterFilterCost,CAbstractCost> CounterFilterCost;

	CCostBase(CGame* pGame)
		: m_pGame(pGame)
		, m_pAbility(NULL)
		, m_CostList()
	{}

	CCostBase(const CCostBase& CostBase)
		: m_pGame(NULL)
		, m_pAbility(NULL)
		, m_CostList()
	{
		operator=(CostBase);
	}

	CCostBase& operator=(const CCostBase& CostBase)
	{
		if (&CostBase == this)
			return *this;

		m_pGame = CostBase.m_pGame;
		m_pAbility = CostBase.m_pAbility;

		m_CostList = CostBase.m_CostList;

		m_OptionalCosts = CostBase.m_OptionalCosts;
		m_bOptionalIsInfinite = CostBase.m_bOptionalIsInfinite;

		return *this;
	}

	bool operator==(const CCostBase& costBase) const
	{
		// Note: m_pGame and m_pAbility not compared
		return (m_CostList == costBase.m_CostList) &&
			(m_OptionalCosts == costBase.m_OptionalCosts) &&
			(m_bOptionalIsInfinite == costBase.m_bOptionalIsInfinite);
	}

	VIRTUAL(bool, Equals)(const CCostBase* pCostBase) const	{ return operator==(*pCostBase); } // note: m_pGame and m_pAbility not compared

	void SetAbility(CAbility* pAbility)						{ m_pAbility = pAbility; }
//	const CAbility* GetAbility() const						{ return m_pAbility; }

	const CostList& GetCosts() const						{ return m_CostList; }
	// Mana cost
	CManaCost GetManaCost() const							{ return m_CostList->GetManaCost(); }

	const M& GetReductionCost() const						{ return m_CostList->m_ReductionCost; }         //Used for casting cost reduction
	const M& GetIncreasedCost() const						{ return m_CostList->m_IncreasedCost; }         //Used for casting cost reduction
	CManaCost GetOriginalManaCost() const
	{
		return m_CostList->m_ManaCost;
	}
    VIRTUAL(void, SetManaCost)(LPCTSTR strManaCostText)		
	{ 
		m_CostList->m_ManaCost.SetCost(strManaCostText); 
		UpdateAbilityType();
	}

	VIRTUAL(void, SetReductionCost)(LPCTSTR strManaCostText)		
	{ 
		m_CostList->m_ReductionCost.SetCost(strManaCostText); 
		UpdateAbilityType();
	}

	VIRTUAL(void, SetIncreasedCost)(LPCTSTR strManaCostText)		
	{ 
		m_CostList->m_IncreasedCost.SetCost(strManaCostText); 
		UpdateAbilityType();
	}

	void AddManaCost(CManaCost::Color color, DWORD dwValue)
	{
		m_CostList->m_ManaCost.AddCost(color, dwValue);
		UpdateAbilityType();
	}

	void AddManaCost(const CManaCost& manaCost)
	{
		m_CostList->m_ManaCost.AddCost(manaCost);
		UpdateAbilityType();
	}

	void AddReductionCost(const CManaCost& manaCost)
	{
		m_CostList->m_ReductionCost.AddCost(manaCost);
		UpdateAbilityType();
	}

	void AddReductionCost(CManaCost::Color color, DWORD dwValue)
	{
		m_CostList->m_ReductionCost.AddCost(color, dwValue);
		UpdateAbilityType();
	}


	void AddIncreasedCost(const CManaCost& manaCost)
	{
		m_CostList->m_IncreasedCost.AddCost(manaCost);
		UpdateAbilityType();
	}

	CManaCost GetIncreasedCost()
	{
		return m_CostList->m_IncreasedCost;		
	}

	void AddIncreasedCost(CManaCost::Color color, DWORD dwValue)
	{
		m_CostList->m_IncreasedCost.AddCost(color, dwValue);
		UpdateAbilityType();
	}

	void RemoveManaCost(CManaCost::Color color, DWORD dwValue)
	{
		m_CostList->m_ManaCost.RemoveCost(color, dwValue);
		UpdateAbilityType();
	}
	void RemoveExtraManaCost()
	{
		m_CostList->m_nExtraManaCost = 0;
		UpdateAbilityType();
	}

	void RemoveReductionCost(const CManaCost& manaCost)
	{
		m_CostList->m_ReductionCost.RemoveCost(manaCost);
		UpdateAbilityType();
	}

	void RemoveReductionCost(CManaCost::Color color, DWORD dwValue)
	{
		m_CostList->m_ReductionCost.RemoveCost(color, dwValue);
		UpdateAbilityType();
	}

	void RemoveIncreasedCost(const CManaCost& manaCost)
	{
		m_CostList->m_IncreasedCost.RemoveCost(manaCost);
		UpdateAbilityType();
	}

	void RemoveManaCost(const CManaCost& manaCost)
	{
		m_CostList->m_ManaCost.RemoveCost(manaCost);
		UpdateAbilityType();
	}

	int GetExtraManaCost() const							{ return m_CostList->m_nExtraManaCost; }

	bool HasExtraCost() const
	{
		if((!m_OptionalCosts.empty() && m_bOptionalIsInfinite)
				|| m_CostList->m_nExtraManaCost != 0)
			return true;

		for(ConstIterator j=++m_CostList.begin(); j;j++)
			if(j->HasExtraCost())
				return true;

		for (size_t i = 0; i < m_OptionalCosts.size(); ++i)
			for(ConstIterator j=m_OptionalCosts[i].begin();j;j++)
				if(j->HasExtraCost())
					return true;
		return false;
	}

	int GetExtraValue(const CCostConfigEntry& configEntry)	{return configEntry.GetExtraValue();}
	int GetOptionalValueSize(const CCostConfigEntry& configEntry)	{return configEntry.GetOptionalManaCosts().size();}
	int GetMaxExtraValue(const CManaPool& pool) const		{return m_CostList->GetMaxExtra(pool);}

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColors = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,				// Ref: Recall used for {XX .. casting costs}
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_CostList->m_nExtraManaCost = nExtraCost;
		m_CostList->m_ExtraManaCostColors = costColors;
		m_CostList->m_bAllowZeroExtra = bAllowZeroExtra;
		m_CostList->m_bDivideExtraCost = bDivide;
		m_CostList->m_bZeroExtraIsTrick = bZeroExtraIsTrick;

		UpdateAbilityType();
	}

	CManaPool::Colors GetWantedManaColors(const CManaPool* pManaPool) const
	{
		// If cost has generic costs, we want all mana colors
		//
		
		CManaCost effectiveManaCost(GetManaCost());

		if (effectiveManaCost.GetCost(CManaCost::Color::Generic)
			|| (m_CostList->m_nExtraManaCost != 0 &&
				m_CostList->m_ExtraManaCostColors.HasColor(CManaCost::Color::Generic)))
			return pManaPool->GetNormalizedColors();

		CManaCost::Colors costColors(effectiveManaCost.GetNormalizedColors());
		for (size_t i = 0; i < m_OptionalCosts.size(); ++i)
		{
			if (m_OptionalCosts[i]->m_ManaCost.GetCost(CManaCost::Color::Generic)
				|| (m_OptionalCosts[i]->m_nExtraManaCost != 0 &&
					m_OptionalCosts[i]->m_ExtraManaCostColors.HasColor(CManaCost::Color::Generic)))
				return pManaPool->GetNormalizedColors();

			costColors |= m_OptionalCosts[i]->m_ManaCost.GetNormalizedColors();//no kicker with coloured extra!
		}

		// Add extra mana cost
		if (m_CostList->m_nExtraManaCost != 0)  //there's no cost-reduction for coloured limited extra-cost!
			costColors.AddColors(m_CostList->m_ExtraManaCostColors);

		return CManaCost::ToPoolColors(costColors) & pManaPool->GetNormalizedColors();
	}

	int GetMaximumWantedMana() const
	{
		if(!m_OptionalCosts.empty())
		{
			ATLASSERT(!m_bOptionalIsInfinite || m_OptionalCosts.size() == 1);//only 1 multikicker supported
			if(m_bOptionalIsInfinite && m_OptionalCosts[0]->GetMaximumWantedMana())
				return SpecialNumber::Any;
			CBaseManaCost<CManaCost> total(*m_CostList);

			for(size_t j=0;j<m_OptionalCosts.size();j++)
			{
				if(total.m_nExtraManaCost == SpecialNumber::Any)
					return SpecialNumber::Any;	// No upper bound
				total.AddCost(*m_OptionalCosts[j]);
			}

			return total.GetMaximumWantedMana();
		}

		return m_CostList->GetMaximumWantedMana();
	}

	// Optional mana cost
	void AddOptionalManaCost(const CManaCost& manaCost, bool repeat=false)
	{
		m_OptionalCosts.push_back(OptType(manaCost,0));
		m_bOptionalIsInfinite=repeat;
		UpdateAbilityType();
	}

	void RemoveOptionalManaCost(const CManaCost& manaCost)//, bool repeat=false)
	{
		for(size_t i=0; i < m_OptionalCosts.size(); i++)
		{
			if (m_OptionalCosts.at(i)->GetManaCost() ==  manaCost)
			{
				m_OptionalCosts.erase(m_OptionalCosts.begin() + i);				
				break;
			}
		}
	//	m_bOptionalIsInfinite=repeat;
		UpdateAbilityType();
	}
	/*int GetOptionalManaCost() const
	{
		return m_OptionalCosts.
	}*/


	//creates a new entry with pre-created cost-object.
	void AddNormalCost(OptType::Base* out, bool bOptional)
	{
		if(bOptional)
		{
			if(m_OptionalCosts.empty())
				m_OptionalCosts.push_back(OptType());
			m_OptionalCosts.back().pushBack(out);
		}
		else
			m_CostList.insertNext(out);
	}
	void AddMoveCost(OptType::Base* out, bool bOptional)
	{
		ExcludeMoveCards(out->begin(),++m_CostList.begin()); //i.e. Return This and sac 3 can't sac This
		for(size_t i=0; i<m_OptionalCosts.size(); i++)
			ExcludeMoveCards(out->begin(),++m_OptionalCosts[i].begin());

		if(bOptional)
		{
			if(m_OptionalCosts.empty())
				m_OptionalCosts.push_back(OptType());
			m_OptionalCosts.back().pushBack(out);
		}
		else
			m_CostList.pushBack(out);
	}

	//returns the first cost matching the cost-class
	template<class T>
	TCheapList<T,CAbstractCost>& find()
	{
		//_STATIC_ASSERT(typeid(T)!=typeid(CBaseManaCost<M>));
		Iterator out=m_CostList.next().findid<T>();
		for(size_t i=0; !out && i < m_OptionalCosts.size(); i++)
			out = m_OptionalCosts[i].next().findid<T>();
		return out.downcast<T>();
	}
	template<class T>
	TCheapList<T,CAbstractCost>& find(const typename T::Code& c)
	{
		Iterator out=m_CostList.next().findid<T>();
		while(out)
			if(out.downcast<T>().typeof(c))
				break;
			else
				if(++out)
					out=static_cast<Iterator::Entry>(out).findid<T>();
		for(size_t i=0; !out && i < m_OptionalCosts.size(); i++)
		{
			out = m_OptionalCosts[i].next().findid<T>();
			while(out)
				if(out.downcast<T>().typeof(c))
					break;
				else
					if(++out)
						out=static_cast<Iterator::Entry>(out).findid<T>();
		}
		return out.downcast<T>();
	}
	template<>
	TCheapList<CThisCounterCost,CAbstractCost>& find<CThisCounterCost>(const CThisCounterCost::Code& c)
	{
		typedef CThisCounterCost T;
		Iterator out=m_CostList.next().findid<T>();
		while(out)
			if(out.downcast<T>()->GetCounter()->GetName() == c.m_pCounterName)
				break;
			else
				if(++out)
					out=static_cast<Iterator::Entry>(out).findid<T>();
		for(size_t i=0; !out && i < m_OptionalCosts.size(); i++)
		{
			out = m_OptionalCosts[i].next().findid<T>();
			while(out)
				if(out.downcast<T>()->GetCounter()->GetName() == c.m_pCounterName)
					break;
				else
					if(++out)
						out=static_cast<Iterator::Entry>(out).findid<T>();
		}
		return out.downcast<T>();
	}

	//checks all costs for match with given cost-object
	template<class T>
	BOOL IsAnywhere(const T& cost) const
	{
		if(m_CostList.find(cost))
			return TRUE;
		for(size_t i=0; i<m_OptionalCosts.size();i++)
			if(m_OptionalCosts[i].find(cost))
				return TRUE;
		return FALSE;
	}

	// Decrease player life cost
	void SetPlayerLifeCost(CCard* pSourceCard, 		// Will get player from source card's controller when GetConfigurations() is called. 
							Life nLifeDelta,		// 0  - no life cost
							bool bOptional = false)	// (See also SPECIAL_NUMBERS)
	{
		ATLASSERT(SpecialNumber::IsSpecialNumber(GET_INTEGER(nLifeDelta)) || (nLifeDelta <= Life(0)));

		AddNormalCost(new PlayerLifeCost(pSourceCard, nLifeDelta), bOptional);
	}

	// Tap specific card cost
	void AddTapThisCardCost(CCard* pCard, bool bOptional = false)	
	{
		bool bOtherFilterFound=ExcludeFromOtherCards<CTapFilterCost>(pCard);
		ATLASSERT(!bOtherFilterFound);
		AddNormalCost(new TapThisCost(pCard), bOptional);
	}

	BOOL HasTapThisCardCost(CCard* pCard) const
	{
		if (!pCard)
			return FALSE;

		return IsAnywhere(CTapThisCost(pCard));
	}

	BOOL HasOnlyTapCost() const
	{
		return !m_CostList.empty() && 
			CLASSID(&m_CostList.next()) == typeid(TapThisCost) && 
			m_CostList.next().empty() && 
			m_OptionalCosts.empty();
	}

	// Untap specific card cost
	void AddUntapThisCardCost(CCard* pCard, bool bOptional = false)	
	{ 
		bool bOtherFilterFound=ExcludeFromOtherCards<CUntapFilterCost>(pCard);
		ATLASSERT(!bOtherFilterFound);
		AddNormalCost(new UntapThisCost(pCard), bOptional);
	}

	BOOL HasUntapThisCardCost(CCard* pCard) const
	{
		if (!pCard)
			return FALSE;

		return IsAnywhere(CUntapThisCost(pCard));
	}

	// Sacrifice specific card cost
	void AddSacrificeThisCardCost(CCard* pCard, bool bOptional = false)			
	{ 
		AddMoveCost(new SacrificeThisCost(pCard), bOptional);
	}

	// Sacrifice cost
	void AddSacrificeCardCost(int nSacrificeCardCount,		// SpecialNumber::Any for any
							  const CCardFilter* pSacrificeCardFilter, 
							  bool bOptional = false)
	{
		AddMoveCost(new SacrificeFilterCost(nSacrificeCardCount, pSacrificeCardFilter),bOptional);
	}

	int GetSacrificeCardCount() const					
	{
		SacrificeFilterCost& cost=find<CSacrificeFilterCost>();
		return cost->GetCardCount();
	}

	// Exile specific card cost
	void AddExileThisCardCost(CCard* pCard, bool bOptional = false)			
	{ 
		AddMoveCost(new ExileThisCost(pCard), bOptional);
	}

	// Exile cost
	void AddExileCardCost(int nExileCardCount,		// SpecialNumber::Any for any
							  const CCardFilter* pExileCardFilter,
							  bool bOptional = false)
	{
		AddMoveCost(new ExileFilterCost(nExileCardCount, pExileCardFilter),bOptional);
	}

	int GetExileCardCount() const
	{
		ExileFilterCost& cost=find<CExileFilterCost>();
		return cost->GetCardCount();
	}

	// Return specific card back to owner's hand
	void AddReturnThisCardCost(CCard* pCard, bool bOptional = false)
	{ 
		AddMoveCost(new ReturnThisCost(pCard), bOptional);
	}

	// Return From Play Card cost
	void AddReturnFromPlayCardCost(int nReturnFromPlayCardCount,		// SpecialNumber::Any for any
							  const CCardFilter* pReturnFromPlayCardFilter,
							  bool bOptional = false)
	{
		AddMoveCost(new ReturnFilterCost(nReturnFromPlayCardCount, pReturnFromPlayCardFilter), bOptional);
	}

	int GetReturnFromPlayCardCount() const
	{
		ReturnFilterCost& cost=find<CReturnFilterCost>();
		return cost->GetCardCount();
	}

	// Tap card cost
	void AddTapCardCost(int nTapCardCount,					// SpecialNumber::Any for any
					    const CCardFilter* pTapCardFilter,
						bool bOptional = false)
	{
		TapFilterCost* newEntry=new TapFilterCost(nTapCardCount, pTapCardFilter);
		TapThisCost* otherEntry=&find<CTapThisCost>();
		if(otherEntry)
			(*newEntry)->SetExcludeCard((*otherEntry)->GetCard());
		AddNormalCost(newEntry, bOptional);
	}

	// Untap card cost
	void AddUntapCardCost(int nUntapCardCount,					// SpecialNumber::Any for any
					    const CCardFilter* pUntapCardFilter,
						bool bOptional = false)
	{
		UntapFilterCost* newEntry=new UntapFilterCost(nUntapCardCount, pUntapCardFilter);
		UntapThisCost* otherEntry=&find<CUntapThisCost>();
		if(otherEntry)
			(*newEntry)->SetExcludeCard((*otherEntry)->GetCard());
		AddNormalCost(newEntry, bOptional);
	}

	// Discard specific card cost
	void AddDiscardThisCardCost(CCard* pCard, bool bOptional = false)			
	{ 
		AddMoveCost(new DiscardThisCost(pCard), bOptional);
	}

	// Discard cost
	void AddDiscardCardCost(int nDiscardCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pDiscardCardFilter,
							bool bOptional = false)
	{
		AddMoveCost(new DiscardFilterCost(nDiscardCardCount, pDiscardCardFilter), bOptional);
	}

	// Reveal cost
	void AddRevealCardCost(int nRevealCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pRevealCardFilter,
							bool bOptional = false)
	{
		AddNormalCost(new RevealFilterCost(nRevealCardCount, pRevealCardFilter), bOptional);
	}

	// Exile from hand cost
	void AddExileHandCardCost(int nExileHandCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pExileHandCardFilter,
							bool bOptional = false)
	{
		AddMoveCost(new ExileHandFilterCost(nExileHandCardCount, pExileHandCardFilter), bOptional);
	}

	// Exile from graveyard cost
	void AddExileGraveyardCardCost(int nExileGraveyardCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pExileGraveyardCardFilter,
							bool bOptional = false)
	{
		AddMoveCost(new ExileGraveyardFilterCost(nExileGraveyardCardCount, pExileGraveyardCardFilter), bOptional);
	}

	int GetExileGraveyardCardCount() const
	{
		ExileGraveyardFilterCost& cost=find<CExileGraveyardFilterCost>();
		return cost->GetCardCount();
	}

	// Exile from stack cost
	void AddExileStackCardCost(int nExileStackCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pExileStackCardFilter,
							bool bOptional = false)
	{
		AddMoveCost(new ExileStackFilterCost(nExileStackCardCount, pExileStackCardFilter), bOptional);
	}

	// Generic Card Counter Cost
	void AddAnyCardCounterCost(LPCTSTR  pAnyCardCounter,
								int nAnyCardCounterCost,
								int nAnyCardCounterCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
								const CCardFilter* pAnyCardCounterCardFilter,
								bool bOptional = false
								)
	{
		CounterCostBase code(nAnyCardCounterCost, pAnyCardCounter);
		CounterFilterCost* newEntry=new CounterFilterCost(nAnyCardCounterCardCount
														, pAnyCardCounterCardFilter
														, code);
		ThisCounterCost& otherEntry=find<CThisCounterCost>(code);
		if(&otherEntry)
			(*newEntry)->SetExcludeCard(otherEntry->GetCounter()->GetContainer()->GetCard());
		AddNormalCost(newEntry, bOptional);
	}

	int GetAnyCardCounterCardCount() const
	{
		CounterFilterCost& cost=find<CCounterFilterCost>();
		return cost->GetCardCount();
	}

	// Counter cost
	void AddCounterCost(Counter* pCounter,
						int nCounterCost,			// positive number for adding counter as a cost; negative number for removing counter as a cost
						bool bOptional = false)		// SpecialNumber::AnyNegative for -X (AnyPositive is not supported); SpecialNumber::All is supported
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(nCounterCost) || nCounterCost == SpecialNumber::AnyNegative || nCounterCost == SpecialNumber::All);

		bool bOtherFilterFound=ExcludeFromOtherCards<CCounterFilterCost>(pCounter->GetContainer()->GetCard());
		ATLASSERT(!bOtherFilterFound);
		AddNormalCost(new ThisCounterCost(pCounter,nCounterCost), bOptional);
	}

	// Cost configurations
	BOOL IsPlayable(const CPlayer* pByPlayer, BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
	{
		for(ConstIterator i=m_CostList.begin(); i; ++i)
			if(!i->IsPlayable(pByPlayer,bIncludeTricks,bAssumeSufficientMana)) return FALSE;

		return TRUE;
	}

	void UpdateAbilityType()
	{
		if (m_pAbility)
		{
			AbilityType type=m_pAbility->GetAbilityType() & ~AbilityType::_ConsumeMana;

			for(Iterator i=m_CostList.begin();i;++i)
				type |= i->GetAbilityType();

			if(!m_OptionalCosts.empty()
				&& (type & AbilityType::_ConsumeMana) == AbilityType::Null
				&& GetMaximumWantedMana())
					type |= AbilityType::_ConsumeMana;

			for(size_t j=0;j<m_OptionalCosts.size();j++)
				for(Iterator i=++m_OptionalCosts[j].begin();i;++i)
					type |= i->GetAbilityType();
			m_pAbility->SetAbilityType(type);
		}
	}


	size_t
		GetConfigurations(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations) const
	{
		//configurations.clear();
		// Add required cost

		if (!AddManaCostConfigurationsImpl(pByPlayer, bIncludeTricks, bSetNames, configurations, 0, *m_CostList))
			return 0; //TODO: make IsThinking optimizations for other costs too.
		const size_t nManaCostEnd=MAX(1,configurations.size());

		for(ConstIterator i=++m_CostList.begin(); i; ++i)
			if(!i->GetConfigurations
						(pByPlayer, 
						  bIncludeTricks,
						  bSetNames,
						  configurations,
						  0)) return 0;

		if(configurations.empty() && !m_OptionalCosts.empty())
			configurations.push_back(CCostConfigEntry());

		const size_t nOptCostStart=configurations.size();

		if (m_OptionalCosts.empty())
			return nOptCostStart;


		// Add optional costs

		ATLASSERT(!m_bOptionalIsInfinite || m_OptionalCosts.size()==1);
		ATLASSERT(!m_bOptionalIsInfinite || m_OptionalCosts[0]->GetManaCost().Any() || !m_OptionalCosts[0].empty()); //showstopper for kicker-cost-reduction!

		size_t nExtraOpt=1;					//multikicker-count
		size_t nOptCostEnd=nOptCostStart;	//both belong to the for below
		for (size_t j = 1; j <= m_OptionalCosts.size(); ++j)
		{
			IntArray bound;
			IntArray current;
			for (size_t k = 0; k < j; ++k)
			{
				current.push_back(k);
				bound.push_back(m_OptionalCosts.size() - 1);//TODO: can be done in constructor
			}

			//Add multikicker repetitions
			for (size_t k = 1; k < nExtraOpt; ++k)
			{
				current.push_back(0);
				bound.push_back(m_OptionalCosts.size() - 1);//TODO: can be done in constructor
			}

			do
			{
				size_t newOptCostEnd=nOptCostEnd;

				if(AddOptCostConfigurations(pByPlayer, 
								   bIncludeTricks, bSetNames,
								   configurations,
								   nManaCostEnd,			//other normal cost-configurations are repeated!
								   nOptCostStart,			//end of normal costs
								   nOptCostEnd,
								   current))
				{
					newOptCostEnd = configurations.size();
				}
				else
				{
					if(m_bOptionalIsInfinite)
						return configurations.size(); //breaking the infinite loop!
				}
				/*
				!!!Unresolved FAULT
				When implementing the strive ability it was discovered that strive cards with identical casting and repeatable additional 
				casting costs that contain no colourless mana, when mana is tapped to cast these spells cause Botarena to stop 
				responding and after 20 seconds the software crashes.
				Example
					Desperate Stand’s casting cost {RW} and additional target cost {RW} are identical and contain no colourless mana, 
					so this card has the endless loop issue
				
				Cards affected are Blinding Flare, Desperate Stand and Kiora’s Dismissal.

				nExtraOpt variable (below) keeps incrementing until game crashes.
				The debugger revealed that there is a difference in the path of execution between strive cards that are working 
				and cards that are entering this endless loop. 
				*/
				if(m_bOptionalIsInfinite)
				{
					for(size_t k=nOptCostEnd; k<newOptCostEnd; ++k)
						configurations[k].SetExtraValue(nExtraOpt); //TODO:add text to print out nExtraOpt
					nExtraOpt++;
					j--;			//infinite loop!
				}
				nOptCostEnd=newOptCostEnd;
			} while (Permutation(bound, j, current, TRUE, TRUE));
		}

		return configurations.size();
	}
private:
	void ExcludeMoveCards(Iterator n, Iterator from)
	{
		if(n->GetFilter())
		{
			CFilterCost& newCost=*n.downcast<CFilterCost>();
			const ZoneId zone=newCost.GetFilterZone();
			for(ConstIterator i=from; i; ++i)
				if(i->IsMoveCost() && NULL==i->GetFilter())
				{
					const CCard* pCard=i.downcast<CThisCost>()->GetCard();
					if(zone.Get() == ZoneId::Battlefield)
					{
						newCost.SetExcludeCard(pCard);
						return; //all other MoveThis costs have same m_pCard!
					}
				}
		}
		else
		{
			const CCard* pCard=n.downcast<CThisCost>()->GetCard();
			const ZoneId::Enum zone=ZoneId::Battlefield;	//TODO:assuming all move-this-costs start in-play.
			for(Iterator i=from; i; ++i)
				if(i->IsMoveCost() && (i->GetFilter()) && i.downcast<CFilterCost>()->GetFilterZone().Get()==zone)
				{
					ATLASSERT(NULL==i->GetFilter());  //please first add card-costs!
					i.downcast<CFilterCost>()->SetExcludeCard(pCard);
				}
				//else ATLASSERT(!i->IsMoveCost() || i.downcast<CThisCost>()->GetCard() == pCard);//triggered by 2 cards: 	Odyssey.dll!CZombieAssassinCard::CZombieAssassinCard(CGame * pGame, unsigned int nID)  Line 8326	and 5x	Mirage.dll!CLionsEyeDiamondCard::CLionsEyeDiamondCard(CGame * pGame, unsigned int nID)  Line 1240	C++
		}
	}
	template<class C>
	bool ExcludeFromOtherCards(const CCard* pCard)
	{
		//_STATIC_ASSERT(typeid(C)!=typeid(CBaseManaCost<M>));
		bool out=false;

		Iterator other=m_CostList.next().findid<C>();
		while(other)
		{
			out=true;
			other.downcast<C>()->SetExcludeCard(pCard);
			if(++other)
				other=static_cast<Iterator::Entry>(other).findid<C>();
		}
		for(size_t i=0; i<m_OptionalCosts.size(); i++)
		{
			other=m_OptionalCosts[i].next().findid<C>();
			while(other)
			{
				out=true;
				other.downcast<C>()->SetExcludeCard(pCard);
				other=static_cast<Iterator::Entry>(other).findid<C>();
			}
		}

		return out;
	}

	bool AddOptCostConfigurations(const CPlayer* pByPlayer, 
								   BOOL bIncludeTricks, BOOL bSetNames,
								   CostConfigurationArray& configurations,
								   const size_t nManaCostEnd,
								   const size_t nOptCostStart,
								   const size_t nOptCostEnd,
								   IntArray current) const
	{
		OptCostEntryArray optionalCostsUsed;					//optional mana-costs only
		CBaseManaCost<CManaCost> fixedManaCost(*m_CostList);

		for (size_t i = 0; i < current.size(); ++i)
		{
			fixedManaCost.AddCost(
				*m_OptionalCosts[current[i]]);
			optionalCostsUsed.push_back(COptionManaCostEntry(
				m_OptionalCosts[current[i]]->GetManaCost()));//extra-cost&text are only in base-entry!
		}
		if(!AddManaCostConfigurationsImpl(pByPlayer, 
							bIncludeTricks, 
							bSetNames, 
							configurations, 
							nOptCostEnd, 
							fixedManaCost))
		{
			configurations.resize(nOptCostEnd);
			return false;
		}
		for(size_t i = 0; i < optionalCostsUsed.size(); ++i)
		{
			for(ConstIterator k = ++m_OptionalCosts[current[i]].begin();
												k; ++k)
				if(!k->GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations, nOptCostEnd))
				{
					//optionalCostsUsed.clear();
					configurations.resize(nOptCostEnd);
					return false;
				}
			for(size_t k = nOptCostEnd; k < configurations.size(); k++)
			{
				configurations[k].m_OptionalCosts.push_back(optionalCostsUsed[i]);	//add optional mana

				//relocate normal to optional costs and restore normal costs with a copy
				configurations[k].m_OptionalCosts[i].pushBack(
					&configurations[k].m_CostEntryList.next());
				if(!configurations[0].m_CostEntryList.empty())
					configurations[k].m_CostEntryList.pickNext( 
					configurations[0].m_CostEntryList.next().clone());
			}
		}

		//copy alternative normal costs
		const size_t newOptCostEnd=configurations.size();		//belongs to for below
		for(size_t k = nManaCostEnd; k < nOptCostStart; k += nManaCostEnd)
			for(size_t i = nOptCostEnd; i < newOptCostEnd; i++)
			{
				configurations.push_back(configurations[k]);	//copy non-mana normal costs and X-value
				*configurations.back().m_CostEntryList=*configurations[i].m_CostEntryList;	//copy fresh ManaCostEntry
				configurations.back().m_OptionalCosts=configurations[i].m_OptionalCosts;	//and optional costs
			}
		return true;
	}


	template<class M_>
	bool AddManaCostConfigurationsImpl(const CPlayer* pByPlayer, 
									   BOOL bIncludeTricks, BOOL bSetNames,
									   CostConfigurationArray& configurations,
									   const size_t start,
									   const CBaseManaCost<M_>& manaCost) const
	{
		if (m_pGame->IsThinking())
			return manaCost.GetConfigurationsThinking
						(pByPlayer, 
						  bIncludeTricks, 
						  bSetNames, 
						  configurations, 
						  start);
		else //if (m_pGame->IsThinking())
			return manaCost.GetConfigurations
						(pByPlayer, 
						  bIncludeTricks,
						  bSetNames,
						  configurations,
						  start);
	}

	CGame*				m_pGame;
	CAbility*			m_pAbility; // if set, it is the owner, no need to reference count

	CostList			m_CostList;

	OptCostArray		m_OptionalCosts;
	bool				m_bOptionalIsInfinite;
};

typedef CCostBase<CManaCost_> CCost_;
typedef CCostBase<CManaCost> CCost;