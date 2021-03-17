#pragma once

//____________________________________________________________________________
//
typedef std::vector<CManaCost> ManaCostArray;

//____________________________________________________________________________
//
class CORE_EXPORT CManaCostBase
{
public:
	struct Color
	{
		enum Enum : DWORD
		{
			Null	= 0,

			Blue	= 0x00000001,
			Black	= 0x00000002,
			Red		= 0x00000004,
			Green	= 0x00000008,
			White	= 0x00000010,
			Generic	= 0x00000020,
		};

		DEFINE_BITFLAG_ENUM_OPS(Color, DWORD);
	};

	class Colors
	{
	public:
		Colors()
			: m_Costs( Color::Null )
		{
		}

		Colors(
			Color c1, 
			Color c2 = Color::Null,
			Color c3 = Color::Null, 
			Color c4 = Color::Null,
			Color c5 = Color::Null, 
			Color c6 = Color::Null)
		{
			m_Costs = c1 | c2 | c3 | c4 | c5 | c6;
		}

		Colors(const Colors& costColors)
		{
			m_Costs = costColors.m_Costs;
		}

		void AddColor(Color manaCost)
		{
			m_Costs |= manaCost;
		}

		void AddColors(const Colors& costColors)
		{
			m_Costs |= costColors.m_Costs;
		}

		BOOL HasColor(Color manaCost) const
		{
			return (m_Costs & manaCost).Any();
		}

		bool operator==(const Colors& colors) const
		{
			return m_Costs == colors.m_Costs;
		}

		bool operator!=(const Colors& colors) const
		{
			return m_Costs != colors.m_Costs;
		}

		Colors operator|=(const Colors& colors)
		{
			m_Costs |= colors.m_Costs;
			return m_Costs;
		}

		Colors operator&(const Colors& colors) const
		{
			return m_Costs & colors.m_Costs;
		}

		Colors operator&(const Color& color) const
		{
			return m_Costs & color;
		}

		Colors operator~() const
		{
			return ~m_Costs;
		}

		int GetCount() const
		{
			int nCount = 0;
			if ((m_Costs & Color::Blue).Any())
				++nCount;

			if ((m_Costs & Color::Black).Any())
				++nCount;

			if ((m_Costs & Color::Green).Any())
				++nCount;

			if ((m_Costs & Color::Red).Any())
				++nCount;

			if ((m_Costs & Color::White).Any())
				++nCount;

			if ((m_Costs & Color::Generic).Any())
				++nCount;

			return nCount;
		}

		Color GetFirstColor() const
		{
			if ((m_Costs & Color::Blue).Any())
				return Color::Blue;

			if ((m_Costs & Color::Black).Any())
				return Color::Black;

			if ((m_Costs & Color::Green).Any())
				return Color::Green;

			if ((m_Costs & Color::Red).Any())
				return Color::Red;

			if ((m_Costs & Color::White).Any())
				return Color::White;

			if ((m_Costs & Color::Generic).Any())
				return Color::Generic;

			return Color::Null;
		}

		bool Any() const
		{
			return m_Costs != Color::Null;
		}

	protected:
		Color m_Costs;
	};

	static Colors AllCostColors;

	static Color FromPoolColor(CManaPool::Color manaColor)
	{
		if (manaColor == CManaPool::Color::Blue)
			return Color::Blue;

		if (manaColor == CManaPool::Color::Black)
			return Color::Black;

		if (manaColor == CManaPool::Color::Red)
			return Color::Red;

		if (manaColor == CManaPool::Color::Green)
			return Color::Green;

		if (manaColor == CManaPool::Color::White)
			return Color::White;

		if (manaColor == CManaPool::Color::Colorless)
			return Color::Generic;

		return Color::Null;
	}

	static Colors FromPoolColors(const CManaPool::Colors& manaPoolColors)
	{
		Colors colors;

		if (manaPoolColors.HasColor(CManaPool::Color::Blue))
			colors.AddColor(Color::Blue);

		if (manaPoolColors.HasColor(CManaPool::Color::Black))
			colors.AddColor(Color::Black);

		if (manaPoolColors.HasColor(CManaPool::Color::Red))
			colors.AddColor(Color::Red);

		if (manaPoolColors.HasColor(CManaPool::Color::Green))
			colors.AddColor(Color::Green);

		if (manaPoolColors.HasColor(CManaPool::Color::White))
			colors.AddColor(Color::White);

		if (manaPoolColors.HasColor(CManaPool::Color::Colorless))
			colors.AddColor(Color::Generic);

		return colors;
	}

	static CManaPool::Color ToPoolColor(Color costColor)
	{
		if (costColor == Color::Blue)
			return CManaPool::Color::Blue;

		if (costColor == Color::Black)
			return CManaPool::Color::Black;

		if (costColor == Color::Red)
			return CManaPool::Color::Red;

		if (costColor == Color::Green)
			return CManaPool::Color::Green;

		if (costColor == Color::White)
			return CManaPool::Color::White;

		if (costColor == Color::Generic)
			return CManaPool::Color::Colorless;

		return CManaPool::Color::Null;
	}

