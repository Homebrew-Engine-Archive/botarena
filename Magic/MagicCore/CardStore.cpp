// CardStore.cpp : implementation file
//

#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
// CMTGSymbol
//

CMTGSymbol::CMTGSymbol()
{}

CMTGSymbol::CMTGSymbol(LPCTSTR strFileNameFormat)
{
	Load(strFileNameFormat);
}

CMTGSymbol::CMTGSymbol(const CMTGSymbol& mtgSymbol)
{
	operator=(mtgSymbol);
}

CMTGSymbol::CMTGSymbol(const CMTGSymbol& mtgSymbol, const Gdiplus::Size& newSize)
{
	if (mtgSymbol.Size().Equals(newSize))
	{
		operator=(mtgSymbol);
		return;
	}

	for (std::map<TCHAR, CGdipBitmap>::const_iterator i = mtgSymbol.m_Images.begin(); i != mtgSymbol.m_Images.end(); ++i)
	{
		CGdipBitmap bitmap(i->second);
		bitmap.Stretch(newSize);
		m_Images[i->first] = bitmap;
	}

	m_Size = newSize;
}

CMTGSymbol& CMTGSymbol::operator=(const CMTGSymbol& mtgSymbol)
{
	Clear();

	m_Images = mtgSymbol.m_Images;
	m_Size = mtgSymbol.Size();

	return *this;
}

CMTGSymbol::~CMTGSymbol()
{
	Clear();
}

void CMTGSymbol::Load(LPCTSTR strFileNameFormat)
{
	Clear();

	static const std::pair<TCHAR, CString> s_Symbols[] = 
	{ 
		std::make_pair( _T('0'), _T("0") ),
		std::make_pair( _T('1'), _T("1") ),
		std::make_pair( _T('2'), _T("2") ),
		std::make_pair( _T('3'), _T("3") ),
		std::make_pair( _T('4'), _T("4") ),
		std::make_pair( _T('5'), _T("5") ),
		std::make_pair( _T('6'), _T("6") ),
		std::make_pair( _T('7'), _T("7") ),
		std::make_pair( _T('8'), _T("8") ),
		std::make_pair( _T('9'), _T("9") ),
		std::make_pair( _T('X'), _T("X") ),
		std::make_pair( _T('Y'), _T("Y") ),
		std::make_pair( _T('Z'), _T("Z") ),
		std::make_pair( _T('T'), _T("Tap") ),
		std::make_pair( _T('Q'), _T("Untap") ),
		std::make_pair( _T('W'), _T("White") ),
		std::make_pair( _T('U'), _T("Blue") ),
		std::make_pair( _T('B'), _T("Black") ),
		std::make_pair( _T('R'), _T("Red") ),
		std::make_pair( _T('G'), _T("Green") ),
		std::make_pair( _T('S'), _T("Snow") ),
		std::make_pair( _T('A'), _T("WhiteBlue") ),
		std::make_pair( _T('C'), _T("BlueBlack") ),
		std::make_pair( _T('D'), _T("BlackRed") ),
		std::make_pair( _T('E'), _T("RedGreen") ),
		std::make_pair( _T('F'), _T("GreenWhite") ),
		std::make_pair( _T('H'), _T("WhiteBlack") ),
		std::make_pair( _T('I'), _T("BlueRed") ),
		std::make_pair( _T('J'), _T("BlackGreen") ),
		std::make_pair( _T('K'), _T("RedWhite") ),
		std::make_pair( _T('L'), _T("GreenBlue") ),
		std::make_pair( _T('M'), _T("2White") ),
		std::make_pair( _T('N'), _T("2Blue") ),
		std::make_pair( _T('O'), _T("2Black") ),
		std::make_pair( _T('P'), _T("2Red") ),
		std::make_pair( _T('V'), _T("2Green") ),
		std::make_pair( _T('!'), _T("PhyrexianWhite") ),
		std::make_pair( _T('$'), _T("PhyrexianBlue") ),
		std::make_pair( _T('%'), _T("PhyrexianBlack") ),
		std::make_pair( _T('&'), _T("PhyrexianRed") ),
		std::make_pair( _T('/'), _T("PhyrexianGreen") ),

	};

	CString strBitmapPath(g_pCoreApp->GetBitmapPath() + _T("\\Symbols\\"));

	LOG_INFORMATION(_T("Loading symbols from path %s..."), strBitmapPath);
	
	m_Size.Width = 0;
	m_Size.Height = 0;

	for (int i = 0; i < ARRAY_SIZE(s_Symbols); ++i)
	{
		TCHAR symbol = s_Symbols[i].first;
		CString strImagePath;
		strImagePath.Format(strBitmapPath + strFileNameFormat, s_Symbols[i].second);

		if (!PathFileExists(strImagePath))
		{
			LOG_WARNING(_T("Missing symbol file %s"), strImagePath);
			continue;
		}

		CGdipBitmap bitmap(strImagePath);
		if (bitmap.IsValid())
		{
			m_Images[symbol] = bitmap;

			if (!m_Size.Width)
				m_Size = bitmap.Size();

			LOG_INFORMATION(_T("Loaded symbol file %s"), strImagePath);
		}
		else
		{
			LOG_WARNING(_T("Error loading symbol file %s"), strImagePath);
			ATLASSERT(false);
		}
	}

	if (!IsValid())
		LOG_WARNING(_T("Invalid symbols in path %s"), strBitmapPath);
	else
		LOG_INFORMATION(_T("Loaded %d symbols from path %s (size = %d x %d)"), 
			m_Images.size(), 
			strBitmapPath,
			m_Size.Width, m_Size.Height
			);
}

void CMTGSymbol::Clear()
{
	m_Images.clear();
	m_Size = Gdiplus::Size();
}

bool CMTGSymbol::DrawSymbol(TCHAR symbol, Gdiplus::Graphics& graphics, const Gdiplus::Point& point, const Gdiplus::ImageAttributes* pImageAttributes) const
{
	std::map<TCHAR, CGdipBitmap>::const_iterator j = m_Images.find(symbol);
	if (j == m_Images.end())
	{
		LOG_WARNING(_T("Symbol not found: %c"), symbol);
		ATLASSERT(false);
		return false;
	}

	Gdiplus::Rect rect(point, m_Size);

	const CGdipBitmap& bitmap(j->second);

	return graphics.DrawImage(bitmap, rect, 0, 0, m_Size.Width, m_Size.Height, Gdiplus::UnitPixel, pImageAttributes) == Gdiplus::Ok;
}

//____________________________________________________________________________
//
// CCardStore
//

const LPCTSTR CCardStore::s_strTokenModuleName = _T("Token");

#pragma push_macro("new")
#ifdef new
#undef new
#endif

CCardStore::CCardStore()
	: m_bShowMTGBitmaps(FALSE)
	, m_bShowMTGSymbols(FALSE)
{
	m_SmallCardSize.Height = DefaultSmallCardHeight;
	m_SmallCardSize.Width = static_cast<int>((float)m_SmallCardSize.Height * (float)LargeCardWidth / (float)LargeCardHeight);
	m_SmallFont.reset(new Gdiplus::Font(_T("mplantin"), Gdiplus::REAL(s_nSmallFontSize), Gdiplus::FontStyleRegular, Gdiplus::UnitPixel));
}

#pragma pop_macro("new")

CCardStore::~CCardStore()
{
	for (CardModules::size_type i = 0; i < m_PseudoModules.size(); ++i)
	{
		CCardModule* pModule = m_PseudoModules[i];
		delete pModule;
	}

	for (CardModules::size_type i = 0; i < m_Modules.size(); ++i)
	{
		CCardModule* pModule = m_Modules[i];

		ATLTRACE(_T("Freeing %s module...\n"), pModule->GetModuleName());

		delete pModule;
	}
}

void CCardStore::Initialize(HWND hwndProgress)
{
	InitializeBackBitmaps();
	InitializeShadowBitmaps();
	InitializeSymbolImages();
	InitializeModules(hwndProgress);

	if (hwndProgress)
		::PostMessage(hwndProgress, WM_APP_CARDSTORE_INITIALIZED, 0, 0);
}

void CCardStore::InitializeSymbolImages()
{
	m_SmallSymbols.Load(_T("Symbol_Small_%s.png"));
	m_LargeSymbols.Load(_T("Symbol_Large_%s.png"));
}

void CCardStore::InitializeBackBitmaps()
{
	m_LargeBackBitmap.Load(GetModuleFileName(), IDB_CARDBACK_LARGE);

	m_LargeMTGBackBitmap.Load(g_pCoreApp->GetMtgModulePath() + _T("\\MTG.DLL"), IDB_BACK);

	if (!m_LargeMTGBackBitmap.IsValid())
	{
		CString strPath;
		strPath.Format(_T("%s\\Cards\\CardBack.jpg"), g_pCoreApp->GetBitmapPath());
		if (PathFileExists(strPath))
		{
			m_LargeMTGBackBitmap.Load(strPath);
			m_LargeMTGBackBitmap.Stretch(Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight));
		}
	}
}

