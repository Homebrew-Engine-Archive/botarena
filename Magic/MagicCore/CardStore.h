#pragma once

class CCardModule;
typedef std::vector<CCardModule*> CardModules;

class CAllSetModule;

class CCardEntry;
typedef std::vector<CCardEntry*> CardEntries;

//____________________________________________________________________________
//
enum WM_APP_CARDSTORE_
{
	WM_APP_CARDSTORE_INIT = WM_APP_CARDSTORE,		
	WM_APP_CARDSTORE_INIT2,		
	WM_APP_CARDSTORE_MODULE,		
	WM_APP_CARDSTORE_CARD,		
	WM_APP_CARDSTORE_INITIALIZED,
};

//____________________________________________________________________________
//
// CMTGSymbol
//
class CMTGSymbol
{
public:
	CMTGSymbol();
	CMTGSymbol(LPCTSTR strFileNameFormat); // e.g. _T("Symbol_Large_%s.png")
	CMTGSymbol(const CMTGSymbol& mtgSymbol);
	CMTGSymbol(const CMTGSymbol& mtgSymbol, 
			   const Gdiplus::Size& newSize);

	~CMTGSymbol();

	CMTGSymbol& operator=(const CMTGSymbol& mtgSymbol);

	void Load(LPCTSTR strFileNameFormat);
	void Clear();

	int Count() const { return static_cast<int>(m_Images.size()); }
	const Gdiplus::Size& Size() const { return m_Size; }

	bool DrawSymbol(TCHAR symbol, Gdiplus::Graphics& graphics, const Gdiplus::Point& point, const Gdiplus::ImageAttributes* pImageAttributes = NULL) const;

	bool IsValid() const { return m_Size.Width > 0 && m_Size.Height > 0 && m_Images.size(); }

protected:
	std::map<TCHAR, CGdipBitmap>	m_Images;
	Gdiplus::Size					m_Size;
};

//____________________________________________________________________________
//
// CCardStore
//

class CORE_EXPORT CCardStore
{
	DECLARE_SINGLETON(CCardStore);

	friend class CCardEntry;
public:
	enum CardDimension
	{ 
		LargeCardWidth = 245,
		LargeCardHeight = 340,
		DefaultSmallCardHeight = 100,
		LargeNoBorderWidth = 225,
		LargeNoBorderHeight = 321
	};

	static const LPCTSTR s_strTokenModuleName;

	void Initialize(HWND hwndProgress);

	Gdiplus::Font* GetSmallFont() const { return m_SmallFont.get(); }

	const CMTGSymbol& GetSmallSymbols() const { return m_SmallSymbols; }
	const CMTGSymbol& GetLargeSymbols() const { return m_LargeSymbols; }

	BOOL GetShowMTGBitmaps() const { return m_bShowMTGBitmaps; }
	BOOL GetShowMTGSymbols() const { return m_bShowMTGSymbols; }

	void SetShowMTGBitmaps(BOOL bShow) { m_bShowMTGBitmaps = bShow; }
	void SetShowMTGSymbols(BOOL bShow) { m_bShowMTGSymbols = bShow; }

	CCardEntry* GetCard(LPCTSTR strCardName, BOOL bSimilarWords);
	CCardEntry* GetCardByID(UINT uID);

	CGdipBitmap GetBackBitmap(Gdiplus::Size size);
	CGdipBitmap GetBackBitmap(); // large
	CGdipBitmap GetShadowBitmap(Gdiplus::Size size);

	size_t GetModuleCount() const;
	CCardModule* GetModule(int nIndex);
	int GetModuleIndex(const CCardModule* pModule) const;

	size_t GetPseudoModuleCount() const;
	CCardModule* GetPseudoModule(int nIndex);

	DWORD EnumCardStartPos() const;
	BOOL EnumCardNextPos(DWORD& dwPos, CCardEntry** ppCardEntry);

	DWORD EnumTokenStartPos() const;
	BOOL EnumTokenNextPos(DWORD& dwPos, CCardEntry** ppCardEntry);

	Gdiplus::Size GetSmallCardSize() const { return m_SmallCardSize; }
	void SetSmallCardHeight(int nSmallCardHeight);

protected:
	static const int s_nSmallFontSize = 14;
	static const int s_nMaximumCachedCardBitmaps = 60;

	void InitializeBackBitmaps();
	void InitializeShadowBitmaps();
	void InitializeSymbolImages();
	void InitializeModules(HWND hwndProgress);

	BOOL	m_bShowMTGBitmaps;
	BOOL	m_bShowMTGSymbols;

	Gdiplus::Size					m_SmallCardSize;

	std::auto_ptr<Gdiplus::Font>	m_SmallFont;

