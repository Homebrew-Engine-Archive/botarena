#pragma once

//____________________________________________________________________________
//
#define WHITE_MANA_TEXT	_T("W")
#define BLUE_MANA_TEXT	_T("U")
#define BLACK_MANA_TEXT	_T("B")
#define RED_MANA_TEXT	_T("R")
#define GREEN_MANA_TEXT	_T("G")
#define ALL_MANA_TEXT	_T("WUBRG")

#define WHITE_MANA_CHAR	_T('W')
#define BLUE_MANA_CHAR	_T('U')
#define BLACK_MANA_CHAR	_T('B')
#define RED_MANA_CHAR	_T('R')
#define GREEN_MANA_CHAR	_T('G')

class CManaCost;

//____________________________________________________________________________
//
typedef std::vector<CManaPool> ManaPoolArray;

//____________________________________________________________________________
//
class CORE_EXPORT CManaPoolBase
{
public:
	struct CORE_EXPORT Color
	{
		enum Enum : DWORD
		{
			Null		= 0,

			White		= 0x00000001,
			Blue		= 0x00000002,
			Black		= 0x00000004,
			Red			= 0x00000008,
			Green		= 0x00000010,
			Colorless	= 0x00000020
		};

		DEFINE_BITFLAG_ENUM_OPS(Color, DWORD);
	
	public:
		static CString ToString(Color manaColor);
		static CString ToDrawString(Color manaColor);

		CString ToString() const
		{
			return ToString(m_Value);
		}
	};

	class CORE_EXPORT Colors
	{
	public:
		Colors()
			: m_Colors( Color::Null )
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
			m_Colors = c1 | c2 | c3 | c4 | c5 | c6;
		}

		void AddColor(Color manaColor)
		{
			m_Colors |= manaColor;
		}

		BOOL HasColor(Color manaColor) const
		{
			return (m_Colors & manaColor).Any();
		}

		bool operator==(const Colors& colors) const
		{
			return m_Colors == colors.m_Colors;
		}

		bool operator!=(const Colors& colors) const
		{
			return m_Colors != colors.m_Colors;
		}

		Colors operator|=(const Colors& colors)
		{
			m_Colors |= colors.m_Colors;
			return m_Colors;
		}

		Colors operator&(const Colors& colors) const
		{
			return m_Colors & colors.m_Colors;
		}

		Colors operator&(const Color& color) const
		{
			return m_Colors & color;
		}

		Colors operator~() const
		{
			return ~m_Colors;
		}

		int GetCount() const
		{
			int nCount = 0;
			if ((m_Colors & Color::White).Any())
				++nCount;

			if ((m_Colors & Color::Blue).Any())
				++nCount;

			if ((m_Colors & Color::Black).Any())
				++nCount;

			if ((m_Colors & Color::Red).Any())
				++nCount;

			if ((m_Colors & Color::Green).Any())
				++nCount;

			if ((m_Colors & Color::Colorless).Any())
				++nCount;

			return nCount;
		}

		bool Any() const
		{
			return m_Colors != Color::Null;
		}

	protected:
		Color m_Colors;
	};

	static Colors AllPoolColors;
};

class CManaPool;

template <class ValueType>
class CManaPoolBase2 : public CManaPoolBase
{
public:
	typedef std::vector<std::pair<Color, DWORD>> ManaArray;

	CManaPoolBase2()
		: m_WhiteMana(0)
		, m_BlueMana(0)
		, m_BlackMana(0)
		, m_RedMana(0)
		, m_GreenMana(0)
		, m_ColorlessMana(0)
	{
	}

	CManaPoolBase2(
		Color manaColor1, DWORD dwValue1,
		Color manaColor2 = Color::Null, DWORD dwValue2 = 0,
		Color manaColor3 = Color::Null, DWORD dwValue3 = 0,
		Color manaColor4 = Color::Null, DWORD dwValue4 = 0,
		Color manaColor5 = Color::Null, DWORD dwValue5 = 0,
		Color manaColor6 = Color::Null, DWORD dwValue6 = 0)
		: m_WhiteMana(0)
		, m_BlueMana(0)
		, m_BlackMana(0)
		, m_RedMana(0)
		, m_GreenMana(0)
		, m_ColorlessMana(0)
	{
		SetAllMana(
			manaColor1, dwValue1,
			manaColor2, dwValue2,
			manaColor3, dwValue3,
			manaColor4, dwValue4,
			manaColor5, dwValue5,
			manaColor6, dwValue6);
	}