void CCardStore::InitializeShadowBitmaps()
{
	CString strPath;
	strPath.Format(_T("%s\\Cards\\CardShadow.png"), g_pCoreApp->GetBitmapPath());
	if (PathFileExists(strPath))
	{
		m_LargeShadowBitmap.Load(strPath);
		m_LargeShadowBitmap.Stretch(Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight));
	}
}

void CCardStore::InitializeModules(HWND hwndProgress)
{
	HANDLE hFindFile;
	WIN32_FIND_DATA findData;
	if ((hFindFile = FindFirstFile(g_pCoreApp->GetCardModulePath() + _T("\\*.DLL"), &findData)) == INVALID_HANDLE_VALUE)
		return;
	do
	{
		if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
		{
			LOG_DEBUG(_T("Initializing %s..."), findData.cFileName);

			CCardModule* pModule = new CCardModule(findData.cFileName, hwndProgress);
			if (!pModule->GetEntryCount())
				delete pModule;
			else
				m_Modules.push_back(pModule);
		}

	} while(FindNextFile(hFindFile, &findData));

	FindClose(hFindFile);

	// Sort modules in descending order by release date

	struct Sorting 
	{
		static bool ByReleaseDate(const CCardModule* a, const CCardModule* b) 
		{ 
			return a->GetReleaseDate() > b->GetReleaseDate();
		}
	};

	std::sort(m_Modules.begin(), m_Modules.end(), Sorting::ByReleaseDate);

#ifndef _DEBUG // takes too long in debug
	if (g_pCoreApp->GetDeveloper())
	{
		// Check card code path to make sure card code is located in the correct module

		// Ideally this outermost loop should iterate through card code and not card text but currently there is no easy way to iterate through all the card code
		std::set<CString, iless> processedCardCode;

		for (CardModules::const_iterator i = m_Modules.begin(); i != m_Modules.end(); ++i)
		{
			const CCardModule* pModule(*i);

			if (pModule->GetExpansionName() == CCardStore::s_strTokenModuleName)
				continue;
			
			size_t nCardCount = pModule->GetEntryCount();
			for (size_t j = 0; j < nCardCount; ++j)
			{
				CCardEntry* pCardEntry = pModule->GetCard(j);

				if (processedCardCode.count(pCardEntry->GetCardName()))
					continue;
				processedCardCode.insert(pCardEntry->GetCardName());

				if (pCardEntry->GetCardCodePath().IsEmpty())
				{
					LOG_WARNING(_T("Missing card code for card %s"), pCardEntry->GetCardName());
					continue;
				}

				// Find card code module

				CCardModule* pCodeModule = NULL;
				for (CardModules::const_iterator k = m_Modules.begin(); k != m_Modules.end(); ++k)
					if (!(*k)->GetModulePath().CompareNoCase(pCardEntry->GetCardCodePath()))
					{
						pCodeModule = *k;
						break;
					}

				if (!pCodeModule)
				{
					LOG_WARNING(_T("Unable to find card text module for card %s with code implemented in %s"),
						pCardEntry->GetCardName(), pCardEntry->GetCardCodePath());
					continue;
				}

				if (pCodeModule->GetExpansionName() == CCardStore::s_strTokenModuleName)
					continue; // ignore anything defined in token, e.g. basic lands

				if (!pCodeModule->GetCard(pCardEntry->GetCardName(), TRUE))
				{
					LOG_WARNING(_T("Card code for card %s defined in module %s but card text is missing from module."),
						pCardEntry->GetCardName(), pCodeModule->GetExpansionName());
					continue;
				}

				// Card code implemented in pCardModule, now what is the earliest module with this card's text defined?

				// First try core sets

				CCardModule* pTextModule = NULL;
				for (CardModules::const_reverse_iterator k = m_Modules.rbegin(); k != m_Modules.rend(); ++k)
					if ((*k)->IsCoreSet() && (*k)->GetCard(pCardEntry->GetCardName(), TRUE))
					{
						pTextModule = *k;
						break;
					}

				if (!pTextModule)
				{
					// Try expansion sets
					for (CardModules::const_reverse_iterator k = m_Modules.rbegin(); k != m_Modules.rend(); ++k)
						if (!(*k)->IsCoreSet() && (*k)->GetCard(pCardEntry->GetCardName(), TRUE))
						{
							pTextModule = *k;
							break;
						}

					if (!pTextModule)
					{
						LOG_WARNING(_T("Unexpected error when processing card code for %s."), pCardEntry->GetCardName());
						continue;
					}
				}

				if (pTextModule != pCodeModule)
				{
					if (pTextModule->GetExpansionName() == CCardStore::s_strTokenModuleName)
						continue; // ignore anything defined in token, e.g. tokens with the same name as a real card

					LOG_WARNING(_T("Card code for %s is currently implemented in %s (%s) and should be relocated to module %s (%s)."),
						pCardEntry->GetCardName(), pCodeModule->GetExpansionName(), pCodeModule->GetReleaseDate().Format(), 
						pTextModule->GetExpansionName(), pTextModule->GetReleaseDate().Format());
				}
			}
		}
	}
#endif

	// Generate pseudo modules with all cards

	m_PseudoModules.push_back(new CAllSetModule(m_Modules, true));
	m_PseudoModules.push_back(new CAllSetModule(m_Modules, false));
}

CCardEntry* CCardStore::GetCard(LPCTSTR strCardName, BOOL bSimilarWords)
{
	for (CardModules::size_type i = 0; i < m_Modules.size(); ++i)
	{
		CCardModule* pModule = m_Modules[i];
		CCardEntry* pEntry = pModule->GetCard(strCardName, bSimilarWords);
		if (pEntry)
			return pEntry;
	}
	return NULL;
}

CCardEntry* CCardStore::GetCardByID(UINT uID)
{
	for (CardModules::size_type i = 0; i < m_Modules.size(); ++i)
	{
		CCardModule* pModule = m_Modules[i];
		CCardEntry* pEntry = pModule->GetCardByID(uID);
		if (pEntry)
			return pEntry;
	}
	return NULL;
}

CGdipBitmap CCardStore::GetBackBitmap()
{
	if (m_bShowMTGBitmaps)
	{
		if (m_LargeMTGBackBitmap.IsValid())
			return m_LargeMTGBackBitmap;
	}

	return m_LargeBackBitmap;
}

CGdipBitmap CCardStore::GetBackBitmap(Gdiplus::Size size)
{
	if (m_bShowMTGBitmaps)
	{
		if (m_LargeMTGBackBitmap.IsValid())
		{
			CGdipBitmap bitmap(m_LargeMTGBackBitmap);
			bitmap.Stretch(size);
			return bitmap;
		}
	}

	CGdipBitmap bitmap(m_LargeBackBitmap);
	bitmap.Stretch(size);
	return bitmap;
}

CGdipBitmap CCardStore::GetShadowBitmap(Gdiplus::Size size)
{
	CGdipBitmap bitmap(m_LargeShadowBitmap);
	bitmap.Stretch(size);
	return bitmap;
}

size_t CCardStore::GetModuleCount() const
{
	return m_Modules.size();
}

CCardModule* CCardStore::GetModule(int nIndex)
{
	return m_Modules[nIndex];
}

int CCardStore::GetModuleIndex(const CCardModule* pModule) const
{
	for (size_t i = 0; i < m_Modules.size(); ++i)
		if (m_Modules[i] == pModule)
			return i;

	return -1;
}

size_t CCardStore::GetPseudoModuleCount() const
{
	return m_PseudoModules.size();
}

CCardModule* CCardStore::GetPseudoModule(int nIndex)
{
	return m_PseudoModules[nIndex];
}

DWORD CCardStore::EnumCardStartPos() const
{
	return 0;
}

BOOL CCardStore::EnumCardNextPos(DWORD& dwPos, CCardEntry** ppCardEntry)
{
	int nModuleIndex = HIWORD(dwPos);
	int nCardIndex = LOWORD(dwPos);

	*ppCardEntry = NULL;

	if (nModuleIndex >= (int)m_Modules.size())
		return FALSE;

	CCardModule* pModule = (CCardModule*)m_Modules[nModuleIndex];
	if (pModule->GetExpansionName() == CCardStore::s_strTokenModuleName)
	{
		nCardIndex = 0;
		++nModuleIndex;		
		if (nModuleIndex >= (int)m_Modules.size())
			return FALSE;
		pModule = (CCardModule*)m_Modules[nModuleIndex];
	}

	if (nCardIndex >= (int)pModule->GetEntryCount())
		return FALSE;

	*ppCardEntry = pModule->GetCard(nCardIndex++);

	if (nCardIndex >= (int)pModule->GetEntryCount())
	{
		nCardIndex = 0;
		++nModuleIndex;
	}

	dwPos = MAKELONG(nCardIndex, nModuleIndex);

	return TRUE;
}