	CMTGSymbol						m_SmallSymbols;
	CMTGSymbol						m_LargeSymbols;

	CGdipBitmap						m_LargeBackBitmap;
	CGdipBitmap						m_LargeMTGBackBitmap;
	CGdipBitmap						m_LargeShadowBitmap;

	CardModules						m_Modules;
	CardModules						m_PseudoModules;
};

//____________________________________________________________________________
//
// RarityType
//

struct RarityType 
{
	enum Enum : DWORD
	{
		Unknown,
		Common,
		Common2,
		Common3,
		Uncommon,
		Uncommon2,
		Uncommon3,
		Rare,
		Rare2,
		Rare3,
		MythicRare,
		Special,
		BasicLand
	};

	DEFINE_BITFLAG_ENUM_OPS(RarityType, DWORD)

public:
	static CString ToString(RarityType rarity, bool bAbbreviated)
	{
		CString str;

		if (bAbbreviated)
		{
			switch(rarity.Get())
			{
			case Unknown: return _T("?");
			case Common2: return _T("C2");
			case Common3: return _T("C3");
			case Uncommon: return _T("U");
			case Uncommon2: return _T("U2");
			case Uncommon3: return _T("U3");
			case Rare: return _T("R");
			case Rare2: return _T("R2");
			case Rare3: return _T("R3");
			case MythicRare: return _T("MR");
			case Special: return _T("S");
			case BasicLand: return _T("BL");
			}

			return _T("C");
		}

		switch(rarity.Get())
		{
		case Unknown: return _T("Unknown");
		case Common2: return _T("Common2");
		case Common3: return _T("Common3");
		case Uncommon: return _T("Uncommon");
		case Uncommon2: return _T("Uncommon2");
		case Uncommon3: return _T("Uncommon3");
		case Rare: return _T("Rare");
		case Rare2: return _T("Rare2");
		case Rare3: return _T("Rare3");
		case MythicRare: return _T("Mythic Rare");
		case Special: return _T("Special");
		case BasicLand: return _T("Basic Land");
		}

		return _T("Common");
	}

	static RarityType FromString(LPCTSTR strRarity)
	{
		CString strTemp(strRarity);
		strTemp.Trim();
		if (strTemp.IsEmpty() ||
			!strTemp.CompareNoCase(_T("C")) ||
			!strTemp.CompareNoCase(_T("C1")))
			return Common;

		if (!strTemp.CompareNoCase(_T("C2")))
			return Common2;

		if (!strTemp.CompareNoCase(_T("C3")))
			return Common3;

		if (!strTemp.CompareNoCase(_T("U")) ||
			!strTemp.CompareNoCase(_T("U1")))
			return Uncommon;

		if (!strTemp.CompareNoCase(_T("U2")))
			return Uncommon2;

		if (!strTemp.CompareNoCase(_T("U3")))
			return Uncommon3;

		if (!strTemp.CompareNoCase(_T("R")) ||
			!strTemp.CompareNoCase(_T("R1")))
			return Rare;

		if (!strTemp.CompareNoCase(_T("R2")))
			return Rare2;

		if (!strTemp.CompareNoCase(_T("R3")))
			return Rare3;

		if (!strTemp.CompareNoCase(_T("MR")))
			return MythicRare;

		if (!strTemp.CompareNoCase(_T("S")))
			return Special;

		if (!strTemp.CompareNoCase(_T("BL")))
			return BasicLand;

		return Unknown;
	}

	CString ToString(bool bAbbreviated) const { return ToString(m_Value, bAbbreviated); }

	bool IsSpecial() const { return m_Value == Special; }
	bool IsMythicRare() const { return m_Value == MythicRare; }
	bool IsRare() const { return m_Value == Rare || m_Value == Rare2 || m_Value == Rare3; }
	bool IsUncommon() const { return m_Value == Uncommon || m_Value == Uncommon2 || m_Value == Uncommon3; }
	bool IsCommon() const { return m_Value == Common || m_Value == Common2 || m_Value == Common3; }
};

//____________________________________________________________________________
//
// CCardProduct
//

// Product string format:
// 
//		"10th Edition Starter Box":R-3:U-10:C-32:BL-30,"10th Edition Booster Pack":R-1:U-3:C-11,...

class CCardProduct
{
public:
	CCardProduct()
	{}