	CManaPoolBase2(LPCTSTR strManaText)
		: m_WhiteMana(0)
		, m_BlueMana(0)
		, m_BlackMana(0)
		, m_RedMana(0)
		, m_GreenMana(0)
		, m_ColorlessMana(0)
	{
		SetMana(strManaText);
	}

	CManaPoolBase2(const CManaPoolBase2& manaPool)
		: m_WhiteMana(0)
		, m_BlueMana(0)
		, m_BlackMana(0)
		, m_RedMana(0)
		, m_GreenMana(0)
		, m_ColorlessMana(0)
	{
		SetMana(manaPool);
	}

	CManaPoolBase2(const ManaArray& manaArray)
		: m_WhiteMana(0)
		, m_BlueMana(0)
		, m_BlackMana(0)
		, m_RedMana(0)
		, m_GreenMana(0)
		, m_ColorlessMana(0)
	{
		SetMana(manaArray);
	}

	CManaPoolBase2& operator=(const CManaPoolBase2& manaPool)
	{
		if (&manaPool == this)
			return *this;

		SetMana(manaPool);

		return *this;
	}
	
	bool operator==(const CManaPoolBase2& manaPool) const
	{
		return (m_WhiteMana == manaPool.m_WhiteMana) &&
			(m_BlueMana == manaPool.m_BlueMana) &&
			(m_BlackMana == manaPool.m_BlackMana) &&
			(m_RedMana == manaPool.m_RedMana) &&
			(m_GreenMana == manaPool.m_GreenMana) &&
			(m_ColorlessMana == manaPool.m_ColorlessMana);
	}

	CManaPoolBase2 operator+(const CManaPoolBase2& manaPool) const
	{
		CManaPoolBase2 result;
		result.m_WhiteMana = m_WhiteMana + manaPool.m_WhiteMana;
		result.m_BlueMana = m_BlueMana + manaPool.m_BlueMana;
		result.m_BlackMana = m_BlackMana + manaPool.m_BlackMana;
		result.m_RedMana = m_RedMana + manaPool.m_RedMana;
		result.m_GreenMana = m_GreenMana + manaPool.m_GreenMana;
		result.m_ColorlessMana = m_ColorlessMana + manaPool.m_ColorlessMana;
		return result;
	}

	void CopyToArray(ManaArray& manaArray) const
	{
		manaArray.clear();

		if (m_WhiteMana)
			manaArray.push_back(std::make_pair(CManaPool::Color::White, (DWORD)m_WhiteMana));

		if (m_BlueMana)
			manaArray.push_back(std::make_pair(CManaPool::Color::Blue, (DWORD)m_BlueMana));

		if (m_BlackMana)
			manaArray.push_back(std::make_pair(CManaPool::Color::Black, (DWORD)m_BlackMana));

		if (m_RedMana)
			manaArray.push_back(std::make_pair(CManaPool::Color::Red, (DWORD)m_RedMana));

		if (m_GreenMana)
			manaArray.push_back(std::make_pair(CManaPool::Color::Green, (DWORD)m_GreenMana));

		if (m_ColorlessMana)
			manaArray.push_back(std::make_pair(CManaPool::Color::Colorless, (DWORD)m_ColorlessMana));
	}

	void AddMana(LPCTSTR strManaText)
	{
		ManaArray manaCounts;
		DecodeText(strManaText, manaCounts);

		for (ManaArray::const_iterator i = manaCounts.begin(); i != manaCounts.end(); ++i)
			AddImpl(i->first, i->second);
	}

	void AddMana(const Colors& manaColors,
				 DWORD dwValue)		// Note: dwValue is for each cost color
	{
		if (manaColors.HasColor(CManaPool::Color::White))
			m_WhiteMana += dwValue;

		if (manaColors.HasColor(CManaPool::Color::Blue))
			m_BlueMana += dwValue;

		if (manaColors.HasColor(CManaPool::Color::Black))
			m_BlackMana += dwValue;

		if (manaColors.HasColor(CManaPool::Color::Red))
			m_RedMana += dwValue;

		if (manaColors.HasColor(CManaPool::Color::Green))
			m_GreenMana += dwValue;

		if (manaColors.HasColor(CManaPool::Color::Colorless))
			m_ColorlessMana += dwValue;
	}

	void AddMana(const CManaPoolBase2& manaPool)
	{
		m_WhiteMana += manaPool.m_WhiteMana;
		m_BlueMana += manaPool.m_BlueMana;
		m_BlackMana += manaPool.m_BlackMana;
		m_RedMana += manaPool.m_RedMana;
		m_GreenMana += manaPool.m_GreenMana;
		m_ColorlessMana += manaPool.m_ColorlessMana;		
	}