DWORD CCardStore::EnumTokenStartPos() const
{
	for (size_t i = 0; i < m_Modules.size(); ++i)
		if (m_Modules[i]->GetExpansionName() == CCardStore::s_strTokenModuleName)
		{
			return MAKELONG(0, i);
		}

	return (DWORD)-1;
}

BOOL CCardStore::EnumTokenNextPos(DWORD& dwPos, CCardEntry** ppCardEntry)
{
	if (dwPos == (DWORD)-1)
		return FALSE;

	int nModuleIndex = HIWORD(dwPos);
	int nCardIndex = LOWORD(dwPos);

	*ppCardEntry = NULL;

	if (nModuleIndex >= (int)m_Modules.size())
		return FALSE;

	CCardModule* pModule = (CCardModule*)m_Modules[nModuleIndex];
	if (pModule->GetExpansionName() != CCardStore::s_strTokenModuleName)
		return FALSE;

	if (nCardIndex >= (int)pModule->GetEntryCount())
		return FALSE;

	*ppCardEntry = pModule->GetCard(nCardIndex++);

	if (nCardIndex >= (int)pModule->GetEntryCount())
	{
		nCardIndex = 0;
		++nModuleIndex;
	}

	dwPos = MAKELONG(nCardIndex, nModuleIndex);

	return TRUE;
}

void CCardStore::SetSmallCardHeight(int nSmallCardHeight)
{
	m_SmallCardSize.Height = nSmallCardHeight;
	m_SmallCardSize.Width = static_cast<int>((float)m_SmallCardSize.Height * (float)LargeCardWidth / (float)LargeCardHeight);
}

//____________________________________________________________________________
//
// CCardModule
//

CCardModule::CCardModule(LPCTSTR strModuleName, HWND hwndProgress)
	: m_strModuleName(strModuleName)
	, m_bWhiteBorder(FALSE)
	, m_hIcon(NULL)
	, m_hLargeIcon(NULL)
	, m_nAlternateImageMethod(0)
	, m_bCoreSet(FALSE)
{
	InitializeEntries(hwndProgress);
}

CCardModule::CCardModule(LPCTSTR strExpansionName, LPCTSTR strExpansionAbbrevName, LPCTSTR strProductList)
	: m_bWhiteBorder(FALSE)
	, m_hIcon(NULL)
	, m_hLargeIcon(NULL)
	, m_nAlternateImageMethod(0)
	, m_strExpansionName(strExpansionName)
	, m_strExpansionAbbrevName(strExpansionAbbrevName)
{
	StringArray products;
	if (SplitString(strProductList, _T(","), products, _T(""), TRUE))
	{
		for (size_t i = 0; i < products.size(); ++i)
		{
			CCardProduct product(products[i]);
			if (product.IsValid())
				m_Products.push_back(product);
		}
	}
}

CCardModule::~CCardModule()
{
	for (CardEntries::size_type i = 0; i < m_Entries.size(); ++i)
		delete m_Entries[i];
}

void CCardModule::InitializeEntries(HWND hwndProgress)
{
	if (!m_strModuleName.IsEmpty())
	{
		m_strModulePath = g_pCoreApp->GetCardModulePath() + _T("\\") + m_strModuleName;
		if (!g_pCoreApp->LoadLibrary(m_strModulePath))
			return;
	}

	if (!m_strExpansionName.LoadString(IDS_EXPANSION))
	{
		g_pCoreApp->RestoreLibrary();
		return;
	}

	if (!m_strExpansionAbbrevName.LoadString(IDS_EXPANSION_ABBREV))
	{
		g_pCoreApp->RestoreLibrary();
		return;
	}

	CString strFirstCard;
	if (!strFirstCard.LoadString(IDS_FIRST_CARD))
	{
		g_pCoreApp->RestoreLibrary();
		return;
	}
	UINT uFirstCard = _ttoi(strFirstCard);

	CString strTotalCard;
	if (!strTotalCard.LoadString(IDS_TOTAL_CARD))
	{
		g_pCoreApp->RestoreLibrary();
		return;
	}
	UINT uTotalCard = _ttoi(strTotalCard);

	CString strWhiteBorder;
	if (!strWhiteBorder.LoadString(IDS_WHITE_BORDER))
		m_bWhiteBorder = FALSE;
	else
		m_bWhiteBorder = _ttoi(strWhiteBorder) != 0;

	CString strReleaseDate;
	if (!strReleaseDate.LoadStringW(IDS_RELEASE_DATE))
		m_ReleaseDate = COleDateTime();
	else
	{
		m_ReleaseDate.ParseDateTime(strReleaseDate);
		ATLTRACE(_T("%s - Release date - %s\n"),
			m_strExpansionName, m_ReleaseDate.Format());
	}

	m_strAlternateImageUrl.LoadString(IDS_ALT_IMG_URL);
	CString strAlternateImageMethod;
	if (!strAlternateImageMethod.LoadString(IDS_ALT_IMG_METHOD))
		m_nAlternateImageMethod = 0;
	else
		m_nAlternateImageMethod = _ttoi(strAlternateImageMethod);

	m_strMWSFolder.LoadString(IDS_MWS_FOLDER);

	if (hwndProgress)
		::PostMessage(hwndProgress, WM_APP_CARDSTORE_MODULE, uTotalCard,
			(LPARAM)new CString(m_strExpansionName));

	m_strExpansionPath = g_pCoreApp->GetModulePath() + _T("\\") + m_strExpansionAbbrevName;
	m_strBitmapPath = g_pCoreApp->GetBitmapPath() + _T("\\Cards\\") + m_strExpansionAbbrevName;
	m_strMWSFolder = g_pCoreApp->GetBitmapPath() + _T("\\Cards\\") + m_strMWSFolder;

	CString strProducts;
	strProducts.LoadString(IDS_PRODUCT_LIST);

	m_Products.clear();
	StringArray products;
	if (SplitString(strProducts, _T(","), products, _T(""), TRUE))
	{
		for (size_t i = 0; i < products.size(); ++i)
		{
			CCardProduct product(products[i]);
			if (product.IsValid())
				m_Products.push_back(product);
		}
	}

#ifdef SAVE_BITMAP
	CreateDirectory(m_strExpansionPath, NULL);
#endif

	for (UINT i = uFirstCard; i < uFirstCard + uTotalCard; ++i)
	{
		if (hwndProgress)
			::PostMessage(hwndProgress, WM_APP_CARDSTORE_CARD, i - uFirstCard + 1, NULL);


		CCardEntry* pEntry = new CCardEntry(i, this);
		if (!pEntry->IsValidEntry())
		{
			delete pEntry;	// Stop on first error
			break;
		}

/* No longer useful with the support of multiple card info for a single card
#if 1	// 8/22/2001: Added to verify that I don't put same card twice in the same module
		if (m_strExpansionName != CCardStore::s_strTokenModuleName &&
			_tcsicmp(pEntry->GetCardTypeText(), _T("Land")) &&
			pEntry->GetCardTypeText().Left(10).CompareNoCase(_T("Basic Land")))
			for (CardEntries::size_type j = 0; j < m_Entries.size(); ++j)
			{
				CCardEntry* pEntry1 = m_Entries[j];

				if (!_tcsicmp(pEntry1->GetCardName(), pEntry->GetCardName()))
				{
					MessageBox(NULL, _T("Duplicate card found: ") + pEntry->GetCardName(), _T("Error"), MB_OK);
				}
			}
#endif
*/

		m_Entries.push_back(pEntry);
		
		int nInstanceCount = GetInstanceCount(pEntry->GetCardName()) + 1;
		m_InstanceCount[pEntry->GetCardName()] = nInstanceCount;
	}

	CString strModuleIconID;
	if (!strModuleIconID.LoadString(IDS_MODULE_ICON_ID))
	{
		g_pCoreApp->RestoreLibrary();
		return;
	}
	UINT uModuleIconID = _ttoi(strModuleIconID);
	m_hIcon = //g_pCoreApp->LoadIcon(uModuleIconID);
		(HICON)LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(uModuleIconID), IMAGE_ICON, 16, 16, LR_DEFAULTCOLOR);

	CString strModuleLargeIconID;
	if (!strModuleLargeIconID.LoadString(IDS_MODULE_LARGE_ICON_ID))
	{
		g_pCoreApp->RestoreLibrary();
		return;
	}
	UINT uModuleLargeIconID = _ttoi(strModuleLargeIconID);
	m_hLargeIcon = g_pCoreApp->LoadIcon(uModuleLargeIconID);

	// TODO: move core set information into string table

	if (m_strExpansionName == _T("Unlimited Edition") ||
		m_strExpansionName == _T("Revised Edition") ||
		m_strExpansionName == _T("Fourth Edition") ||
		m_strExpansionName == _T("Fifth Edition") ||
		m_strExpansionName == _T("Sixth Edition") ||
		m_strExpansionName == _T("Seventh Edition") ||
		m_strExpansionName == _T("Eighth Edition") ||
		m_strExpansionName == _T("Ninth Edition") ||
		m_strExpansionName == _T("Tenth Edition") ||
		m_strExpansionName == _T("Magic 2010") ||
		m_strExpansionName == _T("Magic 2011") ||
		m_strExpansionName == _T("Magic 2012"))
		m_bCoreSet = TRUE;
	else
		m_bCoreSet = FALSE;

	g_pCoreApp->RestoreLibrary();
}