	static CManaPool::Colors ToPoolColors(const Colors& costColors)
	{
		CManaPool::Colors colors;

		if (costColors.HasColor(Color::Blue))
			colors.AddColor(CManaPool::Color::Blue);

		if (costColors.HasColor(Color::Black))
			colors.AddColor(CManaPool::Color::Black);

		if (costColors.HasColor(Color::Red))
			colors.AddColor(CManaPool::Color::Red);

		if (costColors.HasColor(Color::Green))
			colors.AddColor(CManaPool::Color::Green);

		if (costColors.HasColor(Color::White))
			colors.AddColor(CManaPool::Color::White);

		if (costColors.HasColor(Color::Generic))
			colors.AddColor(CManaPool::Color::Colorless);

		return colors;
	}
};

//____________________________________________________________________________
//
template <class ValueType>
class CManaCostBase2 : public CManaCostBase
{
	friend class CManaCostBase2<DWORD>;
	friend class CManaCostBase2<DWORD_>;

public:
	CManaCostBase2()
		: m_BlueCost(0)
		, m_BlackCost(0)
		, m_RedCost(0)
		, m_GreenCost(0)
		, m_WhiteCost(0)
		, m_GenericCost(0)
	{
	}

	CManaCostBase2(
		Color manaCost1, DWORD dwValue1,
		Color manaCost2 = Color::Null, DWORD dwValue2 = 0,
		Color manaCost3 = Color::Null, DWORD dwValue3 = 0,
		Color manaCost4 = Color::Null, DWORD dwValue4 = 0,
		Color manaCost5 = Color::Null, DWORD dwValue5 = 0,
		Color manaCost6 = Color::Null, DWORD dwValue6 = 0)
		: m_BlueCost(0)
		, m_BlackCost(0)
		, m_RedCost(0)
		, m_GreenCost(0)
		, m_WhiteCost(0)
		, m_GenericCost(0)
	{
		SetAllCost(
			manaCost1, dwValue1,
			manaCost2, dwValue2,
			manaCost3, dwValue3,
			manaCost4, dwValue4,
			manaCost5, dwValue5,
			manaCost6, dwValue6);
	}

	CManaCostBase2(const CManaCostBase2& manaCost)
		: m_BlueCost(0)
		, m_BlackCost(0)
		, m_RedCost(0)
		, m_GreenCost(0)
		, m_WhiteCost(0)
		, m_GenericCost(0)
	{
		SetCost(manaCost);
	}

	CManaCostBase2(LPCTSTR strManaText)
		: m_BlueCost(0)
		, m_BlackCost(0)
		, m_RedCost(0)
		, m_GreenCost(0)
		, m_WhiteCost(0)
		, m_GenericCost(0)
	{
		SetCost(strManaText);
	}

	CManaCostBase2& operator=(const CManaCostBase2& manaCost)
	{
		if (&manaCost == this)
			return *this;

		SetCost(manaCost);

		return *this;
	}

	bool operator==(const CManaCostBase2& manaCost) const
	{
		return (m_BlueCost == manaCost.m_BlueCost) &&
			(m_BlackCost == manaCost.m_BlackCost) &&
			(m_GreenCost == manaCost.m_GreenCost) &&
			(m_RedCost == manaCost.m_RedCost) &&
			(m_WhiteCost == manaCost.m_WhiteCost) &&
			(m_GenericCost == manaCost.m_GenericCost);
	}

	CManaCostBase2 operator+(const CManaCostBase2& manaCost) const
	{
		CManaCostBase2 result;
		result.m_BlueCost = m_BlueCost + manaCost.m_BlueCost;
		result.m_BlackCost = m_BlackCost + manaCost.m_BlackCost;
		result.m_RedCost = m_RedCost + manaCost.m_RedCost;
		result.m_GreenCost = m_GreenCost + manaCost.m_GreenCost;
		result.m_WhiteCost = m_WhiteCost + manaCost.m_WhiteCost;
		result.m_GenericCost = m_GenericCost + manaCost.m_GenericCost;
		return result;
	}

	void AddCost(Color color, DWORD dwValue)
	{
		AddImpl(color, dwValue);
	}

	void AddCost(const Colors& manaCost,
				 DWORD dwValue)		// Note: dwValue is for each cost color
	{
		if (manaCost.HasColor(Color::Blue))
			m_BlueCost += dwValue;

		if (manaCost.HasColor(Color::Black))
			m_BlackCost += dwValue;

		if (manaCost.HasColor(Color::Red))
			m_RedCost += dwValue;

		if (manaCost.HasColor(Color::Green))
			m_GreenCost += dwValue;

		if (manaCost.HasColor(Color::White))
			m_WhiteCost += dwValue;

		if (manaCost.HasColor(Color::Generic))
			m_GenericCost += dwValue;
	}

	template <class C>
	void AddCost(const C& manaCost)
	{
		m_BlueCost += manaCost.m_BlueCost;
		m_BlackCost += manaCost.m_BlackCost;
		m_RedCost += manaCost.m_RedCost;
		m_GreenCost += manaCost.m_GreenCost;
		m_WhiteCost += manaCost.m_WhiteCost;
		m_GenericCost += manaCost.m_GenericCost;		
	}