	void AddMana(Color color, DWORD dwValue)
	{
		AddImpl(color, dwValue);
	}

	void SetMana(const CManaPoolBase2& manaPool)
	{
		m_WhiteMana = manaPool.m_WhiteMana;
		m_BlueMana = manaPool.m_BlueMana;
		m_BlackMana = manaPool.m_BlackMana;
		m_RedMana = manaPool.m_RedMana;
		m_GreenMana = manaPool.m_GreenMana;
		m_ColorlessMana = manaPool.m_ColorlessMana;		
	}

	void SetMana(LPCTSTR strManaText)
	{
		Clear();
		AddMana(strManaText);
	}

	void SetMana(const ManaArray& manaArray)
	{
		Clear();

		for (ManaArray::const_iterator i = manaArray.begin(); i != manaArray.end(); ++i)
			SetImpl(i->first, i->second);
	}

	DWORD GetColorCount(BOOL bIncludeColorless) const
	{
		DWORD dwCount = 0;
		
		if (m_WhiteMana)
			++dwCount;
		if (m_BlueMana)
			++dwCount;
		if (m_BlackMana)
			++dwCount;
		if (m_RedMana)
			++dwCount;
		if (m_GreenMana)
			++dwCount;
		if (bIncludeColorless && m_ColorlessMana)
			++dwCount;
		
		return dwCount;
	}

	Colors GetNormalizedColors() const
	{
		Colors colors;

		if (m_WhiteMana)
			colors.AddColor(Color::White);

		if (m_BlueMana)
			colors.AddColor(Color::Blue);

		if (m_BlackMana)
			colors.AddColor(Color::Black);

		if (m_RedMana)
			colors.AddColor(Color::Red);

		if (m_GreenMana)
			colors.AddColor(Color::Green);

		if (m_ColorlessMana)
			colors.AddColor(Color::Colorless);

		return colors;
	}

	Color GetFirstManaColor() const
	{
		if (m_WhiteMana)
			return CManaPool::Color::White;
		if (m_BlueMana)
			return CManaPool::Color::Blue;
		if (m_BlackMana)
			return CManaPool::Color::Black;
		if (m_RedMana)
			return CManaPool::Color::Red;
		if (m_GreenMana)
			return CManaPool::Color::Green;
		if (m_ColorlessMana)
			return CManaPool::Color::Colorless;
		
		return Color::Null;
	}

	Color GetManaColor(int nIndex) const			// Get the nth mana type's color
	{
		int nCurrentIndex = 0;

		if (m_WhiteMana)
		{
			if (nCurrentIndex == nIndex)
				return Color::White;
			++nCurrentIndex;
		}

		if (m_BlueMana)
		{
			if (nCurrentIndex == nIndex)
				return Color::Blue;
			++nCurrentIndex;
		}

		if (m_BlackMana)
		{
			if (nCurrentIndex == nIndex)
				return Color::Black;
			++nCurrentIndex;
		}

		if (m_RedMana)
		{
			if (nCurrentIndex == nIndex)
				return Color::Red;
			++nCurrentIndex;
		}

		if (m_GreenMana)
		{
			if (nCurrentIndex == nIndex)
				return Color::Green;
			++nCurrentIndex;
		}

		if (m_ColorlessMana)
		{
			if (nCurrentIndex == nIndex)
				return Color::Colorless;
			++nCurrentIndex;
		}

		return Color::Null;
	}

	DWORD GetManaByIndex(int nIndex) const				// Get the nth mana type's count
	{
		int nCurrentIndex = 0;

		if (m_WhiteMana)
		{
			if (nCurrentIndex == nIndex)
				return m_WhiteMana;
			++nCurrentIndex;
		}

		if (m_BlueMana)
		{
			if (nCurrentIndex == nIndex)
				return m_BlueMana;
			++nCurrentIndex;
		}

		if (m_BlackMana)
		{
			if (nCurrentIndex == nIndex)
				return m_BlackMana;
			++nCurrentIndex;
		}

		if (m_RedMana)
		{
			if (nCurrentIndex == nIndex)
				return m_RedMana;
			++nCurrentIndex;
		}

		if (m_GreenMana)
		{
			if (nCurrentIndex == nIndex)
				return m_GreenMana;
			++nCurrentIndex;
		}

		if (m_ColorlessMana)
		{
			if (nCurrentIndex == nIndex)
				return m_ColorlessMana;
			++nCurrentIndex;
		}

		return 0;
	}