	CCardProduct(LPCTSTR strProductDetails)
	{
		StringArray subStrings;
		if (SplitString(strProductDetails, _T(":"), subStrings, _T("\""), TRUE))
		{
			m_strProductName = subStrings[0];

			for (size_t i = 1; i < subStrings.size(); ++i)
			{
				CString strSubString(subStrings[i]);
				int nCount = 1;
				int nIndex = strSubString.Find(_T('-'));
				if (nIndex > 0)
				{
					nCount = _ttoi(strSubString.Mid(nIndex + 1).Trim());
					strSubString = strSubString.Left(nIndex);
				}

				RarityType rarity(RarityType::FromString(strSubString));
				if (rarity == RarityType::Unknown)
					continue;

				m_ProductDetails.push_back(std::make_pair(rarity, nCount));

				ATLTRACE(_T("*** Product: %s - %s - %d\n"),
					m_strProductName, rarity.ToString(false), nCount);
			}
		}
	}

	CString GetProductName() const { return m_strProductName; }
	
	const std::vector<std::pair<RarityType, int>>& GetProductDetails() const { return m_ProductDetails; }

	bool IsValid() const { return !m_strProductName.IsEmpty() && m_ProductDetails.size(); }

protected:
	CString m_strProductName;
	std::vector<std::pair<RarityType, int>> m_ProductDetails;
};

typedef std::vector<CCardProduct> CardProducts;

//____________________________________________________________________________
//
// CCardModule
//

class CCardModule
{
public:
	CCardModule(LPCTSTR strModulePath, HWND hwndProgress);
	virtual ~CCardModule();

	virtual size_t GetEntryCount() const;
	virtual CCardEntry* GetCard(LPCTSTR strCardName, BOOL bSimilarWords) const;
	virtual CCardEntry* GetCardByID(UINT uID) const;
	virtual CCardEntry* GetCard(int nIndex) const;

	CString GetModuleName()	const			{ return m_strModuleName; }
	CString GetModulePath()	const			{ return m_strModulePath; }
	CString GetExpansionName() const		{ return m_strExpansionName; }
	CString GetExpansionAbbrevName() const	{ return m_strExpansionAbbrevName; }
	CString GetExpansionPath() const		{ return m_strExpansionPath; }
	CString GetBitmapPath()	const			{ return m_strBitmapPath; }		// 3/4/2001: Added
	BOOL IsWhiteBorder() const				{ return m_bWhiteBorder; }		// 7/13/2002
	COleDateTime GetReleaseDate() const		{ return m_ReleaseDate; }
	BOOL IsCoreSet() const					{ return m_bCoreSet; }
	
	const CardProducts& GetProducts() const	{ return m_Products; }
	virtual CardEntries GenerateProduct(size_t nProductIndex, bool bRemoveBasicLands, CMTRNG& random) const;

	HICON GetIcon(BOOL bLarge = FALSE) const{ return bLarge ? m_hLargeIcon : m_hIcon; }

	CString GetAlternateImageUrl() const	{ return m_strAlternateImageUrl; }
	int GetAlternateImageMethod() const		{ return m_nAlternateImageMethod; }
	
	CString GetMWSFolder() const			{ return m_strMWSFolder; }

	int GetInstanceCount(LPCTSTR strCardName) const;

protected:
	static CCardEntry* GetCardImpl(const CardEntries& entries, LPCTSTR strCardName, BOOL bSimilarWords);

	CCardModule(LPCTSTR strExpansionName, LPCTSTR strExpansionAbbrevName, LPCTSTR strProductList);

	void InitializeEntries(HWND hwndProgress);
	CardEntries GenerateProductImpl(const CardEntries& entries, size_t nProductIndex, bool bRemoveBasicLands, CMTRNG& random) const;

	CString			m_strModuleName;
	CString			m_strModulePath;
	CString			m_strExpansionPath;
	CString			m_strExpansionName;
	CString			m_strExpansionAbbrevName;
	CString			m_strBitmapPath;
	COleDateTime	m_ReleaseDate;
	BOOL			m_bCoreSet;
	CardProducts	m_Products;

	CardEntries		m_Entries;
	BOOL			m_bWhiteBorder;
	HICON			m_hIcon;
	HICON			m_hLargeIcon;

	CString			m_strAlternateImageUrl;
	int				m_nAlternateImageMethod;

	CString			m_strMWSFolder;

	std::map<CString, int> m_InstanceCount;
};

//____________________________________________________________________________
//
// CAllSetModule
//
class CAllSetModule : public CCardModule
{
public:
	CAllSetModule(const CardModules& modules, bool bIncludeBOACards);

	virtual size_t GetEntryCount() const;
	virtual CCardEntry* GetCard(LPCTSTR strCardName, BOOL bSimilarWords) const;
	virtual CCardEntry* GetCardByID(UINT uID) const;
	virtual CCardEntry* GetCard(int nIndex) const;

	virtual CardEntries GenerateProduct(size_t nProductIndex, bool bRemoveBasicLands, CMTRNG& random) const;

protected:
	static LPCTSTR s_strExpansionName;
	static LPCTSTR s_strExpansionAbbrevName;
	static LPCTSTR s_strProductList;