	void AddCost(LPCTSTR strManaText)
	{
		CString strGenericText;

		for (UINT i = 0; i < _tcslen(strManaText); ++i)
			if (!isdigit(strManaText[i]))
			{
				if (!strGenericText.IsEmpty())
				{
					m_GenericCost += _ttoi(strGenericText);
					strGenericText = _T("");
				}
				switch(strManaText[i])
				{
				case BLUE_MANA_CHAR: ++m_BlueCost; break;
				case BLACK_MANA_CHAR: ++m_BlackCost; break;
				case RED_MANA_CHAR: ++m_RedCost; break;
				case GREEN_MANA_CHAR: ++m_GreenCost; break;
				case WHITE_MANA_CHAR: ++m_WhiteCost; break;
				}
			}
			else
				strGenericText += CString(strManaText[i]);

		if (!strGenericText.IsEmpty())
		{
			m_GenericCost += _ttoi(strGenericText);
		}
	}

	BOOL CompareToPool(const CManaPool& manaPool,
					   BOOL bExact) const					// If true, generic cost must be equal to unused color or colorless mana;
	{
		// No cost, any mana pool can satisfy this cost
		if (!GetTotal())
			return TRUE;

		// No mana in mana pool, cannot satisfy this non-empty cost
		if (!manaPool.GetTotal())
			return FALSE;

		CManaPool tempManaPool(manaPool);

		// Check color costs
		if (!tempManaPool.RemoveMana(CManaPool::Color::Blue, m_BlueCost, false) ||
			!tempManaPool.RemoveMana(CManaPool::Color::Black, m_BlackCost, false) ||
			!tempManaPool.RemoveMana(CManaPool::Color::Red, m_RedCost, false) ||
			!tempManaPool.RemoveMana(CManaPool::Color::Green, m_GreenCost, false) ||
			!tempManaPool.RemoveMana(CManaPool::Color::White, m_WhiteCost, false))
		{
			return FALSE;
		}

		// Check generic cost
		if (bExact)
		{
			if (m_GenericCost != tempManaPool.GetTotal())
			{
				return FALSE;
			}
		}
		else
			if (m_GenericCost > tempManaPool.GetTotal())
			{
				return FALSE;
			}

		return TRUE;
	}