CardEntries::size_type CCardModule::GetEntryCount() const
{
	return m_Entries.size();
}

CCardEntry* CCardModule::GetCard(LPCTSTR strCardName, BOOL bSimilarWords) const
{
	return GetCardImpl(m_Entries, strCardName, bSimilarWords);
}

CCardEntry* CCardModule::GetCardImpl(const CardEntries& entries, LPCTSTR strCardName, BOOL bSimilarWords)
{
	CString strCardName1;

	if (!bSimilarWords)
		strCardName1 = strCardName;
	else
		for (UINT i = 0; i < _tcslen(strCardName); ++i)
			if (_istalpha(strCardName[i]))
				strCardName1 += strCardName[i];
			else if(strCardName[i]==CString::XCHAR(_T("â")))
				strCardName1 += _T("a");
			else if(strCardName[i]==CString::XCHAR(_T("à")))
				strCardName1 += _T("a");
			else if(strCardName[i]==CString::XCHAR(_T("á")))
				strCardName1 += _T("a");
			else if(strCardName[i]==CString::XCHAR(_T("Æ")))
				strCardName1 += _T("AE");
			else if(strCardName[i]==CString::XCHAR(_T("é")))
				strCardName1 += _T("e");
			else if(strCardName[i]==CString::XCHAR(_T("ú")))
				strCardName1 += _T("u");
			else if(strCardName[i]==CString::XCHAR(_T("û")))
				strCardName1 += _T("u");
			else if(strCardName[i]==CString::XCHAR(_T(":")))
				strCardName1 += _T("");

	for (CardEntries::size_type i = 0; i < entries.size(); ++i)
	{
		CCardEntry* pEntry = entries[i];

		CString strEntryName(pEntry->GetCardName());
		CString strEntryName1;

		if (!bSimilarWords)
			strEntryName1 = strEntryName;
		else
			for (int j = 0; j < strEntryName.GetLength(); ++j)
				if (_istalpha(strEntryName[j]))
					strEntryName1 += strEntryName[j];
	
		if (!_tcsicmp(strEntryName1, strCardName1))
			return pEntry;

		strEntryName = pEntry->GetResourceCardName();
		if (!bSimilarWords)
			strEntryName1 = strEntryName;
		else
		{
			strEntryName1.Empty();
			for (int j = 0; j < strEntryName.GetLength(); ++j)
				if (_istalpha(strEntryName[j]))
					strEntryName1 += strEntryName[j];
		}
	
		if (!_tcsicmp(strEntryName1, strCardName1))
			return pEntry;
	}
	return NULL;
}

CCardEntry* CCardModule::GetCardByID(UINT uID) const
{
	for (CardEntries::size_type i = 0; i < m_Entries.size(); ++i)
	{
		CCardEntry* pEntry = m_Entries[i];
		
		if (pEntry->GetID() == uID)
			return pEntry;
	}
	return NULL;
}

CCardEntry* CCardModule::GetCard(int nIndex) const
{
	return (CCardEntry*)m_Entries[nIndex];
}

CardEntries CCardModule::GenerateProduct(size_t nProductIndex, bool bRemoveBasicLands, CMTRNG& random) const
{
	return GenerateProductImpl(m_Entries, nProductIndex, bRemoveBasicLands, random);
}

int CCardModule::GetInstanceCount(LPCTSTR strCardName) const
{
	std::map<CString, int>::const_iterator j = m_InstanceCount.find(strCardName);
	if (j == m_InstanceCount.end())
		return 0;
	return j->second;
}

CardEntries CCardModule::GenerateProductImpl(const CardEntries& entries, size_t nProductIndex, bool bRemoveBasicLands, CMTRNG& random) const
{
	CardEntries cards;

	if (nProductIndex >= m_Products.size())
		return cards;

	const CCardProduct& product(m_Products[nProductIndex]);
	const std::vector<std::pair<RarityType, int>>& details(product.GetProductDetails());
	if (!details.size())
		return cards;

	std::set<size_t> selectedCards;
	int nBasicLandCount = 0;
	int nReplaceMR = 0;
	int nReplaceMRChance = -1;

	// Evaluate Mythic Rare chances
	for (size_t i = 0; i < details.size(); ++i)
	{
		if (details[i].first == RarityType::MythicRare)
			nReplaceMRChance = details[i].second;

		if ((nReplaceMRChance != -1) && (details[i].first == RarityType::Rare))
		{
			for (int j = 0; j < details[i].second; ++j)
				if (random.genrand_int32() % nReplaceMRChance == 0)
					++nReplaceMR;
		}
	}

	for (size_t i = 0; i < details.size(); ++i)
	{
		RarityType rarity(details[i].first);
		int nCount(details[i].second);

		if (rarity == RarityType::BasicLand)
		{
			if (!bRemoveBasicLands)
				nBasicLandCount += nCount;
			continue;
		}
		if (rarity == RarityType::MythicRare)
			nCount =  nReplaceMR;
		if (rarity == RarityType::Rare)
			nCount -= nReplaceMR;
		if (!nCount) continue;

		// Gather the pool of cards to randomly pick from

		std::vector<size_t> pool;
		for (CardEntries::size_type j = 0; j < entries.size(); ++j)
			if (entries[j]->GetRarity() == rarity && !selectedCards.count(j))
				pool.push_back(j);

		if (!pool.size())
			continue;
	
		if (static_cast<size_t>(nCount) > pool.size())
		{
			for (size_t j = 0; j < pool.size(); ++j)
			{
				selectedCards.insert(pool[j]);
				cards.push_back(entries[pool[j]]);
			}
			continue;
		}

		for (int j = 0; j < nCount; ++j)
		{
			size_t nIndex = random.genrand_int32() % pool.size();
			size_t nEntryIndex = pool[nIndex];
			
			selectedCards.insert(nEntryIndex);
			pool.erase(pool.begin() + nIndex);

			cards.push_back(entries[nEntryIndex]);
		}
	}

	if (nBasicLandCount)
	{
		LPCTSTR basicLandTypes[] = {
			_T("Swamp"),
			_T("Mountain"),
			_T("Plains"),
			_T("Island"),
			_T("Forest") };

		int nOffset = random.genrand_int32() % ARRAY_SIZE(basicLandTypes);

		int nAddedCount = 0;
		for (int i = 0; i < ARRAY_SIZE(basicLandTypes); ++i)
		{
			LPCTSTR strCardName = basicLandTypes[(i + nOffset) % ARRAY_SIZE(basicLandTypes)];

			int nCount;
			if (i == ARRAY_SIZE(basicLandTypes) - 1)
				nCount = nBasicLandCount - nAddedCount;
			else
			{
				nCount = (nBasicLandCount - nAddedCount) / (ARRAY_SIZE(basicLandTypes) - i);
				nAddedCount += nCount;
			}

			if (!nCount)
				continue;

			// Gather the pool of cards to randomly pick from

			std::vector<size_t> pool;
			for (CardEntries::size_type j = 0; j < entries.size(); ++j)
				if (entries[j]->GetRarity() == RarityType::BasicLand && !entries[j]->GetCardName().Find(strCardName))
					pool.push_back(j);

			if (!pool.size())
				continue;

			for (int j = 0; j < nCount; ++j)
				cards.push_back(entries[pool[j % pool.size()]]);
		}
	}

	return cards;
}

//____________________________________________________________________________
//
// CAllSetModule
//

LPCTSTR CAllSetModule::s_strExpansionName = _T("Combined Set");
LPCTSTR CAllSetModule::s_strExpansionAbbrevName = _T("CBS");
LPCTSTR CAllSetModule::s_strProductList = _T("\"Combined Set Starter Box\":R-3:U-10:C-32:BL-30,\"Combined Set Booster Pack\":R-1:U-3:C-11");
LPCTSTR CAllSetModule::s_strExpansionName2 = _T("Combined Set (no BotArena)");
LPCTSTR CAllSetModule::s_strExpansionAbbrevName2 = _T("CBS2");
LPCTSTR CAllSetModule::s_strProductList2 = _T("\"Combined Set Starter Box (no BotArena)\":R-3:U-10:C-32:BL-30,\"Combined Set Booster Pack (no BotArena)\":R-1:U-3:C-11");