	bool Any() const // has slightly better performance than GetTotal() if all you need is a simple check and not the total
	{
		return m_BlueMana > 0 ||
				m_BlackMana > 0 ||
				m_RedMana > 0 ||
				m_GreenMana > 0 ||
				m_WhiteMana > 0 ||
				m_ColorlessMana > 0;
	}

	DWORD GetTotal() const
	{
		return m_WhiteMana + m_BlueMana + m_BlackMana + m_RedMana + m_GreenMana + m_ColorlessMana;
	}

	DWORD GetTotalColorMana() const
	{	
		return 	m_WhiteMana + m_BlueMana + m_BlackMana + m_RedMana + m_GreenMana;
	}

	DWORD GetMana(Color color) const
	{
		return GetImpl(color);
	}

	void Clear()
	{
		m_WhiteMana = 0;
		m_BlueMana = 0;
		m_BlackMana = 0;
		m_RedMana = 0;
		m_GreenMana = 0;
		m_ColorlessMana = 0;		
	}

	void RemoveAllManaOf(const Colors& manaColors)
	{
		if (manaColors.HasColor(CManaPool::Color::White))
			m_WhiteMana = 0;

		if (manaColors.HasColor(CManaPool::Color::Blue))
			m_BlueMana = 0;

		if (manaColors.HasColor(CManaPool::Color::Black))
			m_BlackMana = 0;

		if (manaColors.HasColor(CManaPool::Color::Red))
			m_RedMana = 0;

		if (manaColors.HasColor(CManaPool::Color::Green))
			m_GreenMana = 0;

		if (manaColors.HasColor(CManaPool::Color::Colorless))
			m_ColorlessMana = 0;
	}

	void KeepOnlyManaOf(const Colors& manaColors)
	{
		if (!(manaColors.HasColor(CManaPool::Color::White)))
			m_WhiteMana = 0;

		if (!(manaColors.HasColor(CManaPool::Color::Blue)))
			m_BlueMana = 0;

		if (!(manaColors.HasColor(CManaPool::Color::Black)))
			m_BlackMana = 0;

		if (!(manaColors.HasColor(CManaPool::Color::Red)))
			m_RedMana = 0;

		if (!(manaColors.HasColor(CManaPool::Color::Green)))
			m_GreenMana = 0;

		if (!(manaColors.HasColor(CManaPool::Color::Colorless)))
			m_ColorlessMana = 0;
	}

	BOOL RemoveMana(Color manaColor, DWORD dwValue, bool bForced)
	{
		if (!dwValue)
			return TRUE;

		switch(manaColor.Get())
		{
		case Color::White:		if (m_WhiteMana >= dwValue) { m_WhiteMana -= dwValue; return TRUE; } else { if (bForced) m_WhiteMana = 0; return FALSE; }
		case Color::Blue:		if (m_BlueMana >= dwValue) { m_BlueMana -= dwValue; return TRUE; } else { if (bForced) m_BlueMana = 0; return FALSE; }
		case Color::Black:		if (m_BlackMana >= dwValue) { m_BlackMana -= dwValue; return TRUE; } else { if (bForced) m_BlackMana = 0; return FALSE; }
		case Color::Red:		if (m_RedMana >= dwValue) { m_RedMana -= dwValue; return TRUE; } else { if (bForced) m_RedMana = 0; return FALSE; }
		case Color::Green:		if (m_GreenMana >= dwValue) { m_GreenMana -= dwValue; return TRUE; } else { if (bForced) m_GreenMana = 0; return FALSE; }
		case Color::Colorless:	if (m_ColorlessMana >= dwValue) { m_ColorlessMana -= dwValue; return TRUE; } else { if (bForced) m_ColorlessMana = 0; return FALSE; }
		}

		return TRUE;
	}

	void RemoveMana(Color manaColor)
	{
		SetImpl(manaColor, 0);
	}

	BOOL RemoveMana(LPCTSTR strManaText, bool bForced)
	{
		ManaArray manaArray;
		DecodeText(strManaText, manaArray);

		return RemoveMana(manaArray, bForced);
	}

	BOOL RemoveMana(const ManaArray& manaArray, bool bForced)
	{
		if (!manaArray.size())
			return TRUE;

		if (!bForced)
			for (ManaArray::const_iterator i = manaArray.begin(); i != manaArray.end(); ++i)
				if (GetImpl(i->first) < i->second)
					return FALSE;

		for (ManaArray::const_iterator i = manaArray.begin(); i != manaArray.end(); ++i)
			AddImpl(i->first, -(int)i->second);

		return TRUE;
	}