	// Remove mana from manaPool and pay this cost. This cost is reduced by the amount paid. 
	// Returns TRUE if all cost has been paid.
	BOOL Pay(CManaPool& manaPool)
	{
		// No cost, any mana pool can satisfy this cost
		if (!GetTotal())
			return TRUE;

		// No mana in mana pool, cannot satisfy this non-empty cost
		if (!manaPool.GetTotal())
			return FALSE;

		DWORD dwBlueMana = manaPool.GetMana(CManaPool::Color::Blue);
		DWORD dwRemoveBlue = MIN(dwBlueMana, m_BlueCost);
		m_BlueCost -= dwRemoveBlue;
		manaPool.RemoveMana(CManaPool::Color::Blue, dwRemoveBlue, true);
		if (m_GenericCost && (dwBlueMana - dwRemoveBlue) > 0)
		{
			dwRemoveBlue = MIN(dwBlueMana - dwRemoveBlue, m_GenericCost);
			m_GenericCost -= dwRemoveBlue;
			manaPool.RemoveMana(CManaPool::Color::Blue, dwRemoveBlue, true);
		}

		DWORD dwBlackMana = manaPool.GetMana(CManaPool::Color::Black);
		DWORD dwRemoveBlack = MIN(dwBlackMana, m_BlackCost);
		m_BlackCost -= dwRemoveBlack;
		manaPool.RemoveMana(CManaPool::Color::Black, dwRemoveBlack, true);
		if (m_GenericCost && (dwBlackMana - dwRemoveBlack) > 0)
		{
			dwRemoveBlack = MIN(dwBlackMana - dwRemoveBlack, m_GenericCost);
			m_GenericCost -= dwRemoveBlack;
			manaPool.RemoveMana(CManaPool::Color::Black, dwRemoveBlack, true);
		}

		DWORD dwRedMana = manaPool.GetMana(CManaPool::Color::Red);
		DWORD dwRemoveRed = MIN(dwRedMana, m_RedCost);
		m_RedCost -= dwRemoveRed;
		manaPool.RemoveMana(CManaPool::Color::Red, dwRemoveRed, true);
		if (m_GenericCost && (dwRedMana - dwRemoveRed) > 0)
		{
			dwRemoveRed = MIN(dwRedMana - dwRemoveRed, m_GenericCost);
			m_GenericCost -= dwRemoveRed;
			manaPool.RemoveMana(CManaPool::Color::Red, dwRemoveRed, true);
		}

		DWORD dwGreenMana = manaPool.GetMana(CManaPool::Color::Green);
		DWORD dwRemoveGreen = MIN(dwGreenMana, m_GreenCost);
		m_GreenCost -= dwRemoveGreen;
		manaPool.RemoveMana(CManaPool::Color::Green, dwRemoveGreen, true);
		if (m_GenericCost && (dwGreenMana - dwRemoveGreen) > 0)
		{
			dwRemoveGreen = MIN(dwGreenMana - dwRemoveGreen, m_GenericCost);
			m_GenericCost -= dwRemoveGreen;
			manaPool.RemoveMana(CManaPool::Color::Green, dwRemoveGreen, true);
		}

		DWORD dwWhiteMana = manaPool.GetMana(CManaPool::Color::White);
		DWORD dwRemoveWhite = MIN(dwWhiteMana, m_WhiteCost);
		m_WhiteCost -= dwRemoveWhite;
		manaPool.RemoveMana(CManaPool::Color::White, dwRemoveWhite, true);
		if (m_GenericCost && (dwWhiteMana - dwRemoveWhite) > 0)
		{
			dwRemoveWhite = MIN(dwWhiteMana - dwRemoveWhite, m_GenericCost);
			m_GenericCost -= dwRemoveWhite;
			manaPool.RemoveMana(CManaPool::Color::White, dwRemoveWhite, true);
		}

		DWORD dwColorlessMana = manaPool.GetMana(CManaPool::Color::Colorless);
		DWORD dwRemoveColorless = MIN(dwColorlessMana, m_GenericCost);
		m_GenericCost -= dwRemoveColorless;
		manaPool.RemoveMana(CManaPool::Color::Colorless, dwRemoveColorless, true);

		return GetTotal() == 0;
	}
															// otherwise it is okay to have more mana than required
	void Subtract(const CManaPool& manaPool)
	{
		CManaPool tempManaPool(manaPool);

		if (m_BlueCost)
		{
			DWORD dwBlueMana = tempManaPool.GetMana(CManaPool::Color::Blue);
			if (dwBlueMana)
			{
				if (m_BlueCost <= dwBlueMana)
					m_BlueCost = 0;
				else
					m_BlueCost -= dwBlueMana;
				tempManaPool.RemoveMana(CManaPool::Color::Blue);
			}
		}

		if (m_BlackCost)
		{
			DWORD dwBlackMana = tempManaPool.GetMana(CManaPool::Color::Black);
			if (dwBlackMana)
			{
				if (m_BlackCost <= dwBlackMana)
					m_BlackCost = 0;
				else
					m_BlackCost -= dwBlackMana;
				tempManaPool.RemoveMana(CManaPool::Color::Black);
			}
		}

		if (m_RedCost)
		{
			DWORD dwRedMana = tempManaPool.GetMana(CManaPool::Color::Red);
			if (dwRedMana)
			{
				if (m_RedCost <= dwRedMana)
					m_RedCost = 0;
				else
					m_RedCost -= dwRedMana;
				tempManaPool.RemoveMana(CManaPool::Color::Red);
			}
		}

		if (m_GreenCost)
		{
			DWORD dwGreenMana = tempManaPool.GetMana(CManaPool::Color::Green);
			if (dwGreenMana)
			{
				if (m_GreenCost <= dwGreenMana)
					m_GreenCost = 0;
				else
					m_GreenCost -= dwGreenMana;
				tempManaPool.RemoveMana(CManaPool::Color::Green);
			}
		}

		if (m_WhiteCost)
		{
			DWORD dwWhiteMana = tempManaPool.GetMana(CManaPool::Color::White);
			if (dwWhiteMana)
			{
				if (m_WhiteCost <= dwWhiteMana)
					m_WhiteCost = 0;
				else
					m_WhiteCost -= dwWhiteMana;
				tempManaPool.RemoveMana(CManaPool::Color::White);
			}
		}

		if (m_GenericCost)
		{
			DWORD dwMana = tempManaPool.GetTotal();
			if (dwMana)
			{
				if (m_GenericCost <= dwMana)
					m_GenericCost = 0;
				else
					m_GenericCost -= dwMana;
			}
		}
	}

	BOOL IsPoolRequiredByCost(const CManaPool& manaPool) const
	{
		if (!manaPool.GetTotal())
			return FALSE;

		if (m_GenericCost)
			return TRUE;

		if (m_BlueCost && manaPool.GetMana(CManaPool::Color::Blue))
			return TRUE;

		if (m_BlackCost && manaPool.GetMana(CManaPool::Color::Black))
			return TRUE;

		if (m_RedCost && manaPool.GetMana(CManaPool::Color::Red))
			return TRUE;

		if (m_GreenCost && manaPool.GetMana(CManaPool::Color::Green))
			return TRUE;

		if (m_WhiteCost && manaPool.GetMana(CManaPool::Color::White))
			return TRUE;

		return FALSE;
	}

	CManaPool GetColorCostFromPool(const CManaPool& manaPool) const
	{
		if (!CompareToPool(manaPool, FALSE))
			return CManaPool();
		
		return CManaPool(
			CManaPool::Color::Blue, m_BlueCost,
			CManaPool::Color::Black, m_BlackCost,
			CManaPool::Color::Red, m_RedCost,
			CManaPool::Color::Green, m_GreenCost,
			CManaPool::Color::White, m_WhiteCost);
	}