CAllSetModule::CAllSetModule(const CardModules& modules, bool bIncludeBOACards)
	: CCardModule(
		bIncludeBOACards ? s_strExpansionName : s_strExpansionName2, 
		bIncludeBOACards ? s_strExpansionAbbrevName : s_strExpansionAbbrevName2, 
		bIncludeBOACards ? s_strProductList : s_strProductList2)
{
	SHFILEINFO sfi;
	SHGetFileInfo(GetModuleFileName(), 0, &sfi, sizeof(SHFILEINFO), SHGFI_SMALLICON | SHGFI_ICON);
	m_hIcon = sfi.hIcon;

	SHGetFileInfo(GetModuleFileName(), 0, &sfi, sizeof(SHFILEINFO), SHGFI_LARGEICON | SHGFI_ICON);
	m_hLargeIcon = sfi.hIcon;

	InitializeEntries(modules, bIncludeBOACards);
}

void CAllSetModule::InitializeEntries(const CardModules& modules, bool bIncludeBOACards)
{
	// Sort modules by release dates

	struct Sorting 
	{
		static bool ByReleaseDate(const CCardModule* a, const CCardModule* b) 
		{ 
			return a->GetReleaseDate() > b->GetReleaseDate();
		}
	};

	m_RefModules = modules;
	std::sort(m_RefModules.begin(), m_RefModules.end(), Sorting::ByReleaseDate);

	std::set<CString> processedCards;

	for (size_t i = 0; i < m_RefModules.size(); ++i)
	{
		const CCardModule* pModule = m_RefModules[i];

		if (pModule->GetExpansionName() == CCardStore::s_strTokenModuleName ||
			(!bIncludeBOACards && pModule->GetExpansionName() == _T("BotArena")))
			continue;

		size_t nEntryCount = pModule->GetEntryCount();
		for (size_t j = 0; j < nEntryCount; ++j)
		{
			CCardEntry* pEntry = pModule->GetCard(j);
			if (!processedCards.count(pEntry->GetCardName()))
			{
				m_RefEntries.push_back(pEntry);
				processedCards.insert(pEntry->GetCardName());
			}
		}
	}
}

CardEntries CAllSetModule::GenerateProduct(size_t nProductIndex, bool bRemoveBasicLands, CMTRNG& random) const
{
	return GenerateProductImpl(m_RefEntries, nProductIndex, bRemoveBasicLands, random);
}

size_t CAllSetModule::GetEntryCount() const
{
	return m_RefEntries.size();
}

CCardEntry* CAllSetModule::GetCard(LPCTSTR strCardName, BOOL bSimilarWords) const
{
	return GetCardImpl(m_RefEntries, strCardName, bSimilarWords);	
}

CCardEntry* CAllSetModule::GetCardByID(UINT uID) const
{
	for (CardEntries::size_type i = 0; i < m_RefEntries.size(); ++i)
	{
		CCardEntry* pEntry = m_Entries[i];
		
		if (pEntry->GetID() == uID)
			return pEntry;
	}
	return NULL;
}

CCardEntry* CAllSetModule::GetCard(int nIndex) const
{
	return (CCardEntry*)m_RefEntries[nIndex];
}

//____________________________________________________________________________
//
// CCardEntry
//

const Gdiplus::Rect CCardEntry::s_LargeCardCaptionRect(23, 13, 227 - 23, 25 - 13);
const Gdiplus::Rect CCardEntry::s_LargeCardTypeRect(23, 187, 222 - 23, 199 - 187);
const Gdiplus::Rect CCardEntry::s_LargeCardTextRect(27, 204, 218 - 27, 301 - 204);
const Gdiplus::Rect CCardEntry::s_LargeCardPTRect(23, 306, 222 - 23, 326 - 306);

const float CCardEntry::s_AlignRightStart = (float)180.0 / (float)CCardStore::LargeCardWidth;
const float CCardEntry::s_GraphicStart = (float)40.0 / (float)CCardStore::LargeCardHeight;
const float CCardEntry::s_GraphicEnd = (float)190.0 / (float)CCardStore::LargeCardHeight;
const float CCardEntry::s_TextStart = (float)207.0 / (float)CCardStore::LargeCardHeight;
const float CCardEntry::s_CreatureStart = (float)300.0 / (float)CCardStore::LargeCardHeight;

CCardEntry::CCardEntry(UINT uID, CCardModule* pModule)
	: m_uID(uID)
	, m_pModule(pModule)
	, m_CardType(CardType::Null)
	, m_bWhiteBorder(pModule->IsWhiteBorder())
	, m_bTextInitialized(FALSE)
	, m_Rarity(RarityType::Unknown)
	, m_uLargeBitmap(0)
{
	InitializeText();
	AssignStandardBitmap();

	m_nInstanceNumber = pModule->GetInstanceCount(m_strCardName) + 1;
}

CCardEntry::~CCardEntry()
{
}

void CCardEntry::InitializeText()
{
	if (m_bTextInitialized)
		return;

	if (!m_strRawText.LoadString(m_uID))
		return;

	StringArray strings;
	SplitString(m_strRawText, _T("\n"), strings);

//	ATLTRACE(_T("%d, %s\n"), m_uID, pStrings->GetAt(0));

	for (size_t i = 0; i < strings.size(); i++)
	{
		const CString& rField = strings[i];

//		ATLTRACE("CCardEntry::InitializeText() - (%d/%d) '%s'\n",
//			i, pStrings->GetSize(), rField);

		switch(i)
		{
		case 0: 
			{
				m_strResourceCardName = rField;
				int nIndex = m_strResourceCardName.Find(_T('('));
				if (nIndex != -1)
				{
					m_strCardName = m_strResourceCardName.Left(nIndex);
					m_strCardName.Trim();
				}
				else
					m_strCardName = rField; 

				break;
			}
		case 1: 
			{
				PrepareTextWithSymbols(rField, m_strCastCostExtra, m_strCastCost);
				break;
			}
		case 2: m_strCardType = rField; break;
		case 3: 
			{
				m_strExpansionName = rField; 

				int nIndex = m_strExpansionName.Find(_T(","));
				if (nIndex == -1)
				{
					if ((!m_strCardName.Find(_T("Forest")) ||
						!m_strCardName.Find(_T("Island")) ||
						!m_strCardName.Find(_T("Plains")) ||
						!m_strCardName.Find(_T("Swamp")) ||
						!m_strCardName.Find(_T("Mountain"))) &&
						(!m_strCardType.Find(_T("Land")) || !m_strCardType.Find(_T("Basic Land"))))
						m_Rarity = RarityType::BasicLand;
					else
						m_Rarity = RarityType::Common;
				}
				else
				{
					m_Rarity = RarityType::FromString(m_strExpansionName.Mid(nIndex + 1));
					m_strExpansionName = m_strExpansionName.Left(nIndex);
					m_strExpansionName.Trim();
				}

				if (m_strExpansionName != m_pModule->GetExpansionAbbrevName())
					LOG_ERROR(_T("Card %s in expansion %s(%s) has incorrect module expansion name of %s"), m_strCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName(), m_strExpansionName);

				break;
			}
		case 4: 
			{
				PrepareTextWithSymbols(rField, m_strCardTextExtra, m_strCardText);
				break;
			}
		case 5: 
			{
				m_strPowerTough = rField; 

				for (int i = 0; i < m_strPowerTough.GetLength(); ++i)
				{
					TCHAR ch(m_strPowerTough[i]);

					if (isdigit(ch) || ch == _T('/') || ch == _T('*') || ch == _T('+') || ch == _T('X') || ch == _T('-'))
						continue;

					LOG_ERROR(_T("Card %s in expansion %s(%s) has unknown power tough format of %s"), m_strCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName(), m_strPowerTough);

					break;
				}

				break;
			}
		}
	}

	{
		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(NULL, m_strResourceCardName, m_uID, &m_strCardCodePath));
		if (cpCard.GetPointer())
		{
			m_CardType = cpCard->GetCardType();

			ATLASSERT(m_strPowerTough.IsEmpty() || (m_CardType & CardType::Creature).Any() || (m_CardType & CardType::Planeswalker).Any());

			if ((m_CardType & CardType::Creature).Any())
			{
				if (m_strPowerTough.IsEmpty())
					LOG_ERROR(_T("Creature card %s in expansion %s(%s) has missing power tough string"), m_strResourceCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName());
			}
			else
				if ((m_CardType & CardType::Planeswalker).Any())
				{
					if (m_strPowerTough.IsEmpty())
						LOG_ERROR(_T("Planeswalkerr card %s in expansion %s(%s) has missing loyalty string"), m_strResourceCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName());
				}
				else
					if (!m_strPowerTough.IsEmpty())
					{
						LOG_ERROR(_T("Non-creature card %s in expansion %s(%s) has power tough string of %s"), m_strResourceCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName(), m_strPowerTough);
						m_strPowerTough.Empty();
					}
		}
		else
		{
			counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateToken(NULL, m_strResourceCardName, m_uID, &m_strCardCodePath));
			if (cpCard.GetPointer())
			{
				m_CardType = cpCard->GetCardType();

				//ATLASSERT((m_CardType & CardType::Token).Any());

				ATLASSERT(m_strPowerTough.IsEmpty() || (m_CardType & CardType::Creature).Any());

				if ((m_CardType & CardType::Creature).Any())
				{
					if (m_strPowerTough.IsEmpty())
						LOG_ERROR(_T("Creature token %s in expansion %s(%s) has missing power tough string"), m_strResourceCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName());
				}
				else
					if (!m_strPowerTough.IsEmpty())
					{
						LOG_ERROR(_T("Non-creature token %s in expansion %s(%s) has power tough string of %s"), m_strResourceCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName(), m_strPowerTough);
						m_strPowerTough.Empty();
					}
			}
			else
			{
				LOG_ERROR(_T("Card %s in expansion %s(%s) has no card code"), m_strResourceCardName, m_pModule->GetExpansionName(), m_pModule->GetExpansionAbbrevName());
			}
		}
	}

	if (m_strExpansionName == CCardStore::s_strTokenModuleName)
	{
		m_strCastCost.Empty();
		m_strCastCostExtra.Empty();
	}

	m_bTextInitialized = TRUE;
}