	BOOL RemoveMana(const CManaPoolBase2& manaPool, bool bForced)
	{
		ManaArray manaArray;
		manaPool.CopyToArray(manaArray);

		if (!manaArray.size())
			return TRUE;

		if (bForced)
			for (ManaArray::const_iterator i = manaArray.begin(); i != manaArray.end(); ++i)
				if (GetImpl(i->first) < i->second)
					return FALSE;

		for (ManaArray::const_iterator i = manaArray.begin(); i != manaArray.end(); ++i)
			AddImpl(i->first, -(int)i->second);

		return TRUE;
	}

	CString ToString() const //This sort sequence defines the mana pool sort. Updated to WUBRG.
	{
		CString strText;

		if (m_ColorlessMana)
		{
			CString strText1;
			strText1.Format(_T("%u"), (DWORD)m_ColorlessMana);
			strText += strText1;
		}

		for (DWORD i = 0; i < m_WhiteMana; ++i)
			strText += WHITE_MANA_TEXT;

		for (DWORD i = 0; i < m_BlueMana; ++i)
			strText += BLUE_MANA_TEXT;

		for (DWORD i = 0; i < m_BlackMana; ++i)
			strText += BLACK_MANA_TEXT;

		for (DWORD i = 0; i < m_RedMana; ++i)
			strText += RED_MANA_TEXT;

		for (DWORD i = 0; i < m_GreenMana; ++i)
			strText += GREEN_MANA_TEXT;

		return strText;
	}