	CManaPool RemoveColorCostFromPool(const CManaPool& manaPool) const
	{
		if (!CompareToPool(manaPool, FALSE))
			return CManaPool();

		CManaPool manaPool2(manaPool);

		manaPool2.RemoveMana(CManaPool::Color::Blue, m_BlueCost, false);
		manaPool2.RemoveMana(CManaPool::Color::Black, m_BlackCost, false);
		manaPool2.RemoveMana(CManaPool::Color::Red, m_RedCost, false);
		manaPool2.RemoveMana(CManaPool::Color::Green, m_GreenCost, false);
		manaPool2.RemoveMana(CManaPool::Color::White, m_WhiteCost, false);

		return manaPool2;
	}

	CManaPool GetAsPool() const
	{
		return CManaPool(
			CManaPool::Color::Blue, m_BlueCost,
			CManaPool::Color::Black, m_BlackCost,
			CManaPool::Color::Red, m_RedCost,
			CManaPool::Color::Green, m_GreenCost,
			CManaPool::Color::White, m_WhiteCost,
			CManaPool::Color::Colorless, m_GenericCost); // careful when using this conversion
	}

	void RemoveCost(Color color, DWORD dwValue)
	{
		AddImpl(color, -(int)dwValue);
	}

	void RemoveColorCost(const CManaPool& manaPool)
	{
		if (m_BlueCost)
		{
			DWORD dwBlueMana = manaPool.GetMana(CManaPool::Color::Blue);
			if (dwBlueMana)
			{
				if (m_BlueCost <= dwBlueMana)
					m_BlueCost = 0;
				else
					m_BlueCost -= dwBlueMana;
			}
		}

		if (m_BlackCost)
		{
			DWORD dwBlackMana = manaPool.GetMana(CManaPool::Color::Black);
			if (dwBlackMana)
			{
				if (m_BlackCost <= dwBlackMana)
					m_BlackCost = 0;
				else
					m_BlackCost -= dwBlackMana;
			}
		}

		if (m_RedCost)
		{
			DWORD dwRedMana = manaPool.GetMana(CManaPool::Color::Red);
			if (dwRedMana)
			{
				if (m_RedCost <= dwRedMana)
					m_RedCost = 0;
				else
					m_RedCost -= dwRedMana;
			}
		}

		if (m_GreenCost)
		{
			DWORD dwGreenMana = manaPool.GetMana(CManaPool::Color::Green);
			if (dwGreenMana)
			{
				if (m_GreenCost <= dwGreenMana)
					m_GreenCost = 0;
				else
					m_GreenCost -= dwGreenMana;
			}
		}

		if (m_WhiteCost)
		{
			DWORD dwWhiteMana = manaPool.GetMana(CManaPool::Color::White);
			if (dwWhiteMana)
			{
				if (m_WhiteCost <= dwWhiteMana)
					m_WhiteCost = 0;
				else
					m_WhiteCost -= dwWhiteMana;
			}
		}
	}

	void RemoveAllCost()
	{	
		m_BlueCost = 0;
		m_BlackCost = 0;
		m_RedCost = 0;
		m_GreenCost = 0;
		m_WhiteCost = 0;
		m_GenericCost = 0;
	}

	void RemoveAllCostExcept(Colors colors)
	{	
		if (!(colors & Color::Blue).Any())
			m_BlueCost = 0;
		
		if (!(colors & Color::Black).Any())
			m_BlackCost = 0;

		if (!(colors & Color::Red).Any())
			m_RedCost = 0;

		if (!(colors & Color::Green).Any())
			m_GreenCost = 0;
			
		if (!(colors & Color::White).Any())
			m_WhiteCost = 0;
			
		if (!(colors & Color::Generic).Any())
			m_GenericCost = 0;
	}

	template <class C>
	void RemoveCost(const C& manaCost)
	{
		if (manaCost.m_BlueCost)
		{
			if (m_BlueCost <= manaCost.m_BlueCost)
				m_BlueCost = 0;
			else
				m_BlueCost -= manaCost.m_BlueCost;
		}

		if (manaCost.m_BlackCost)
		{
			if (m_BlackCost <= manaCost.m_BlackCost)
				m_BlackCost = 0;
			else
				m_BlackCost -= manaCost.m_BlackCost;
		}

		if (manaCost.m_RedCost)
		{
			if (m_RedCost <= manaCost.m_RedCost)
				m_RedCost = 0;
			else
				m_RedCost -= manaCost.m_RedCost;
		}

		if (manaCost.m_GreenCost)
		{
			if (m_GreenCost <= manaCost.m_GreenCost)
				m_GreenCost = 0;
			else
				m_GreenCost -= manaCost.m_GreenCost;
		}

		if (manaCost.m_WhiteCost)
		{
			if (m_WhiteCost <= manaCost.m_WhiteCost)
				m_WhiteCost = 0;
			else
				m_WhiteCost -= manaCost.m_WhiteCost;
		}

		if (manaCost.m_GenericCost)
		{
			if (m_GenericCost <= manaCost.m_GenericCost)
				m_GenericCost = 0;
			else
				m_GenericCost -= manaCost.m_GenericCost;
		}
	}