void CCardEntry::InitializeBitmap()
{
	// Initialize JIT rendered bitmaps

	Gdiplus::Size largeBitmapSize(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight);

	if (!m_LargeBitmap.IsValid())
	{
		m_LargeBitmap.Load(g_pCoreApp->GetModuleFileName(), m_uLargeBitmap);
		if (!m_LargeBitmap.IsValid())
		{
			LOG_ERROR(_T("Failed to load bitmap %s"), m_strCardName);
			ATLASSERT(false);
			throw E_FAIL;
		}

		m_LargeBitmap.SetModified();

		DrawBitmapText(m_LargeBitmap, 
			CCardStore::GetInstance()->GetSmallFont(), 
			CMTGSymbol(),
			s_LargeCardCaptionRect, s_LargeCardTypeRect, s_LargeCardTextRect, s_LargeCardPTRect);

		DrawBorder(m_LargeBitmap, 10, !m_bWhiteBorder);
	}

	if (!m_LargeBitmapRotated.IsValid())
	{
		m_LargeBitmapRotated = m_LargeBitmap;
		m_LargeBitmapRotated.RotateFlip(Gdiplus::Rotate90FlipNone);
		if (!m_LargeBitmapRotated.IsValid())
		{
			LOG_ERROR(_T("Failed to rotate bitmap %s"), m_strCardName);
			ATLASSERT(false);
			throw E_FAIL;
		}
	}

	// Use MTG symbols

	if (!m_LargeBitmap2.IsValid())
	{
		m_LargeBitmap2.Load(g_pCoreApp->GetModuleFileName(), m_uLargeBitmap);
		if (!m_LargeBitmap2.IsValid())
		{
			LOG_ERROR(_T("Failed to load bitmap %s"), m_strCardName);
			ATLASSERT(false);
			throw E_FAIL;
		}

		m_LargeBitmap2.SetModified();

		DrawBitmapText(
			m_LargeBitmap2, 
			CCardStore::GetInstance()->GetSmallFont(), 
			CCardStore::GetInstance()->GetSmallSymbols(),
			s_LargeCardCaptionRect, s_LargeCardTypeRect, s_LargeCardTextRect, s_LargeCardPTRect/*,
			m_LargeCardItemRects*/);

		DrawBorder(m_LargeBitmap2, 10, !m_bWhiteBorder);
	}

	if (!m_LargeBitmapRotated2.IsValid())
	{	
		m_LargeBitmapRotated2 = m_LargeBitmap2;
		m_LargeBitmapRotated2.RotateFlip(Gdiplus::Rotate90FlipNone);
		if (!m_LargeBitmapRotated2.IsValid())
		{
			LOG_ERROR(_T("Failed to rotate bitmap %s"), m_strCardName);
			ATLASSERT(false);
			throw E_FAIL;
		}
	}
}

void CCardEntry::AssignStandardBitmap()
{
	if ((m_CardType & CardType::Artifact).Any())
	{
		m_uLargeBitmap = IDB_ARTIFACTCARD_LARGE;
		return;
	}

	CardType cardColor(m_CardType & CardType::_ColorMask);

	if (GetRarity() == RarityType::BasicLand)
	{
		if (GetCardName().Left(6) == _T("Plains"))
			cardColor |= CardType::White;
		else
		if (GetCardName().Left(5) == _T("Swamp"))
			cardColor |= CardType::Black;
		else
		if (GetCardName().Left(6) == _T("Forest"))
			cardColor |= CardType::Green;
		else
		if (GetCardName().Left(6) == _T("Island"))
			cardColor |= CardType::Blue;
		else
		if (GetCardName().Left(8) == _T("Mountain"))
			cardColor |= CardType::Red;
	}

	switch (cardColor.Get())
	{
	case CardType::Green: 
		m_uLargeBitmap = IDB_GREENCARD_LARGE;
		break;
	case CardType::Black: 
		m_uLargeBitmap = IDB_BLACKCARD_LARGE;
		break;
	case CardType::Blue: 
		m_uLargeBitmap = IDB_BLUECARD_LARGE;
		break;
	case CardType::Red: 
		m_uLargeBitmap = IDB_REDCARD_LARGE;

		break;
	case CardType::White: 
		m_uLargeBitmap = IDB_WHITECARD_LARGE;
		break;
	default:
		m_uLargeBitmap = IDB_GOLDCARD_LARGE;
		break;
	}
}

void CCardEntry::DrawBorder(Gdiplus::Bitmap* pBitmap, int nBorderSize, BOOL bBlack)
{
	std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pBitmap)); 
	if (!apGraphics.get())
		return;

	Gdiplus::Rect rect(0, 0, pBitmap->GetWidth(), pBitmap->GetHeight());
	rect.Inflate(-nBorderSize / 2, -nBorderSize / 2);

	Gdiplus::Pen pen(
		bBlack ? Gdiplus::Color(0, 0, 0) : Gdiplus::Color(255, 255, 255), (Gdiplus::REAL)nBorderSize);

	apGraphics->DrawRectangle(&pen, rect);
}