	size_t CalculateCostPermutations(const CManaCost& manaCost,
									 ManaPoolArray& manaConfigs) const
	{
		DWORD dwColorlessCost = manaCost.GetCost(CManaCost::Color::Generic);

		const CManaPool manaPool(GetManaPool());

		if (!dwColorlessCost ||								// Cost has no generic cost or
			(GetColorCount(TRUE) == 1) ||					// Pool has only one type of mana
			(manaCost.GetTotal() == GetTotal()))
		{													// Only one possible mana configuration
			CManaPool manaConfig;
			if (manaCost.GetTotal() == GetTotal())
			{
				if (!manaCost.CompareToPool(manaPool, FALSE))
					return 0;

				manaConfig = manaPool;
			}
			else
				if (!dwColorlessCost)
					manaConfig = manaCost.GetColorCostFromPool(manaPool);
				else // Pool has only one color
				{
					if (!manaCost.CompareToPool(manaPool, FALSE))
						return 0;

					manaConfig.AddMana(
						Colors(GetFirstManaColor()), 
						manaCost.GetTotal());
				}

			manaConfigs.push_back(manaConfig);
			return manaConfigs.size();
		}

		// Cost has generic cost and
		// Pool has more than one type of mana

		CManaPool baseManaConfig(manaCost.GetColorCostFromPool(manaPool));
		CManaPool manaPoolForColorlessCost(manaCost.RemoveColorCostFromPool(manaPool));

		ManaArray manaArray;
		manaPoolForColorlessCost.CopyToArray(manaArray);

		int nColorCount = (int)manaArray.size();

		int nMaxColorCount = nColorCount;
		if (DWORD(nMaxColorCount) > dwColorlessCost)
			nMaxColorCount = dwColorlessCost;

		IntArray currentColor;
		currentColor.resize(nColorCount);

		IntArray bound;
		bound.resize(nColorCount);

		IntArray currentMana;
		currentMana.resize(nColorCount);

		IntArray bound1;
		bound1.resize(nColorCount);

		for (int nCurrentColorCount = 1; nCurrentColorCount <= nMaxColorCount; ++nCurrentColorCount)
		{
			for (int i = 0; i < nCurrentColorCount; ++i)
			{
				currentColor[i] = i;
				bound[i] = nColorCount - 1;
			}

			do
			{
	//			{
	//				m_pGame->Log(_T("Using colors: "));
	//				for (int i = 0; i < nCurrentColorCount; ++i)
	//					m_pGame->Log(_T("[%d:%d]"), manaArray[currentColor[i]].first, manaArray[currentColor[i]].second);
	//				m_pGame->Log(_T("\n"));
	//			}

				for (int i = 0; i < nCurrentColorCount; ++i)
				{
					currentMana[i] = 0;
					bound1[i] = manaArray[currentColor[i]].second;
				}

				do
				{
					DWORD dwTotal = 0;
					for (int i = 0; i < nCurrentColorCount; ++i)
					{
						if (!currentMana[i])
						{
							dwTotal = 0;
							break;
						}
						dwTotal += currentMana[i];
					}

					if (dwTotal == dwColorlessCost)
					{
	#ifdef _MY_DEBUG
						//{
						//	m_pGame->Log(_T("\tMana Configurations for %d colorless mana: "), dwColorlessCost);

						//	for (int i = 0; i < nCurrentColorCount; ++i)
						//		m_pGame->Log(_T("[0x%02x:%d(%d)]"),
						//			manaArray[currentColor[i]].first,
						//			currentMana[i],
						//			manaArray[currentColor[i]].second);
						//	m_pGame->Log(_T("\n"));
						//}
	#endif
						CManaPool manaConfig;

						for (int i = 0; i < nCurrentColorCount; ++i)
							manaConfig.AddMana(
								CManaPool::Colors(manaArray[currentColor[i]].first), currentMana[i]);

						manaConfig.AddMana(baseManaConfig);
						manaConfigs.push_back(manaConfig);
					}

				} while (Permutation(bound1, nCurrentColorCount, currentMana, FALSE, FALSE));

			} while (Permutation(bound, nCurrentColorCount, currentColor, TRUE, TRUE));
		}

		return manaConfigs.size();
	}

protected:
	static void DecodeText(LPCTSTR strManaText, ManaArray& manaCounts)
	{
		manaCounts.clear();

		CString strColorlessText;
		
		DWORD dwWhiteMana = 0;
		DWORD dwBlueMana = 0;
		DWORD dwBlackMana = 0;
		DWORD dwRedMana = 0;
		DWORD dwGreenMana = 0;
		DWORD dwColorlessMana = 0;

		size_t nLen = _tcslen(strManaText);
		for (size_t i = 0; i < nLen; ++i)
			if (!isdigit(strManaText[i]))
			{
				if (!strColorlessText.IsEmpty())
				{
					dwColorlessMana += _ttoi(strColorlessText);
					strColorlessText.Empty();
				}

				switch(strManaText[i])
				{
				case WHITE_MANA_CHAR: ++dwWhiteMana; break;
				case BLUE_MANA_CHAR: ++dwBlueMana; break;
				case BLACK_MANA_CHAR: ++dwBlackMana; break;
				case RED_MANA_CHAR: ++dwRedMana; break;
				case GREEN_MANA_CHAR: ++dwGreenMana; break;
				}
			}
			else
				strColorlessText += CString(strManaText[i]);

		if (!strColorlessText.IsEmpty())
			dwColorlessMana += _ttoi(strColorlessText);

		if (dwWhiteMana)
			manaCounts.push_back(std::make_pair(Color::White, dwWhiteMana));

		if (dwBlueMana)
			manaCounts.push_back(std::make_pair(Color::Blue, dwBlueMana));

		if (dwBlackMana)
			manaCounts.push_back(std::make_pair(Color::Black, dwBlackMana));

		if (dwRedMana)
			manaCounts.push_back(std::make_pair(Color::Red, dwRedMana));

		if (dwGreenMana)
			manaCounts.push_back(std::make_pair(Color::Green, dwGreenMana));

		if (dwColorlessMana)
			manaCounts.push_back(std::make_pair(Color::Colorless, dwColorlessMana));
	}

	void SetAllMana(
		Color manaColor1, DWORD dwValue1,
		Color manaColor2 = Color::Null, DWORD dwValue2 = 0,
		Color manaColor3 = Color::Null, DWORD dwValue3 = 0,
		Color manaColor4 = Color::Null, DWORD dwValue4 = 0,
		Color manaColor5 = Color::Null, DWORD dwValue5 = 0,
		Color manaColor6 = Color::Null, DWORD dwValue6 = 0)
	{
		Clear();

		SetImpl(manaColor1, dwValue1);
		SetImpl(manaColor2, dwValue2);
		SetImpl(manaColor3, dwValue3);
		SetImpl(manaColor4, dwValue4);
		SetImpl(manaColor5, dwValue5);
		SetImpl(manaColor6, dwValue6);
	}

	void SetImpl(Color color, DWORD dwValue)
	{
		switch(color.Get())
		{
		case Color::White:		m_WhiteMana = dwValue; break;
		case Color::Blue:		m_BlueMana = dwValue; break;
		case Color::Black:		m_BlackMana = dwValue; break;
		case Color::Red:		m_RedMana = dwValue; break;
		case Color::Green:		m_GreenMana = dwValue; break;
		case Color::Colorless:	m_ColorlessMana = dwValue; break;
		}
	}