	template <class C>
	void RemoveCost(C& manaCost, CManaCost& removedCost)
	{
		removedCost.RemoveAllCost();

		if (manaCost.m_BlueCost)
		{
			if (m_BlueCost <= manaCost.m_BlueCost)
			{
				removedCost.m_BlueCost = m_BlueCost;
				m_BlueCost = 0;
				manaCost.m_BlueCost -= m_BlueCost;
			}
			else
			{
				removedCost.m_BlueCost = manaCost.m_BlueCost;
				m_BlueCost -= manaCost.m_BlueCost;
				manaCost.m_BlueCost = 0;
			}
		}

		if (manaCost.m_BlackCost)
		{
			if (m_BlackCost <= manaCost.m_BlackCost)
			{
				removedCost.m_BlackCost = m_BlackCost;
				m_BlackCost = 0;
				manaCost.m_BlackCost -= m_BlackCost;
			}
			else
			{
				removedCost.m_BlackCost = manaCost.m_BlackCost;
				m_BlackCost -= manaCost.m_BlackCost;
				manaCost.m_BlackCost = 0;
			}
		}

		if (manaCost.m_RedCost)
		{
			if (m_RedCost <= manaCost.m_RedCost)
			{
				removedCost.m_RedCost = m_RedCost;
				m_RedCost = 0;
				manaCost.m_RedCost -= m_RedCost;
			}
			else
			{
				removedCost.m_RedCost = manaCost.m_RedCost;
				m_RedCost -= manaCost.m_RedCost;
				manaCost.m_RedCost = 0;
			}
		}

		if (manaCost.m_GreenCost)
		{
			if (m_GreenCost <= manaCost.m_GreenCost)
			{
				removedCost.m_GreenCost = m_GreenCost;
				m_GreenCost = 0;
				manaCost.m_GreenCost -= m_GreenCost;
			}
			else
			{
				removedCost.m_GreenCost = manaCost.m_GreenCost;
				m_GreenCost -= manaCost.m_GreenCost;
				manaCost.m_GreenCost = 0;
			}
		}

		if (manaCost.m_WhiteCost)
		{
			if (m_WhiteCost <= manaCost.m_WhiteCost)
			{
				removedCost.m_WhiteCost = m_WhiteCost;
				m_WhiteCost = 0;
				manaCost.m_WhiteCost -= m_WhiteCost;
			}
			else
			{
				removedCost.m_WhiteCost = manaCost.m_WhiteCost;
				m_WhiteCost -= manaCost.m_WhiteCost;
				manaCost.m_WhiteCost = 0;
			}
		}

		if (manaCost.m_GenericCost)
		{
			if (m_GenericCost <= manaCost.m_GenericCost)
			{
				removedCost.m_GenericCost = m_GenericCost;
				m_GenericCost = 0;
				manaCost.m_GenericCost -= m_GenericCost;
			}
			else
			{
				removedCost.m_GenericCost = manaCost.m_GenericCost;
				m_GenericCost -= manaCost.m_GenericCost;
				manaCost.m_GenericCost = 0;
			}
		}
	}

	DWORD RemoveGenericCost(DWORD dwValue)
	{
		DWORD dwRemovedValue = 0;

		if (dwValue)
		{
			if (m_GenericCost <= dwValue)
			{
				dwRemovedValue = m_GenericCost;
				m_GenericCost = 0;
			}
			else
			{
				m_GenericCost -= dwValue;
				dwRemovedValue = dwValue;
			}
		}

		return dwRemovedValue;
	}

	DWORD GetCost(Color manaCost) const
	{
		return GetImpl(manaCost);
	}

	void SetCost(Color manaCost, DWORD dwValue)
	{
		SetImpl(manaCost, dwValue);
	}

	void SetCost(LPCTSTR strManaText)
	{
		RemoveAllCost();
		AddCost(strManaText);
	}

	void SetCost(const CManaCostBase2& manaCost)
	{
		m_BlueCost = manaCost.m_BlueCost;
		m_BlackCost = manaCost.m_BlackCost;
		m_RedCost = manaCost.m_RedCost;
		m_GreenCost = manaCost.m_GreenCost;
		m_WhiteCost = manaCost.m_WhiteCost;
		m_GenericCost = manaCost.m_GenericCost;
	}

	bool Any() const	// has slightly better performance than GetTotal() if all you need is a simple check and not the total
	{
		return m_BlueCost > 0 ||
				m_BlackCost > 0 ||
				m_RedCost > 0 ||
				m_GreenCost > 0 ||
				m_WhiteCost > 0 ||
				m_GenericCost > 0;
	}

	DWORD GetTotal() const
	{	
		return 	m_BlueCost + 
				m_BlackCost +
				m_RedCost +
				m_GreenCost +
				m_WhiteCost +
				m_GenericCost;
	}

	DWORD GetTotalColorCost() const
	{	
		return 	m_BlueCost + 
				m_BlackCost +
				m_RedCost +
				m_GreenCost +
				m_WhiteCost;
	}