void CCardEntry::DrawBitmapText(Gdiplus::Bitmap* pBitmap, 
								Gdiplus::Font* pTextFont, 
								const CMTGSymbol& symbols,
								const Gdiplus::Rect& captionRect,
								const Gdiplus::Rect& typeRect,
								const Gdiplus::Rect& textRect,
								const Gdiplus::Rect& pTRect/*,
								Gdiplus::Rect* pItemRects*/)
{
	std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pBitmap)); 
	if (!apGraphics.get())
		return;

	Gdiplus::SolidBrush textBrush(Gdiplus::Color(0, 0, 0));

	CardType cardColor(m_CardType & CardType::_ColorMask);

	if (cardColor == CardType::Red ||
		cardColor == CardType::Artifact ||
		cardColor == CardType::Green ||
		cardColor == CardType::Black)
		textBrush.SetColor(Gdiplus::Color(255, 255, 255));

	Gdiplus::StringFormat stringFormat(Gdiplus::StringFormatFlagsNoWrap);
	stringFormat.SetLineAlignment(Gdiplus::StringAlignmentCenter);

	USES_CONVERSION;

	{	// Card name
		Gdiplus::RectF captionRectRelaxed((Gdiplus::REAL)captionRect.X, (Gdiplus::REAL)captionRect.Y, (Gdiplus::REAL)captionRect.Width, (Gdiplus::REAL)captionRect.Height);
		captionRectRelaxed.Inflate(0, 10);
		captionRectRelaxed.Offset(0, 1);
		
		apGraphics->DrawString(T2CW(m_strCardName), -1, pTextFont, captionRectRelaxed, &stringFormat, &textBrush);

		//if (pItemRects)
		//	apGraphics->MeasureString(T2CW(m_strCardName), -1, pTextFont, captionRectRelaxed, &stringFormat, &pItemRects[CardName]);
	}

	{	// Card type
		Gdiplus::RectF typeRectRelaxed((Gdiplus::REAL)typeRect.X, (Gdiplus::REAL)typeRect.Y, (Gdiplus::REAL)typeRect.Width, (Gdiplus::REAL)typeRect.Height);
		typeRectRelaxed.Inflate(0, 10);
		typeRectRelaxed.Offset(0, 1);
		
		apGraphics->DrawString(T2CW(m_strCardType), -1, pTextFont, typeRectRelaxed, &stringFormat, &textBrush);

		//if (pItemRects)
		//	apGraphics->MeasureString(T2CW(m_strCardType), -1, pTextFont, typeRectRelaxed, &stringFormat, &pItemRects[CardType_]);
	}

	stringFormat.SetAlignment(Gdiplus::StringAlignmentFar);

	{	// Expansion
		Gdiplus::RectF expRectRelaxed((Gdiplus::REAL)typeRect.X, (Gdiplus::REAL)typeRect.Y, (Gdiplus::REAL)typeRect.Width, (Gdiplus::REAL)typeRect.Height);
		expRectRelaxed.Inflate(0, 10);
		expRectRelaxed.Offset(0, 1);
		
		apGraphics->DrawString(T2CW(m_strExpansionName), -1, pTextFont, expRectRelaxed, &stringFormat, &textBrush);
		
		//if (pItemRects)
		//	apGraphics->MeasureString(T2CW(m_strExpansionName), -1, pTextFont, expRectRelaxed, &stringFormat, &pItemRects[Expansion]);
	}

	if (!m_strPowerTough.IsEmpty())
	{	// PT type
		Gdiplus::RectF pTRectRelaxed((Gdiplus::REAL)pTRect.X, (Gdiplus::REAL)pTRect.Y, (Gdiplus::REAL)pTRect.Width, (Gdiplus::REAL)pTRect.Height);
		pTRectRelaxed.Inflate(0, 10);
		pTRectRelaxed.Offset(0, 1);

		apGraphics->DrawString(T2CW(m_strPowerTough), -1, pTextFont, pTRectRelaxed, &stringFormat, &textBrush);

		//if (pItemRects)
		//	apGraphics->MeasureString(T2CW(m_strPowerTough), -1, pTextFont, pTRectRelaxed, &stringFormat, &pItemRects[PowerTough]);
	}

	{	// Casting cost

		Gdiplus::RectF costRectRelaxed((Gdiplus::REAL)captionRect.X, (Gdiplus::REAL)captionRect.Y, (Gdiplus::REAL)captionRect.Width, (Gdiplus::REAL)captionRect.Height);
		costRectRelaxed.Inflate(0, 10);
		costRectRelaxed.Offset(0, 1);
		
		if (symbols.Count())
			DrawMagicText(*apGraphics, RGB(0,0,0), *pTextFont, symbols,
				m_strCastCostExtra,
				costRectRelaxed, Gdiplus::SizeF(0, 0), FALSE, FALSE, TRUE, Gdiplus::StringAlignmentFar, Gdiplus::StringAlignmentCenter);
		else
			apGraphics->DrawString(T2CW(m_strCastCost), -1, pTextFont, costRectRelaxed, &stringFormat, &textBrush);

		/*
		if (pItemRects)
		{
			DrawMagicText(*apGraphics, RGB(0,0,0), *pTextFont, *pSymbolFont, strCastCost,
				costRectRelaxed, Gdiplus::Size(0, 0), TRUE, FALSE, Gdiplus::StringAlignmentFar, Gdiplus::StringAlignmentCenter);

			pItemRects[CastingCost] = costRectRelaxed;
		}
		*/
	}

	std::auto_ptr<Gdiplus::Font> apCurrentTextFont(pTextFont->Clone());
	CMTGSymbol currentSymbols(symbols);

	int nMargin = 5;

	Gdiplus::RectF calcRect;

	stringFormat.SetTrimming(Gdiplus::StringTrimmingWord);
	stringFormat.SetAlignment(Gdiplus::StringAlignmentNear);
	stringFormat.SetLineAlignment(Gdiplus::StringAlignmentCenter);

	BOOL bFit = FALSE;
	do 
	{
		calcRect = Gdiplus::RectF((Gdiplus::REAL)textRect.X, (Gdiplus::REAL)textRect.Y, (Gdiplus::REAL)textRect.Width, (Gdiplus::REAL)textRect.Height);
		calcRect.Height += 1000;

		if (currentSymbols.Count())
			DrawMagicText(*apGraphics, RGB(0,0,0), *apCurrentTextFont, currentSymbols, m_strCardTextExtra,
				calcRect, Gdiplus::SizeF((Gdiplus::REAL)nMargin, (Gdiplus::REAL)nMargin), 
				TRUE, // calcRect
				NULL, // image attributes 
				TRUE, // antialias 
				Gdiplus::StringAlignmentNear, 
				Gdiplus::StringAlignmentCenter);
		else
		{
			Gdiplus::RectF layoutRect(calcRect);
			apGraphics->MeasureString(T2CW(m_strCardText), -1, apCurrentTextFont.get(), layoutRect, &stringFormat, &calcRect);
		}

		bFit = (calcRect.Height <= textRect.Height);
		if (!bFit)
		{
			if (nMargin)
				--nMargin;
			else
			{
				std::auto_ptr<Gdiplus::Font> apSmallerTextFont(ResizeFont(*apCurrentTextFont, -1));
				if (!apSmallerTextFont.get())
				{
					ATLASSERT(false);
					break;
				}
				apCurrentTextFont = apSmallerTextFont;

				if (currentSymbols.Count())
				{
					currentSymbols = CMTGSymbol(currentSymbols, Gdiplus::Size(currentSymbols.Size().Width - 1, currentSymbols.Size().Height - 1));
				}
			}
		}
	} while (!bFit);

	calcRect = Gdiplus::RectF((Gdiplus::REAL)textRect.X, (Gdiplus::REAL)textRect.Y, (Gdiplus::REAL)textRect.Width, (Gdiplus::REAL)textRect.Height);

	if (currentSymbols.Count())
		DrawMagicText(*apGraphics, RGB(0, 0, 0), *apCurrentTextFont, currentSymbols, m_strCardTextExtra,
			calcRect, Gdiplus::SizeF((Gdiplus::REAL)nMargin, (Gdiplus::REAL)nMargin), FALSE, NULL, TRUE, 
			Gdiplus::StringAlignmentNear, Gdiplus::StringAlignmentCenter);
	else
		apGraphics->DrawString(T2CW(m_strCardText), -1, apCurrentTextFont.get(), calcRect, &stringFormat, &textBrush);

	//if (pItemRects)
	//	pItemRects[Description] = textRect;
}

Gdiplus::Rect CCardEntry::RotateRect(const Gdiplus::Rect& rect, const Gdiplus::Size& size)
{
	return Gdiplus::Rect(size.Height - (rect.Y + rect.Height), rect.X, 
		rect.Height, rect.Width);
}

void CCardEntry::InitializeMTGBitmap()
{
	if (!m_LargeMTGBitmap.IsValid())
	{
		if (!LoadMWSGraphicFile())
		{
			CString strPath;
			strPath.Format(_T("%s\\%u.PNG"), m_pModule->GetBitmapPath(), m_uID);
			if (!PathFileExists(strPath))
			{
				strPath.Format(_T("%s\\%u.JPG"), m_pModule->GetBitmapPath(), m_uID);
				if (!PathFileExists(strPath))
				{
					if (!DownloadMTGBitmapFromInternet(strPath))
						return;
				}
			}

			m_LargeMTGBitmap.Load(strPath);
		}
	}

	if (m_LargeMTGBitmap.IsValid())
	{
		m_LargeMTGBitmapRotated = m_LargeMTGBitmap;
		m_LargeMTGBitmapRotated.RotateFlip(Gdiplus::Rotate90FlipNone);
		//m_LargeMTGBitmapRotated.FreeRotate(45.0f);
	}
}

#pragma push_macro("new")
#ifdef new
#undef new
#endif

bool CCardEntry::DownloadMTGBitmapFromInternet(CString& strPath)
{
	strPath.Empty();

	CString strUrl(m_pModule->GetAlternateImageUrl());

	if (strUrl.IsEmpty())
		return false;

	if (m_pModule->GetAlternateImageMethod() != 1)
		return false;

	// Method 1, generate the rest of the url by replacing spaces in card names with _ characters

	CString strCardName(m_strCardName);
	strCardName.Replace(_T(' '), _T('_'));
	strCardName.Replace(_T("'"), _T(""));
	strCardName.Replace(_T(":"), _T(""));

	strUrl += strCardName + _T(".jpg");

	CString strTempPath;
	strTempPath.Format(_T("%s\\%s.jpg"), m_pModule->GetBitmapPath(), strCardName);

	bool bResult = false;
	do
	{
		DWORD dwResult = GetInternetFile(strUrl, strTempPath);
		if (dwResult)
			break;

		std::auto_ptr<Gdiplus::Bitmap> apBitmap(Gdiplus::Bitmap::FromFile(T2CW(strTempPath)));
		if (!apBitmap.get())
			break;

		std::auto_ptr<Gdiplus::Bitmap> apStretchedBitmap(
			StretchBitmap(apBitmap.get(), Gdiplus::Size(CCardStore::LargeNoBorderWidth, CCardStore::LargeNoBorderHeight)));
		if (!apStretchedBitmap.get())
			break;

		std::auto_ptr<Gdiplus::Bitmap> apLargeBitmap(
			new Gdiplus::Bitmap(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight, apBitmap->GetPixelFormat()));
		if (!apLargeBitmap.get())
			break;

		std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(apLargeBitmap.get())); 
		if (!apGraphics.get())
			break;

		apGraphics->Clear(
			m_pModule->IsWhiteBorder() ? Gdiplus::Color(255, 255, 255) : Gdiplus::Color(0, 0, 0));

		if (apGraphics->DrawImage(apStretchedBitmap.get(),
			(CCardStore::LargeCardWidth - CCardStore::LargeNoBorderWidth) / 2,
			(CCardStore::LargeCardHeight - CCardStore::LargeNoBorderHeight) / 2) != Gdiplus::Ok)
			break;

		strPath.Format(_T("%s\\%u.JPG"), m_pModule->GetBitmapPath(), m_uID);

		CLSID jpgClsid;
		GetEncoderClsid(L"image/jpeg", &jpgClsid);

		bResult = apLargeBitmap->Save(strPath, &jpgClsid, NULL) == Gdiplus::Ok;
	}
	while (false);

	::DeleteFile(strTempPath);

	return bResult;
}