	void AddImpl(Color color, int nDelta)
	{
		if (!nDelta)
			return;

		switch(color.Get())
		{
		case Color::White:		if (nDelta < 0 && m_WhiteMana < (DWORD)-nDelta) m_WhiteMana = 0; else m_WhiteMana += nDelta; break;
		case Color::Blue:		if (nDelta < 0 && m_BlueMana < (DWORD)-nDelta) m_BlueMana = 0; else m_BlueMana += nDelta; break;
		case Color::Black:		if (nDelta < 0 && m_BlackMana < (DWORD)-nDelta) m_BlackMana = 0; else m_BlackMana += nDelta; break;
		case Color::Red:		if (nDelta < 0 && m_RedMana < (DWORD)-nDelta) m_RedMana = 0; else m_RedMana += nDelta; break;
		case Color::Green:		if (nDelta < 0 && m_GreenMana < (DWORD)-nDelta) m_GreenMana = 0; else m_GreenMana += nDelta; break;
		case Color::Colorless:	if (nDelta < 0 && m_ColorlessMana < (DWORD)-nDelta) m_ColorlessMana = 0; else m_ColorlessMana += nDelta; break;
		}
	}

	DWORD GetImpl(Color color) const
	{
		switch(color.Get())
		{
		case Color::White:		return m_WhiteMana;
		case Color::Blue:		return m_BlueMana; 
		case Color::Black:		return m_BlackMana;
		case Color::Red:		return m_RedMana;
		case Color::Green:		return m_GreenMana;
		case Color::Colorless:	return m_ColorlessMana;
		}		

		return 0;
	}

	VIRTUAL(CManaPool, GetManaPool)() const = 0;
	
	ValueType m_WhiteMana;
	ValueType m_BlueMana;
	ValueType m_BlackMana;
	ValueType m_RedMana;
	ValueType m_GreenMana;
	ValueType m_ColorlessMana;
};

//____________________________________________________________________________
//
class CManaPool : public CManaPoolBase2<DWORD>
{
	friend class CManaPool_;
public:
	explicit CManaPool(
		Color manaColor1 = Color::Null, DWORD dwValue1 = 0,
		Color manaColor2 = Color::Null, DWORD dwValue2 = 0,
		Color manaColor3 = Color::Null, DWORD dwValue3 = 0,
		Color manaColor4 = Color::Null, DWORD dwValue4 = 0,
		Color manaColor5 = Color::Null, DWORD dwValue5 = 0,
		Color manaColor6 = Color::Null, DWORD dwValue6 = 0)
		: CManaPoolBase2(
			manaColor1, dwValue1,
			manaColor2, dwValue2,
			manaColor3, dwValue3,
			manaColor4, dwValue4,
			manaColor5, dwValue5,
			manaColor6, dwValue6)
	{
	}

	CManaPool(LPCTSTR strManaText)
		: CManaPoolBase2(strManaText)
	{
	}

	CManaPool(const CManaPool& manaPool)
		: CManaPoolBase2(manaPool)
	{
	}

	CManaPool(const ManaArray& manaArray)
		: CManaPoolBase2(manaArray)
	{
	}

	//operator CManaPool_() const;

protected:
	OVERRIDE(CManaPool, GetManaPool)() const
	{
		return CManaPool(*this);
	}
};

//____________________________________________________________________________
//
class CManaPool_ : public CManaPoolBase2<DWORD_>
{
	friend class CManaPool;
public:
	explicit CManaPool_(
		Color manaColor1 = Color::Null, DWORD dwValue1 = 0,
		Color manaColor2 = Color::Null, DWORD dwValue2 = 0,
		Color manaColor3 = Color::Null, DWORD dwValue3 = 0,
		Color manaColor4 = Color::Null, DWORD dwValue4 = 0,
		Color manaColor5 = Color::Null, DWORD dwValue5 = 0,
		Color manaColor6 = Color::Null, DWORD dwValue6 = 0)
		: CManaPoolBase2(
			manaColor1, dwValue1,
			manaColor2, dwValue2,
			manaColor3, dwValue3,
			manaColor4, dwValue4,
			manaColor5, dwValue5,
			manaColor6, dwValue6)
	{
	}

	CManaPool_(LPCTSTR strManaText)
		: CManaPoolBase2(strManaText)
	{
	}