	static LPCTSTR s_strExpansionName2;
	static LPCTSTR s_strExpansionAbbrevName2;
	static LPCTSTR s_strProductList2;

	void InitializeEntries(const CardModules& modules, bool bIncludeBOACards);

	CardModules	m_RefModules;
	CardEntries	m_RefEntries;
};

//____________________________________________________________________________
//
// CCardEntry
//

class CORE_EXPORT CCardEntry
{
public:
	enum ItemType
	{
		CardName,
		CastingCost,
		CardType_,
		Expansion,
		PowerTough,
		Description,
		_ItemTypeCount,
		_InvalidItemType
	};

	CCardEntry(UINT uID, CCardModule* pModule);
	virtual ~CCardEntry();

	BOOL IsValidEntry() const { return m_bTextInitialized; }

	CGdipBitmap GetBitmap(BOOL bRotated); // large
	CGdipBitmap GetBitmap(Gdiplus::Size size, BOOL bRotated);
	CGdipBitmap GetBitmap(int nHeight, BOOL bRotated);
	Gdiplus::Rect GetItemRect(ItemType itemType, Gdiplus::Size size, BOOL bRotated);

	const CString& GetCardName() const;
	CString GetTrCardName() const;
	CString GetResourceCardName() const;
	CString GetCastCost(BOOL bExtra = TRUE) const;
	CString GetCardText(BOOL bExtra = TRUE) const;
	CString GetCardTypeText() const;
	CString GetExpansionName() const;
	RarityType GetRarity() const;
	CString GetRarityText(bool bAbbreviated) const;
	CString GetPowerTough() const;
	CardType GetCardType() const;
	UINT GetID() const;
	CCardModule* GetModule() const { return m_pModule; }
	CString GetCardCodePath() const { return m_strCardCodePath; }

protected:
	static const Gdiplus::Rect s_LargeCardCaptionRect;
	static const Gdiplus::Rect s_LargeCardTypeRect;
	static const Gdiplus::Rect s_LargeCardTextRect;
	static const Gdiplus::Rect s_LargeCardPTRect;

	/*		
		Large card item locations

					245      180
		+--------------------------+
		|                     |    |
		|--------------------------|40
		|                          |
		|                          |
		|                          |
		|                          |
		|                          |
		|                          |
		|                          |
		|__________________________|190    340
		|                     |    |
		|--------------------------|207
		|                          |
		|                          |
		|                          |
		|                          |
		|                      ____|300
		|                     |    |
		+--------------------------+
                             180
	*/

	static const float s_AlignRightStart;
	static const float s_GraphicStart;
	static const float s_GraphicEnd;
	static const float s_TextStart;
	static const float s_CreatureStart;

	static Gdiplus::Rect RotateRect(const Gdiplus::Rect& rect, const Gdiplus::Size& size);

	void InitializeBitmap();
	void InitializeMTGBitmap();
	void InitializeText();
	bool DownloadMTGBitmapFromInternet(CString& strPath);
	bool LoadMWSGraphicFile();

	void AssignStandardBitmap();
	void DrawBorder(Gdiplus::Bitmap* pBitmap, int nBorderSize, BOOL bBlack);
	void DrawBitmapText(Gdiplus::Bitmap* pBitmap, 
						Gdiplus::Font* pTextFont, 
						const CMTGSymbol& symbols,
						const Gdiplus::Rect& captionRect,
						const Gdiplus::Rect& typeRect,
						const Gdiplus::Rect& textRect,
						const Gdiplus::Rect& pTRect/*,
						Gdiplus::Rect* pItemRects = NULL*/);

	UINT			m_uID;
	CCardModule*	m_pModule;
	int				m_nInstanceNumber;

	CString		m_strRawText;

	CString		m_strCardName;
	CString		m_strResourceCardName;
	CString		m_strCardCodePath;

	CString		m_strCastCost;
	CString		m_strCastCostExtra;
	CString		m_strCardType;
	CString		m_strExpansionName;
	RarityType	m_Rarity;
	CString		m_strCardText;
	CString		m_strCardTextExtra;
	CString		m_strPowerTough;
	CardType	m_CardType;

	UINT		m_uLargeBitmap;

	CGdipBitmap	m_LargeBitmap;
	CGdipBitmap	m_LargeBitmap2;			// Use MTG fonts
	CGdipBitmap	m_LargeBitmapRotated;
	CGdipBitmap	m_LargeBitmapRotated2;	// Use MTG fonts
	CGdipBitmap	m_LargeMTGBitmap;
	CGdipBitmap	m_LargeMTGBitmapRotated;

	BOOL	m_bWhiteBorder;

	BOOL	m_bTextInitialized;
};
 