bool CCardEntry::LoadMWSGraphicFile()
{
	CString strPath;
	strPath.Format(_T("%s%s%d.full.jpg"), m_pModule->GetMWSFolder(), GetTrCardName(), m_uID);
		
	if (!PathFileExists(strPath))
	{
		strPath.Format(_T("%s%s%d.full.jpg"), m_pModule->GetMWSFolder(), GetTrCardName(), m_nInstanceNumber);
		if (!PathFileExists(strPath))
		{	
			strPath.Format(_T("%s%s.full.jpg"), m_pModule->GetMWSFolder(), GetTrCardName());	
			if (!PathFileExists(strPath))
			{
				if (m_pModule->GetExpansionName() != CCardStore::s_strTokenModuleName)
					LOG_WARNING(_T("Failed to load MWS bitmap from path %s"), strPath);

				return false;
			}
		}
	}

	m_LargeMTGBitmap.Load(strPath);
	if (!m_LargeMTGBitmap.IsValid())
	{
		if (m_pModule->GetExpansionName() != CCardStore::s_strTokenModuleName)
			LOG_WARNING(_T("Failed to load MWS bitmap from path %s"), strPath);
		return false;
	}

	m_LargeMTGBitmap.Stretch(Gdiplus::Size(CCardStore::LargeNoBorderWidth, CCardStore::LargeNoBorderHeight));
	m_LargeMTGBitmap.Frame(Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight), 
		m_pModule->IsWhiteBorder() ? Gdiplus::Color(255, 255, 255) : Gdiplus::Color(0, 0, 0));

	return true;
}

#pragma pop_macro("new")

CGdipBitmap CCardEntry::GetBitmap(BOOL bRotated)
{
	return GetBitmap(Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight), bRotated);
}

CGdipBitmap CCardEntry::GetBitmap(Gdiplus::Size size, BOOL bRotated)
{
	if (CCardStore::GetInstance()->GetShowMTGBitmaps())
	{
		InitializeMTGBitmap();

		if (size == Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight))
		{
			if (bRotated)
			{
				if (m_LargeMTGBitmapRotated.IsValid())
					return m_LargeMTGBitmapRotated;
			}
			else
			{
				if (m_LargeMTGBitmap.IsValid())
					return m_LargeMTGBitmap;
			}
		}
		else
			if (bRotated)
			{
				CGdipBitmap bitmap(m_LargeMTGBitmapRotated);
				bitmap.Stretch(Gdiplus::Size(size.Height, size.Width));
				if (bitmap.IsValid())
					return bitmap;
			}
			else
			{
				CGdipBitmap bitmap(m_LargeMTGBitmap);
				bitmap.Stretch(size);
				if (bitmap.IsValid())
					return bitmap;
			}
	}

	InitializeBitmap();

	if (CCardStore::GetInstance()->GetShowMTGSymbols())
	{
		if (size == Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight))
		{
			if (bRotated)
			{
				if (m_LargeBitmapRotated2.IsValid())
					return m_LargeBitmapRotated2;
			}
			else
			{
				if (m_LargeBitmap2.IsValid())
					return m_LargeBitmap2;
			}
		}
		else
			if (bRotated)
			{
				CGdipBitmap bitmap(m_LargeBitmapRotated2);
				bitmap.Stretch(Gdiplus::Size(size.Height, size.Width));
				if (bitmap.IsValid())
					return bitmap;
			}
			else
			{
				CGdipBitmap bitmap(m_LargeBitmap2);
				bitmap.Stretch(size);
				if (bitmap.IsValid())
					return bitmap;
			}
	}

	if (size == Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight))
	{
		if (bRotated)
			return m_LargeBitmapRotated;
		else
			return m_LargeBitmap;
	}
	else
		if (bRotated)
		{
			CGdipBitmap bitmap(m_LargeBitmapRotated);
			bitmap.Stretch(Gdiplus::Size(size.Height, size.Width));
			if (bitmap.IsValid())
				return bitmap;
		}
		else
		{
			CGdipBitmap bitmap(m_LargeBitmap);
			bitmap.Stretch(size);
			if (bitmap.IsValid())
				return bitmap;
		}

	return CGdipBitmap();
}

CGdipBitmap CCardEntry::GetBitmap(int nHeight, BOOL bRotated)
{
	Gdiplus::Size size(nHeight * 
		CCardStore::LargeCardWidth / CCardStore::LargeCardHeight, 
				nHeight);

	return GetBitmap(size, bRotated);
}

Gdiplus::Rect CCardEntry::GetItemRect(ItemType itemType, Gdiplus::Size size, BOOL bRotated)
{
	float nAlignRightStart =  float(size.Width) * s_AlignRightStart;
	float nAlignRightItemWidth = float(size.Width) - nAlignRightStart;

	Gdiplus::Rect rect;
	switch(itemType)
	{
	case CardName: rect = Gdiplus::Rect(0, 0, (int)nAlignRightStart, (int)((float)size.Height * s_GraphicStart)); break;
	case CastingCost: rect = Gdiplus::Rect((int)nAlignRightStart, 0, (int)nAlignRightItemWidth, (int)((float)size.Height * s_GraphicStart)); break;
	case CardType_: rect = Gdiplus::Rect(0, (int)((float)size.Height * s_GraphicEnd), (int)nAlignRightStart, (int)((s_TextStart - s_GraphicEnd) * (float)size.Height)); break;
	case Expansion: rect = Gdiplus::Rect((int)nAlignRightStart, (int)((float)size.Height * s_GraphicEnd), (int)nAlignRightItemWidth, (int)((s_TextStart - s_GraphicEnd) * (float)size.Height)); break;
	case PowerTough: rect = Gdiplus::Rect((int)nAlignRightStart, (int)(s_CreatureStart * (float)size.Height), (int)nAlignRightItemWidth, size.Height - (int)(s_CreatureStart * (float)size.Height)); break;
	case Description: rect = Gdiplus::Rect(0, (int)(s_TextStart * (float)size.Height), size.Width, size.Height - (int)(s_TextStart * (float)size.Height)); break;
	}

	if (bRotated)
		return RotateRect(rect, size);
	
	return rect;
}

CString CCardEntry::GetTrCardName() const
{
	CString out=m_strCardName;
	out.Replace(_T("â"),_T("a"));
	out.Replace(_T("à"),_T("a"));
	out.Replace(_T("á"),_T("a"));
	out.Replace(_T("Æ"),_T("AE"));
	out.Replace(_T("é"),_T("e"));
	out.Replace(_T("ú"),_T("u"));
	out.Replace(_T("û"),_T("u"));
	out.Replace(_T(":"),_T(""));
	return out;
}

const CString& CCardEntry::GetCardName() const
{
	return m_strCardName;
}

CString CCardEntry::GetResourceCardName() const
{
	return m_strResourceCardName;
}

CString CCardEntry::GetCastCost(BOOL bExtra) const
{
	return bExtra ? m_strCastCostExtra : m_strCastCost;
}

CString CCardEntry::GetCardText(BOOL bExtra) const
{
	return bExtra ? m_strCardTextExtra : m_strCardText;
}

CString CCardEntry::GetCardTypeText() const
{
	return m_strCardType;
}

CString CCardEntry::GetExpansionName() const
{
	return m_strExpansionName;
}

RarityType CCardEntry::GetRarity() const
{
	return m_Rarity;
}

CString CCardEntry::GetRarityText(bool bAbbreviated) const
{
	return m_Rarity.ToString(bAbbreviated);
}

CString CCardEntry::GetPowerTough() const
{
	return m_strPowerTough;
}

CardType CCardEntry::GetCardType() const
{
	return m_CardType;
}

UINT CCardEntry::GetID() const
{
	return m_uID;
}