	CString ToString() const
	{
		CString strText;

		if (m_GenericCost)
		{
			CString strText1;
			strText1.Format(_T("%d"), (DWORD)m_GenericCost);
			strText += strText1;
		}

		for (DWORD i = 0; i < m_BlueCost; ++i)
			strText += BLUE_MANA_TEXT;

		for (DWORD i = 0; i < m_BlackCost; ++i)
			strText += BLACK_MANA_TEXT;

		for (DWORD i = 0; i < m_GreenCost; ++i)
			strText += GREEN_MANA_TEXT;

		for (DWORD i = 0; i < m_RedCost; ++i)
			strText += RED_MANA_TEXT;

		for (DWORD i = 0; i < m_WhiteCost; ++i)
			strText += WHITE_MANA_TEXT;

		return strText;
	}

	void Normalize()
	{
		if (m_BlueCost)
			m_BlueCost = 1;

		if (m_BlackCost)
			m_BlackCost = 1;

		if (m_RedCost)
			m_RedCost = 1;

		if (m_GreenCost)
			m_GreenCost = 1;

		if (m_WhiteCost)
			m_WhiteCost = 1;

		if (m_GenericCost)
			m_GenericCost = 1;
	}

	Colors GetNormalizedColors() const
	{
		Colors costs;

		if (m_BlueCost)
			costs.AddColor(Color::Blue);

		if (m_BlackCost)
			costs.AddColor(Color::Black);

		if (m_RedCost)
			costs.AddColor(Color::Red);

		if (m_GreenCost)
			costs.AddColor(Color::Green);

		if (m_WhiteCost)
			costs.AddColor(Color::White);

		if (m_GenericCost)
			costs.AddColor(Color::Generic);

		return costs;
	}

	void UpdateMaxCost(const CManaCostBase2& manaCost)
	{
		if (manaCost.m_BlueCost > m_BlueCost)
			m_BlueCost = manaCost.m_BlueCost;

		if (manaCost.m_BlackCost > m_BlackCost)
			m_BlackCost = manaCost.m_BlackCost;

		if (manaCost.m_RedCost > m_RedCost)
			m_RedCost = manaCost.m_RedCost;

		if (manaCost.m_GreenCost > m_GreenCost)
			m_GreenCost = manaCost.m_GreenCost;

		if (manaCost.m_WhiteCost > m_WhiteCost)
			m_WhiteCost = manaCost.m_WhiteCost;

		if (manaCost.m_GenericCost > m_GenericCost)
			m_GenericCost = manaCost.m_GenericCost;
	}

protected:
	void SetAllCost(
		Color manaCost1, DWORD dwValue1,
		Color manaCost2 = Color::Null, DWORD dwValue2 = 0,
		Color manaCost3 = Color::Null, DWORD dwValue3 = 0,
		Color manaCost4 = Color::Null, DWORD dwValue4 = 0,
		Color manaCost5 = Color::Null, DWORD dwValue5 = 0,
		Color manaCost6 = Color::Null, DWORD dwValue6 = 0)
	{
		RemoveAllCost();

		SetImpl(manaCost1, dwValue1);
		SetImpl(manaCost2, dwValue2);
		SetImpl(manaCost3, dwValue3);
		SetImpl(manaCost4, dwValue4);
		SetImpl(manaCost5, dwValue5);
		SetImpl(manaCost6, dwValue6);
	}

	void SetImpl(Color manaCost, DWORD dwValue)
	{
		switch(manaCost.Get())
		{
		case Color::Blue:		m_BlueCost = dwValue; break;
		case Color::Black:		m_BlackCost = dwValue; break;
		case Color::Red:		m_RedCost = dwValue; break;
		case Color::Green:		m_GreenCost = dwValue; break;
		case Color::White:		m_WhiteCost = dwValue; break;
		case Color::Generic:	m_GenericCost = dwValue; break;
		}
	}

	void AddImpl(Color manaCost, int nDelta)
	{
		if (!nDelta)
			return;

		switch(manaCost.Get())
		{
		case Color::Blue:		if (nDelta < 0 && (DWORD)-nDelta >= m_BlueCost) m_BlueCost = 0; else m_BlueCost += nDelta; break;
		case Color::Black:		if (nDelta < 0 && (DWORD)-nDelta >= m_BlackCost) m_BlackCost = 0; else m_BlackCost += nDelta; break;
		case Color::Red:		if (nDelta < 0 && (DWORD)-nDelta >= m_RedCost) m_RedCost = 0; else m_RedCost += nDelta; break;
		case Color::Green:		if (nDelta < 0 && (DWORD)-nDelta >= m_GreenCost) m_GreenCost = 0; else m_GreenCost += nDelta; break;
		case Color::White:		if (nDelta < 0 && (DWORD)-nDelta >= m_WhiteCost) m_WhiteCost = 0; else m_WhiteCost += nDelta; break;
		case Color::Generic:	if (nDelta < 0 && (DWORD)-nDelta >= m_GenericCost) m_GenericCost = 0; else m_GenericCost += nDelta; break;
		}
	}

	DWORD GetImpl(Color manaCost) const
	{
		switch(manaCost.Get())
		{
		case Color::Blue:		return m_BlueCost; 
		case Color::Black:		return m_BlackCost;
		case Color::Red:		return m_RedCost;
		case Color::Green:		return m_GreenCost;
		case Color::White:		return m_WhiteCost;
		case Color::Generic:	return m_GenericCost;
		}		

		return 0;
	}