	CManaPool_(const CManaPool_& manaPool)
		: CManaPoolBase2(manaPool)
	{
	}

	CManaPool_(const ManaArray& manaArray)
		: CManaPoolBase2(manaArray)
	{
	}

	operator CManaPool() const
	{
		CManaPool manaPool;
		manaPool.m_WhiteMana = m_WhiteMana;
		manaPool.m_BlackMana = m_BlackMana;
		manaPool.m_BlueMana = m_BlueMana;
		manaPool.m_RedMana = m_RedMana;
		manaPool.m_GreenMana = m_GreenMana;
		manaPool.m_ColorlessMana = m_ColorlessMana;

		return manaPool;
	}

	void SetMana(const CManaPool& manaPool)
	{
		m_WhiteMana = manaPool.m_WhiteMana;
		m_BlueMana = manaPool.m_BlueMana;
		m_BlackMana = manaPool.m_BlackMana;
		m_RedMana = manaPool.m_RedMana;
		m_GreenMana = manaPool.m_GreenMana;
		m_ColorlessMana = manaPool.m_ColorlessMana;		
	}

	void AddMana2(const CManaPool& manaPool)			// Renamed to 2 to avoid redefining all the AddMana() overloads here
	{
		m_WhiteMana += manaPool.m_WhiteMana;
		m_BlueMana += manaPool.m_BlueMana;
		m_BlackMana += manaPool.m_BlackMana;
		m_RedMana += manaPool.m_RedMana;
		m_GreenMana += manaPool.m_GreenMana;
		m_ColorlessMana += manaPool.m_ColorlessMana;		
	}

	BOOL RemoveMana2(const CManaPool& manaPool, bool bForced)	// Renamed to 2 to avoid redefining all the RemoveMana() overloads here
	{
		ManaArray manaArray;
		manaPool.CopyToArray(manaArray);

		return __super::RemoveMana(manaArray, bForced);
	}

protected:
	OVERRIDE(CManaPool, GetManaPool)() const
	{
		return operator CManaPool();
	}
};

//____________________________________________________________________________
//
typedef CValueContainer<CManaPool> CManaPoolContainer;

class CManaPoolContainer_
	: public CValueContainerBase_<CManaPool>
{
public:
	CManaPoolContainer_()
	{}

	virtual ~CManaPoolContainer_()
	{
		RemoveSavedState();
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CManaPool& entry = GetAt(i);
			
			stateStack.AddTail((PVOID)entry.GetMana(CManaPool::Color::White));
			stateStack.AddTail((PVOID)entry.GetMana(CManaPool::Color::Blue));
			stateStack.AddTail((PVOID)entry.GetMana(CManaPool::Color::Black));
			stateStack.AddTail((PVOID)entry.GetMana(CManaPool::Color::Red));
			stateStack.AddTail((PVOID)entry.GetMana(CManaPool::Color::Green));
			stateStack.AddTail((PVOID)entry.GetMana(CManaPool::Color::Colorless));
		}

		stateStack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<CManaPool>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CManaPool entry;
			entry.AddMana(CManaPool::Color::White, (DWORD)m_Stack.RemoveTail());
			entry.AddMana(CManaPool::Color::Blue, (DWORD)m_Stack.RemoveTail());
			entry.AddMana(CManaPool::Color::Black, (DWORD)m_Stack.RemoveTail());
			entry.AddMana(CManaPool::Color::Red, (DWORD)m_Stack.RemoveTail());
			entry.AddMana(CManaPool::Color::Green, (DWORD)m_Stack.RemoveTail());
			entry.AddMana(CManaPool::Color::Colorless, (DWORD)m_Stack.RemoveTail());

			CValueContainer<CManaPool>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<CManaPool>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CManaPool entry;
			entry.AddMana(CManaPool::Color::White, (DWORD)m_Stack.GetPrev(pos));
			entry.AddMana(CManaPool::Color::Blue, (DWORD)m_Stack.GetPrev(pos));
			entry.AddMana(CManaPool::Color::Black, (DWORD)m_Stack.GetPrev(pos));
			entry.AddMana(CManaPool::Color::Red, (DWORD)m_Stack.GetPrev(pos));
			entry.AddMana(CManaPool::Color::Green, (DWORD)m_Stack.GetPrev(pos));
			entry.AddMana(CManaPool::Color::Colorless, (DWORD)m_Stack.GetPrev(pos));

			CValueContainer<CManaPool>::AddImpl(entry);
		}
	}
};