	ValueType m_BlueCost;
	ValueType m_BlackCost;
	ValueType m_RedCost;
	ValueType m_GreenCost;
	ValueType m_WhiteCost;
	ValueType m_GenericCost;
};

//____________________________________________________________________________
//
class CManaCost : public CManaCostBase2<DWORD>
{
	friend class CManaCost_;
public:
	explicit CManaCost(
		Color manaCost1 = Color::Null, DWORD dwValue1 = 0,
		Color manaCost2 = Color::Null, DWORD dwValue2 = 0,
		Color manaCost3 = Color::Null, DWORD dwValue3 = 0,
		Color manaCost4 = Color::Null, DWORD dwValue4 = 0,
		Color manaCost5 = Color::Null, DWORD dwValue5 = 0,
		Color manaCost6 = Color::Null, DWORD dwValue6 = 0)
		: CManaCostBase2(
			manaCost1, dwValue1,
			manaCost2, dwValue2,
			manaCost3, dwValue3,
			manaCost4, dwValue4,
			manaCost5, dwValue5,
			manaCost6, dwValue6)
	{}

	CManaCost(const CManaCost& manaCost)
		: CManaCostBase2(manaCost)
	{}

	CManaCost(LPCTSTR strManaText)
		: CManaCostBase2(strManaText)
	{}
};

//____________________________________________________________________________
//
class CManaCost_ : public CManaCostBase2<DWORD_>
{
	friend class CManaCost;
public:
	explicit CManaCost_(
		Color manaCost1 = Color::Null, DWORD dwValue1 = 0,
		Color manaCost2 = Color::Null, DWORD dwValue2 = 0,
		Color manaCost3 = Color::Null, DWORD dwValue3 = 0,
		Color manaCost4 = Color::Null, DWORD dwValue4 = 0,
		Color manaCost5 = Color::Null, DWORD dwValue5 = 0,
		Color manaCost6 = Color::Null, DWORD dwValue6 = 0)
		: CManaCostBase2(
			manaCost1, dwValue1,
			manaCost2, dwValue2,
			manaCost3, dwValue3,
			manaCost4, dwValue4,
			manaCost5, dwValue5,
			manaCost6, dwValue6)
	{}

	CManaCost_(const CManaCost_& manaCost)
		: CManaCostBase2(manaCost)
	{}

	CManaCost_(LPCTSTR strManaText)
		: CManaCostBase2(strManaText)
	{}

	operator CManaCost() const
	{
		CManaCost manaCost;
		manaCost.m_BlackCost = m_BlackCost;
		manaCost.m_BlueCost = m_BlueCost;
		manaCost.m_RedCost = m_RedCost;
		manaCost.m_GreenCost = m_GreenCost;
		manaCost.m_WhiteCost = m_WhiteCost;
		manaCost.m_GenericCost = m_GenericCost;

		return manaCost;
	}
};

//____________________________________________________________________________
//
typedef CValueContainer<CManaCost> CManaCostContainer;

class CManaCostContainer_
	: public CValueContainerBase_<CManaCost>
{
public:
	CManaCostContainer_()
	{}

	virtual ~CManaCostContainer_()
	{
		RemoveSavedState();
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CManaCost& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.GetCost(CManaCost::Color::Black));
			stateStack.AddTail((PVOID)entry.GetCost(CManaCost::Color::Blue));
			stateStack.AddTail((PVOID)entry.GetCost(CManaCost::Color::Generic));
			stateStack.AddTail((PVOID)entry.GetCost(CManaCost::Color::Green));
			stateStack.AddTail((PVOID)entry.GetCost(CManaCost::Color::Red));
			stateStack.AddTail((PVOID)entry.GetCost(CManaCost::Color::White));
		}

		stateStack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<CManaCost>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CManaCost entry;
			entry.AddCost(CManaCost::Color::White, (DWORD)m_Stack.RemoveTail());
			entry.AddCost(CManaCost::Color::Red, (DWORD)m_Stack.RemoveTail());
			entry.AddCost(CManaCost::Color::Green, (DWORD)m_Stack.RemoveTail());
			entry.AddCost(CManaCost::Color::Generic, (DWORD)m_Stack.RemoveTail());
			entry.AddCost(CManaCost::Color::Blue, (DWORD)m_Stack.RemoveTail());
			entry.AddCost(CManaCost::Color::Black, (DWORD)m_Stack.RemoveTail());

			CValueContainer<CManaCost>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<CManaCost>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CManaCost entry;
			entry.AddCost(CManaCost::Color::White, (DWORD)m_Stack.GetPrev(pos));
			entry.AddCost(CManaCost::Color::Red, (DWORD)m_Stack.GetPrev(pos));
			entry.AddCost(CManaCost::Color::Green, (DWORD)m_Stack.GetPrev(pos));
			entry.AddCost(CManaCost::Color::Generic, (DWORD)m_Stack.GetPrev(pos));
			entry.AddCost(CManaCost::Color::Blue, (DWORD)m_Stack.GetPrev(pos));
			entry.AddCost(CManaCost::Color::Black, (DWORD)m_Stack.GetPrev(pos));

			CValueContainer<CManaCost>::AddImpl(entry);
		}
	}
};
