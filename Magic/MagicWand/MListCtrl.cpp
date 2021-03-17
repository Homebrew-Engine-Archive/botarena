// MListCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "MListCtrl.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
// CMListCtrl
//

const TCHAR CMListCtrl::s_strSeparator[] = _T("|");

/*static*/
int CALLBACK CMListCtrl::CompareFunc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort)
{
	CMListCtrl* pListCtrl = (CMListCtrl*)lParamSort;
	int nSortedCol = pListCtrl->GetSortColumn();
	BOOL bAscending = pListCtrl->GetSortOrder();

	CDeckCardEntry* pDeckCardEntry1 = (CDeckCardEntry*)lParam1;
	CDeckCardEntry* pDeckCardEntry2 = (CDeckCardEntry*)lParam2;

	return bAscending ? 
		pDeckCardEntry1->Collate(*pDeckCardEntry2, (CMListCtrl::COLUMNS)nSortedCol) :
		-pDeckCardEntry1->Collate(*pDeckCardEntry2, (CMListCtrl::COLUMNS)nSortedCol);
}

int CMListCtrl::CDeckCardEntry::Collate(const CMListCtrl::CDeckCardEntry& entry, CMListCtrl::COLUMNS byColumn) const
{
	CString strItem1;
	CString strItem2;
	DWORD nItem1;
	DWORD nItem2;
	BOOL bAsValue = FALSE;
	int nIndex;
	CCardEntry* pCardEntry1 = GetCardEntry();
	CCardEntry* pCardEntry2 = entry.GetCardEntry();
	CardType tmpt;

	switch(byColumn)
	{
	default:
		ATLASSERT(false);
		return 0;

	case CMListCtrl::CARD_COUNT:
		return GetCount() - entry.GetCount();

	case CMListCtrl::CARD_COLOR:
			
			tmpt = (pCardEntry1->GetCardType() & CardType::_ColorMask).Get();
			if (tmpt.IsMulticolor()) tmpt |= CardType::_ColorMask;
			nItem1 = int(tmpt.Get());
			tmpt = (pCardEntry2->GetCardType() & CardType::_ColorMask).Get();
			if (tmpt.IsMulticolor()) tmpt |= CardType::_ColorMask;
			nItem2 = int(tmpt.Get());
			bAsValue = TRUE;
			break;

	case CMListCtrl::CARD_NAME: 
			strItem1 = pCardEntry1->GetCardName();
			strItem2 = pCardEntry2->GetCardName();
			break;

	case CMListCtrl::CARD_TYPE: 
			strItem1 = pCardEntry1->GetCardTypeText();
			strItem2 = pCardEntry2->GetCardTypeText();
			break;

	case CMListCtrl::CARD_COST: 
		{
			strItem1 = pCardEntry1->GetCastCost(FALSE);
			strItem2 = pCardEntry2->GetCastCost(FALSE);

			if (strItem1 == strItem2)
				return 0;

			int nX1 = 0;
			int nX2 = 0;

			if (strItem1.Find(_T('X')) != -1)
			{
				nX1 = 1;
				strItem1.TrimLeft(_T('X'));
			}
			
			if (strItem2.Find(_T('X')) != -1)
			{
				nX2 = 1;
				strItem2.TrimLeft(_T('X'));
			}
			
			int nGeneric1 = _ttoi(strItem1);
			int nColorCost1 = 0;

			nIndex = strItem1.FindOneOf(_T("WUBRG"));
			if (nIndex != -1)
				nColorCost1 = strItem1.Mid(nIndex).GetLength();

			int nGeneric2 = _ttoi(strItem2);
			int nColorCost2 = 0;

			nIndex = strItem2.FindOneOf(_T("WUBRG"));
			if (nIndex != -1)
				nColorCost2 = strItem2.Mid(nIndex).GetLength();

			nItem1 = nColorCost1 * 10 + nGeneric1 * 9 + nX1;
			nItem2 = nColorCost2 * 10 + nGeneric2 * 9 + nX2;

			if (nItem1 != nItem2)
				bAsValue = TRUE;
			else
			{
				strItem1 = pCardEntry1->GetCastCost(FALSE);
				strItem2 = pCardEntry2->GetCastCost(FALSE);
			}

			break;
		}

	case CMListCtrl::CARD_PT: 
			strItem1 = pCardEntry1->GetPowerTough();
			strItem2 = pCardEntry2->GetPowerTough();

			nItem1 = _ttoi(strItem1) + (_tcslen(strItem1) ? _ttoi(strItem1.Mid(strItem1.Find(_T('/')) + 1)) : 0);
			nItem2 = _ttoi(strItem2) + (_tcslen(strItem2) ? _ttoi(strItem2.Mid(strItem1.Find(_T('/')) + 1)) : 0);

			if (nItem1 != nItem2)
				bAsValue = TRUE;
			break;

	case CMListCtrl::CARD_RULES_TEXT: 
			strItem1 = pCardEntry1->GetCardText(FALSE);
			strItem2 = pCardEntry2->GetCardText(FALSE);
			break;
			
	case CMListCtrl::CARD_EXPANSION: 
		{
			if (pCardEntry1->GetModule()->GetReleaseDate() == pCardEntry2->GetModule()->GetReleaseDate())
			{
				strItem1 = pCardEntry1->GetModule()->GetExpansionName();
				strItem2 = pCardEntry2->GetModule()->GetExpansionName();
			}
			else
			{
				double fItem1 = (DATE)pCardEntry1->GetModule()->GetReleaseDate();
				double fItem2 = (DATE)pCardEntry2->GetModule()->GetReleaseDate();
				return int(fItem1 - fItem2);
			}

			break;
		}

	case CMListCtrl::CARD_RARITY: 
			strItem1 = pCardEntry1->GetRarityText(true);
			strItem2 = pCardEntry2->GetRarityText(true);
			break;
	}

	if (bAsValue)
		return nItem1 - nItem2;

	return strItem1.CollateNoCase(strItem2);
}

const LPCTSTR CMListCtrl::s_strFont = _T("mplantin");

CMListCtrl::CMListCtrl()
	: m_bUseCountColumn(FALSE)
	, m_nLastContextMenuItem(-1)
	, m_nTotalCount(0)
	, m_nTotalVisibleCount(0)
	, m_pSmallSymbols(NULL)
	, m_bUseMTGSymbols(FALSE)
{
	for (int i = FT_WHITE; i <= FT_COMMON; ++i)
	{
		m_Counts.push_back(0);
		m_VisibleCounts.push_back(0);
	}

	// Initialization of Block and Expansions map
	std::set<CString> Expansions;
	Expansions.insert("M15");
	Expansions.insert("JOU");
	Expansions.insert("BNG");
	Expansions.insert("THS");
	Expansions.insert("M14");
	Expansions.insert("DGM");
	Expansions.insert("GTC");
	Expansions.insert("RTR");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("standard", Expansions));
	Expansions.insert("THS");
	Expansions.insert("M14");
	Expansions.insert("DGM");
	Expansions.insert("GTC");
	Expansions.insert("RTR");
	Expansions.insert("M13");
	Expansions.insert("AVR");
	Expansions.insert("DKA");
	Expansions.insert("ISD");
	Expansions.insert("M12");
	Expansions.insert("NPH");
	Expansions.insert("MBS");
	Expansions.insert("SOM");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("extended", Expansions));
	Expansions.insert("M15");
	Expansions.insert("JOU");
	Expansions.insert("BNG");
	Expansions.insert("THS");
	Expansions.insert("M14");
	Expansions.insert("DGM");
	Expansions.insert("GTC");
	Expansions.insert("RTR");
	Expansions.insert("M13");
	Expansions.insert("AVR");
	Expansions.insert("DKA");
	Expansions.insert("ISD");
	Expansions.insert("M12");
	Expansions.insert("NPH");
	Expansions.insert("MBS");
	Expansions.insert("SOM");
	Expansions.insert("ROE");
	Expansions.insert("WWK");
	Expansions.insert("ZEN");
	Expansions.insert("M10");
	Expansions.insert("ARB");
	Expansions.insert("CON");
	Expansions.insert("ALA");
	Expansions.insert("EVE");
	Expansions.insert("SHM");
	Expansions.insert("MOR");
	Expansions.insert("LRW");
	Expansions.insert("10TH");
	Expansions.insert("FUT");
	Expansions.insert("PLC");
	Expansions.insert("TSP");
	Expansions.insert("DIS");
	Expansions.insert("GPT");
	Expansions.insert("RAV");
	Expansions.insert("9TH");
	Expansions.insert("SOK");
	Expansions.insert("BOK");
	Expansions.insert("CHK");
	Expansions.insert("5DN");
	Expansions.insert("DST");
	Expansions.insert("MRD");
	Expansions.insert("8TH");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("modern", Expansions));
	Expansions.clear();

	Expansions.insert("JOU");
	Expansions.insert("BNG");
	Expansions.insert("THS");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("theros", Expansions));
	Expansions.clear();

	Expansions.insert("DGM");
	Expansions.insert("GTC");
	Expansions.insert("RTR");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("return to ravnica", Expansions));
	Expansions.clear();

	Expansions.insert("AVR");
	Expansions.insert("DKA");
	Expansions.insert("ISD");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("innistrad", Expansions));
	Expansions.clear();

	Expansions.insert("NPH");
	Expansions.insert("MBS");
	Expansions.insert("SOM");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("scars of mirrodin", Expansions));
	Expansions.clear();

	Expansions.insert("ROE");
	Expansions.insert("WWK");
	Expansions.insert("ZEN");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("zendikar", Expansions));
	Expansions.clear();

	Expansions.insert("ARB");
	Expansions.insert("CON");
	Expansions.insert("ALA");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("shards of alara", Expansions));
	Expansions.clear();

	Expansions.insert("EVE");
	Expansions.insert("SHM");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("shadowmoor", Expansions));
	Expansions.clear();

	Expansions.insert("MOR");
	Expansions.insert("LRW");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("lorwyn", Expansions));
	Expansions.clear();

	Expansions.insert("EVE");
	Expansions.insert("SHM");
	Expansions.insert("MOR");
	Expansions.insert("LRW");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("lorwyn-shadowmoor", Expansions));
	Expansions.clear();

	Expansions.insert("FUT");
	Expansions.insert("PLC");
	Expansions.insert("TSP");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("time spiral", Expansions));
	Expansions.clear();

	Expansions.insert("DIS");
	Expansions.insert("GPT");
	Expansions.insert("RAV");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("ravnica", Expansions));
	Expansions.clear();

	Expansions.insert("SOK");
	Expansions.insert("BOK");
	Expansions.insert("CHK");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("kamigawa", Expansions));
	Expansions.clear();

	Expansions.insert("5DN");
	Expansions.insert("DST");
	Expansions.insert("MRD");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("mirrodin", Expansions));
	Expansions.clear();

	Expansions.insert("SCG");
	Expansions.insert("LGN");
	Expansions.insert("ONS");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("onslaught", Expansions));
	Expansions.clear();

	Expansions.insert("JUD");
	Expansions.insert("TOR");
	Expansions.insert("ODY");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("odyssey", Expansions));
	Expansions.clear();

	Expansions.insert("APC");
	Expansions.insert("PLS");
	Expansions.insert("INV");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("invasion", Expansions));
	Expansions.clear();

	Expansions.insert("PCY");
	Expansions.insert("NEM");
	Expansions.insert("MMQ");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("masques", Expansions));
	Expansions.clear();

	Expansions.insert("UDS");
	Expansions.insert("ULG");
	Expansions.insert("USG");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("urza", Expansions));
	Expansions.clear();

	Expansions.insert("EXO");
	Expansions.insert("STH");
	Expansions.insert("TMP");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("tempest", Expansions));
	Expansions.clear();

	Expansions.insert("WTH");
	Expansions.insert("VIS");
	Expansions.insert("MRG");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("mirage", Expansions));
	Expansions.clear();

	Expansions.insert("CSP");
	Expansions.insert("ALL");
	Expansions.insert("ICE");
	m_Blocks.insert( std::pair<CString, std::set<CString>>("ice age", Expansions));
	Expansions.clear();

	Expansions.insert("HML");
	Expansions.insert("FEM");

	m_Blocks.insert( std::pair<CString, std::set<CString>>("homfall", Expansions));
	
	Expansions.clear();

	Expansions.insert("UTD");
	Expansions.insert("ARN");
	Expansions.insert("ATQ");
	Expansions.insert("LEG");
	Expansions.insert("DRK");

	m_Blocks.insert( std::pair<CString, std::set<CString>>("93-94", Expansions));
	
	Expansions.clear();
}

CMListCtrl::~CMListCtrl()
{
	for (std::list<CDeckCardEntry*>::const_iterator i = m_FilteredItems.begin(); i != m_FilteredItems.end(); ++i)
		delete *i;
}

void CMListCtrl::SetUseMTGSymbols(BOOL bEnable)
{
	m_bUseMTGSymbols = bEnable;
	Invalidate();
}

void CMListCtrl::Initialize(UINT nID, CWnd* pParent, BOOL bUseCountColumn)
{
	__super::Initialize(nID, pParent);

	m_bUseMTGSymbols = CCardStore::GetInstance()->GetShowMTGSymbols();

#pragma push_macro("new")
#ifdef new
#undef new
#endif

	if(!m_hTheme)
	{
//		SubclassDlgItem(nID, pParent); //assert triggered for debug-mfc100

		SetExtendedStyle(GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_SUBITEMIMAGES);
	}

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 9, 1);
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_GENERICBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_WHITEBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_BLUEBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_BLACKBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_REDBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_GREENBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_EMBLEM));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_MULTICOLORBALL));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_LANDBALL));

	int nModuleCount = CCardStore::GetInstance()->GetModuleCount();
	for (int i = 0; i < nModuleCount; ++i)
	{
		CCardModule* pModule = CCardStore::GetInstance()->GetModule(i);
		HICON hIcon = pModule->GetIcon();
		if (hIcon == NULL || hIcon == INVALID_HANDLE_VALUE)
			m_ImageList.Add(::AfxGetApp()->LoadIcon(IDR_MAINFRAME));
		else
			m_ImageList.Add(hIcon);
	}
	
	SetImageList(&m_ImageList, LVSIL_SMALL);

	InsertColumn(CARD_NAME, _T("Card Name"), LVCFMT_LEFT, 150);
	InsertColumn(CARD_COLOR, _T("Color"), LVCFMT_LEFT, 20);
	InsertColumn(CARD_TYPE, _T("Card Type"), LVCFMT_LEFT, 150);
	InsertColumn(CARD_COST, _T("Cost"), LVCFMT_LEFT, 50);
	InsertColumn(CARD_PT, _T("P/T"), LVCFMT_LEFT, 50);
	InsertColumn(CARD_RULES_TEXT, _T("Rules Text"), LVCFMT_LEFT, 185);
	InsertColumn(CARD_EXPANSION, _T("Expansion"), LVCFMT_LEFT, 50);
	InsertColumn(CARD_RARITY, _T("Rarity"), LVCFMT_LEFT, 50);

	m_bUseCountColumn = bUseCountColumn;

	if (m_bUseCountColumn)
		InsertColumn(CARD_COUNT, _T("Count"), LVCFMT_LEFT, 50);

	SetCompareFunction(CMListCtrl::CompareFunc);

	if(!m_hTheme)
	{
		CFont* pFont = GetFont();
		LOGFONT logfont;
		pFont->GetLogFont(&logfont);
		_tcscpy_s<>(logfont.lfFaceName, s_strFont);

		m_Font.CreateFontIndirect(&logfont);
		SetFont(&m_Font);

		m_apTextFont.reset(new Gdiplus::Font(s_strFont, (Gdiplus::REAL)abs(logfont.lfHeight), Gdiplus::FontStyleRegular, Gdiplus::UnitPixel));
	}

#pragma pop_macro("new")

	CUIntArray columnOrders;
	columnOrders.SetSize(bUseCountColumn ? CARD_COUNT + 1 : CARD_RARITY + 1);
	columnOrders[CARD_NAME] = 1;
	columnOrders[CARD_COLOR] = 0;
	columnOrders[CARD_TYPE] = 2;
	columnOrders[CARD_COST] = 3;
	columnOrders[CARD_PT] = 4;
	columnOrders[CARD_RULES_TEXT] = 5;
	columnOrders[CARD_EXPANSION] = 6;
	columnOrders[CARD_RARITY] = 7;
	if (bUseCountColumn)
		columnOrders[CARD_COUNT] = 8;

	SetColumnOrders(columnOrders);
}

BOOL CMListCtrl::DeleteAllItems()
{
	for (std::list<CDeckCardEntry*>::const_iterator i = m_FilteredItems.begin(); i != m_FilteredItems.end(); ++i)
		delete *i;

	m_FilteredItems.clear();

	m_nTotalCount = 0;
	m_nTotalVisibleCount = 0;
	for (int i = FT_WHITE; i <= FT_COMMON; ++i)
	{
		m_Counts[i] = 0;
		m_VisibleCounts[i] = 0;
	}

	return __super::DeleteAllItems();
}

int CMListCtrl::InsertItem2(int nItem, LPCTSTR strItem, int nImage)
{
	CString strFull = strItem;

	if (strFull.Find(s_strSeparator) == -1)
	{
		CString strDrawManaText;
		CString strDrawText;
		PrepareTextWithSymbols(strItem, strDrawManaText, strDrawText);
		
		if (!_tcscmp(strDrawManaText, strDrawText) || !_tcslen(strDrawManaText))
			strFull = strItem;
		else
			strFull = strDrawText + s_strSeparator + strDrawManaText;
	}

	strFull.Replace(_T('\n'), _T(' '));
	strFull.Replace(_T('\r'), _T(' '));
	strFull.Replace(_T('\t'), _T(' '));

	if (nImage == -1)
		return CListCtrlEx::InsertItem(nItem, strFull);

	return CListCtrlEx::InsertItem(nItem, strFull, nImage);
}

BOOL CMListCtrl::SetItemText2(int nItem, int nSubItem, LPCTSTR strText)
{
	CString strFull = strText;

	if (strFull.Find(s_strSeparator) == -1)
	{
		CString strDrawManaText;
		CString strDrawText;
		PrepareTextWithSymbols(strText, strDrawManaText, strDrawText);

		CString strFull;
		if (!_tcscmp(strDrawManaText, strDrawText) || !_tcslen(strDrawManaText))
			strFull = strText;
		else
			strFull = strDrawText + s_strSeparator + strDrawManaText;
	}

	strFull.Replace(_T('\n'), _T(' '));
	strFull.Replace(_T('\r'), _T(' '));
	strFull.Replace(_T('\t'), _T(' '));

	return CListCtrlEx::SetItemText(nItem, nSubItem, strFull);
}

bool CMListCtrl::DrawSubItemText(HDC hdc, int nItem, int nSubitem, LPCTSTR strText, const CRect& itemRect, const CRect& subitemRect, int iStateId)
{
	CString strLabel(strText);
	CString strTemp;

	int nSecondStringAt = strLabel.Find(s_strSeparator);
	if (nSecondStringAt == -1)
		strTemp = strLabel;
	else
		strTemp = m_bUseMTGSymbols ? strLabel.Mid(nSecondStringAt + 1) : strLabel.Left(nSecondStringAt);

	DrawSubItemBackground(hdc, itemRect, subitemRect, iStateId);
	CRect textRect(DrawSubItemImage(hdc, nItem, nSubitem, subitemRect, iStateId));
	textRect.DeflateRect(CSize(1, 1));

	if (!m_pSmallSymbols || !m_pSmallSymbols->IsValid())
		m_pSmallSymbols = &CCardStore::GetInstance()->GetSmallSymbols();

	DrawMagicText(m_hTheme, hdc,
					LVP_LISTITEM,
					iStateId,
					*m_pSmallSymbols,
					strTemp, textRect);	

	return true;
}
bool CMListCtrl::DrawSubItemText(LPNMLVCUSTOMDRAW pCustomDraw, const CRect& subitemRect, COLORREF textColor, COLORREF backgroundColor)
{//old method
	CString strLabel(GetItemText(pCustomDraw->nmcd.dwItemSpec, pCustomDraw->iSubItem));
	if (strLabel.IsEmpty())
		return false;

	int nSecondStringAt = strLabel.Find(s_strSeparator);
	if (nSecondStringAt == -1)
		return false;

	CString strTemp = m_bUseMTGSymbols ? strLabel.Mid(nSecondStringAt + 1) : strLabel.Left(nSecondStringAt);

	Gdiplus::RectF layoutRect(ToRectF(subitemRect));

	Gdiplus::Graphics graphics(pCustomDraw->nmcd.hdc);

	Gdiplus::SolidBrush brush(Gdiplus::Color(GetRValue(backgroundColor), GetGValue(backgroundColor), GetBValue(backgroundColor)));
	graphics.FillRectangle(&brush, layoutRect);

	layoutRect.Y += 1;

	if (!m_pSmallSymbols || !m_pSmallSymbols->IsValid())
		m_pSmallSymbols = &CCardStore::GetInstance()->GetSmallSymbols();

	DrawMagicText(graphics, textColor, 
				 *m_apTextFont.get(),
				 *m_pSmallSymbols,
				 strTemp, layoutRect, 
				 Gdiplus::SizeF(0, 0), FALSE, NULL, TRUE);	

	return true;
}

BOOL CMListCtrl::IsCardType(CMListCtrl::FILTERS Filter, CCardEntry* pCardEntry)
{
	switch(Filter)
	{
	case FT_WHITE:			return (pCardEntry->GetCardType() & CardType::White).Any();
	case FT_BLUE:			return (pCardEntry->GetCardType() & CardType::Blue).Any();
	case FT_BLACK:			return (pCardEntry->GetCardType() & CardType::Black).Any();
	case FT_RED:			return (pCardEntry->GetCardType() & CardType::Red).Any();
	case FT_GREEN:			return (pCardEntry->GetCardType() & CardType::Green).Any();
	case FT_LAND:			return (pCardEntry->GetCardType() & CardType::_Land).Any();
	case FT_ARTIFACT:		return (pCardEntry->GetCardType() & CardType::Artifact).Any() && !pCardEntry->GetCardType().IsCreature();
	case FT_ARTIFACT_LAND:	return (pCardEntry->GetCardType() & CardType::Artifact).Any() && pCardEntry->GetCardType().IsLand();
	case FT_CREATURE:		return pCardEntry->GetCardType().IsCreature();
	case FT_PLANESWALKER:	return (pCardEntry->GetCardType() & CardType::Planeswalker).Any();
	case FT_SORCERY:		return (pCardEntry->GetCardType() & CardType::Sorcery).Any();
	case FT_INSTANT:		return (pCardEntry->GetCardType() & CardType::Instant).Any();
	case FT_ENCHANTMENT:	return (pCardEntry->GetCardType() & CardType::_Enchantment).Any();
	case FT_BASIC_LAND:		return pCardEntry->GetRarity() == RarityType::BasicLand; //don't move this line (2/3), basic land filter wouldn't work anymore...
	case FT_SPECIAL:		return pCardEntry->GetRarity().IsSpecial();
	case FT_MYTHIC_RARE:	return pCardEntry->GetRarity().IsMythicRare();
	case FT_RARE:			return pCardEntry->GetRarity().IsRare();
	case FT_UNCOMMON:		return pCardEntry->GetRarity().IsUncommon();
	case FT_COMMON:			return pCardEntry->GetRarity().IsCommon();
	}

	return FALSE;
}

int CMListCtrl::InsertItem(CCardEntry* pCardEntry, int nCount)
{
	if (IsCardFiltered(pCardEntry))
	{
		m_FilteredItems.push_back(new CDeckCardEntry(pCardEntry, nCount));
		UpdateStatistics(pCardEntry, nCount, true, false);
		return -1;
	}

	UpdateStatistics(pCardEntry, nCount, true, true);
	return InsertItemImpl(pCardEntry, nCount);
}

int CMListCtrl::InsertItemImpl(CCardEntry* pCardEntry, int nCount)
{
	if (m_bUseCountColumn)
		for (int i = 0; i < GetItemCount(); ++i)
		{
			CDeckCardEntry* pDeckCardEntry = (CDeckCardEntry*)GetItemData(i);
			if (pDeckCardEntry->GetCardEntry() == pCardEntry)
			{
				pDeckCardEntry->SetCount(pDeckCardEntry->GetCount() + nCount);

				CString strCount;
				strCount.Format(_T("%d"), pDeckCardEntry->GetCount());
				SetItemText(i, CARD_COUNT, strCount);
				EnsureVisible(i, TRUE);
				return i;
			}
		}

	int nImageIndex = BALL_COLORLESS;
	CString strColor;
	CardType ctCardType = pCardEntry->GetCardType();
	if (ctCardType.IsEmblem())
	{
		nImageIndex = BALL_EMBLEM;
		strColor = _T("Vanguard");
	}
	else if (ctCardType.IsScheme())
	{
		nImageIndex = BALL_EMBLEM;
		strColor = _T("Scheme");
	}
	else if (ctCardType.IsLand())
	{
		nImageIndex = BALL_LAND;
		strColor = _T("Land");
	}
	/*else if (ctCardType.IsArtifact())
	{
		nImageIndex = BALL_ARTIFACT;
		strColor = _T("Artifact");
	}*/
	else if (ctCardType.IsMulticolor())
	{
		nImageIndex = BALL_MULTICOLOR;
		strColor = _T("Multicolor");
	}
	else switch((ctCardType & CardType::_ColorMask).Get())
	{
	case CardType::White: nImageIndex = BALL_WHITE; strColor = _T("White"); break;
	case CardType::Blue: nImageIndex = BALL_BLUE; strColor = _T("Blue"); break;
	case CardType::Black: nImageIndex = BALL_BLACK; strColor = _T("Black"); break;
	case CardType::Red: nImageIndex = BALL_RED; strColor = _T("Red"); break;
	case CardType::Green: nImageIndex = BALL_GREEN; strColor = _T("Green"); break;
	}

	int nIndex = __super::InsertItem(GetItemCount(), pCardEntry->GetTrCardName(), -1);

	CDeckCardEntry* pDeckCardEntry = new CDeckCardEntry(pCardEntry, nCount);
	SetItemData(nIndex, (DWORD)pDeckCardEntry);

	SetItemText(nIndex, CARD_COLOR, strColor);
	SetItem(nIndex, CARD_COLOR, LVIF_IMAGE, NULL, nImageIndex, 0, 0, 0);
	SetItemText(nIndex, CARD_TYPE, pCardEntry->GetCardTypeText());
	SetItemText2(nIndex, CARD_COST, pCardEntry->GetCastCost(FALSE) + s_strSeparator + pCardEntry->GetCastCost(TRUE));
	SetItemText(nIndex, CARD_PT, pCardEntry->GetPowerTough());
	SetItemText2(nIndex, CARD_RULES_TEXT, pCardEntry->GetCardText(FALSE) + s_strSeparator + pCardEntry->GetCardText(TRUE));
	SetItemText(nIndex, CARD_EXPANSION, pCardEntry->GetExpansionName());
	SetItemText(nIndex, CARD_RARITY, pCardEntry->GetRarityText(true));

	if (m_bUseCountColumn)
	{
		CString strCount;
		strCount.Format(_T("%d"), nCount);
		SetItemText(nIndex, CARD_COUNT, strCount);
	}

	int nExpansionImage = CCardStore::GetInstance()->GetModuleIndex(pCardEntry->GetModule()) + EXPANSION_IMAGE;
	SetItem(nIndex, CARD_EXPANSION, LVIF_IMAGE, NULL, nExpansionImage, 0, 0, 0);

	return nIndex;
}

void CMListCtrl::UpdateStatistics(CCardEntry* pCardEntry, int nCount, bool bTotal, bool bVisible)
{
	for (int i = FT_WHITE; i <= FT_COMMON; ++i)
		if (IsCardType((FILTERS)i, pCardEntry))
		{
			if (bTotal)
			{
				m_Counts[i] += nCount;
				ATLASSERT(m_Counts[i] >= 0);
			}

			if (bVisible)
			{
				m_VisibleCounts[i] += nCount;
				ATLASSERT(m_VisibleCounts[i] >= 0);
				ATLASSERT(m_VisibleCounts[i] <= m_Counts[i]);
			}
		}

	if (bTotal)
	{
		m_nTotalCount += nCount;
		ATLASSERT(m_nTotalCount >= 0);
	}

	if (bVisible)
	{
		m_nTotalVisibleCount += nCount;
		ATLASSERT(m_nTotalVisibleCount >= 0);
		ATLASSERT(m_nTotalVisibleCount <= m_nTotalCount);
	}
}

CMListCtrl::CDeckCardEntry* CMListCtrl::GetItem(int nIndex) const
{
	return (CDeckCardEntry*)GetItemData(nIndex);
}

BOOL CMListCtrl::RemoveItem(int nIndex, bool bAll)
{
	CDeckCardEntry* pDeckCardEntry = (CDeckCardEntry*)GetItemData(nIndex);
	if (!m_bUseCountColumn || bAll || pDeckCardEntry->GetCount() < 2)
	{
		UpdateStatistics(pDeckCardEntry->GetCardEntry(), -pDeckCardEntry->GetCount(), true, true);
		DeleteItem(nIndex);
		return TRUE;
	}

	pDeckCardEntry->DecreaseCount();

	CString strCount;
	strCount.Format(_T("%d"), pDeckCardEntry->GetCount());

	SetItemText(nIndex, CARD_COUNT, strCount);
	if (GetSortColumn() == CARD_COUNT)
		Sort();

	UpdateStatistics(pDeckCardEntry->GetCardEntry(), -1, true, true);
	
	return FALSE;
}

BOOL CMListCtrl::HasFilter(FILTERS filter) const
{
	return m_Filters.count(filter) > 0;
}

BOOL CMListCtrl::HasFilter(FILTERS filter, CString& strText) const
{
	strText.Empty();

	std::map<FILTERS, CString>::const_iterator i = m_Filters.find(filter);
	if (i == m_Filters.end())
		return FALSE;

	strText = i->second;

	return TRUE;
}

BOOL CMListCtrl::IsCardFilteredBy(FILTERS filter, CCardEntry* pCardEntry)
{
	if (filter >= FT_WHITE && filter <= FT_COMMON)
	{
		if (HasFilter(filter) && IsCardType(filter, pCardEntry))
			return TRUE;

		return FALSE;
	}

	CString strText;
	if (!HasFilter(filter, strText))
		return FALSE;
	
	if (strText.IsEmpty())
		return FALSE;

	if (filter == FT_BLOCK) return !IsInBlock(strText, pCardEntry);

	CString str;
	
	switch(filter)
	{
	case FT_CARD_NAME: str = pCardEntry->GetCardName(); break;
	case FT_CARD_TYPE: str = pCardEntry->GetCardTypeText(); break;
	case FT_CAST_COST: str = pCardEntry->GetCastCost(FALSE); break;
	case FT_PT: str = pCardEntry->GetPowerTough(); break;
	case FT_RULES_TEXT: str = pCardEntry->GetCardText(FALSE); break;
	case FT_EXPANSION: str = pCardEntry->GetExpansionName(); break;
	default:
		return FALSE;
	}

	//If you add support for new foreign characters, use lower-case characters for lower-case support and upper-case characters for upper-case support (whatever you need) and sort it alphabetically.
	str.Replace(_T("â"),_T("a"));
	str.Replace(_T("à"),_T("a"));
	str.Replace(_T("á"),_T("a"));
	str.Replace(_T("Æ"),_T("AE"));
	str.Replace(_T("é"),_T("e"));
	str.Replace(_T("ú"),_T("u"));
	str.Replace(_T("û"),_T("u"));
	//str.Replace(_T(":"),_T(""));
	str.MakeLower();

	return str.Find(strText) == -1;
}

BOOL CMListCtrl::IsCardFiltered(CCardEntry* pCardEntry, FILTERS exceptFromFilter, FILTERS exceptToFilter)
{
	if (pCardEntry->GetExpansionName() == _T("Tokens"))
		return TRUE;

	if (pCardEntry->GetExpansionName() == _T("ATokens"))
		return TRUE;

	if (pCardEntry->GetExpansionName() == _T("Token"))
		return TRUE;

	for (int filter = FT_WHITE; filter <= FT_BLOCK; ++filter)
		if ((exceptFromFilter == -1 || filter < exceptFromFilter || filter > exceptToFilter) && 
			IsCardFilteredBy((FILTERS)filter, pCardEntry))
			return TRUE;

	return FALSE;
}

BOOL CMListCtrl::IsInBlock(CString strBlock, CCardEntry* pCardEntry)
{
	std::map<CString, std::set<CString>>::iterator pCurrentBlock;

	pCurrentBlock = m_Blocks.find(strBlock);
	if  (pCurrentBlock == m_Blocks.end()) return FALSE;

	CString strCard = pCardEntry->GetExpansionName();
	if (pCurrentBlock->second.find(strCard) == (pCurrentBlock->second.end()))
		return FALSE;

	return TRUE;
}

void CMListCtrl::AddFilter(FILTERS filter, LPCTSTR strText)
{
	CString strTemp;
	if (HasFilter(filter, strTemp))
	{
		if (!strTemp.CompareNoCase(strText))
			return;

		RemoveFilter(filter);
	}

	strTemp = strText;
	strTemp.Replace(_T("â"),_T("a"));
	strTemp.Replace(_T("à"),_T("a"));
	strTemp.Replace(_T("á"),_T("a"));
	strTemp.Replace(_T("Æ"),_T("AE"));
	strTemp.Replace(_T("é"),_T("e"));
	strTemp.Replace(_T("ú"),_T("u"));
	strTemp.Replace(_T("û"),_T("u"));
	//strTemp.Replace(_T(":"),_T(""));
	strTemp.MakeLower();
	strTemp.Trim();
	m_Filters[filter] = strTemp;

	for (int i = GetItemCount() - 1; i >= 0; --i)
	{
		CDeckCardEntry* pDeckCardEntry = GetItem(i);
		if (IsCardFiltered(pDeckCardEntry->GetCardEntry()))
		{
			UpdateStatistics(pDeckCardEntry->GetCardEntry(), -pDeckCardEntry->GetCount(), false, true);

			m_FilteredItems.push_back(new CDeckCardEntry(*pDeckCardEntry));
			DeleteItem(i);
		}
	}
}

void CMListCtrl::ToggleFilter(FILTERS filter)
{
	if (HasFilter(filter))
		RemoveFilter(filter);
	else
		AddFilter(filter);
}

void CMListCtrl::RemoveFilter(FILTERS filter)
{
	if (!m_Filters.count(filter))
		return;

	for (std::list<CDeckCardEntry*>::iterator i = m_FilteredItems.begin(); i != m_FilteredItems.end();)
		if (IsCardFilteredBy(filter, (*i)->GetCardEntry()) &&
			!IsCardFiltered((*i)->GetCardEntry(), filter, filter))
		{
			UpdateStatistics((*i)->GetCardEntry(), (*i)->GetCount(), false, true);

			InsertItemImpl((*i)->GetCardEntry(), (*i)->GetCount());
			m_FilteredItems.erase(i++);
		}
		else
			++i;

	m_Filters.erase(filter);

	Sort();
}

void CMListCtrl::RemoveFilters(FILTERS fromFilter, FILTERS toFilter)
{
	for (int filter = fromFilter; filter <= toFilter; ++filter)
	{
		if (!m_Filters.count((FILTERS)filter))
			continue;

		for (std::list<CDeckCardEntry*>::iterator i = m_FilteredItems.begin(); i != m_FilteredItems.end();)
			if (IsCardFilteredBy((FILTERS)filter, (*i)->GetCardEntry()) &&
				!IsCardFiltered((*i)->GetCardEntry(), fromFilter, toFilter))
			{
				UpdateStatistics((*i)->GetCardEntry(), (*i)->GetCount(), false, true);

				InsertItemImpl((*i)->GetCardEntry(), (*i)->GetCount());
				m_FilteredItems.erase(i++);
			}
			else
				++i;
				
		m_Filters.erase((FILTERS)filter);
	}

	Sort();
}

void CMListCtrl::ClearFilters()
{
	for (std::list<CDeckCardEntry*>::iterator i = m_FilteredItems.begin(); i != m_FilteredItems.end(); ++i)
	{
		UpdateStatistics((*i)->GetCardEntry(), (*i)->GetCount(), false, true);

		InsertItemImpl((*i)->GetCardEntry(), (*i)->GetCount());
	}

	m_FilteredItems.clear();
	m_Filters.clear();
	Sort();
}

void CMListCtrl::GetDeckCards(CDeck::DeckCards& deckCards) const
{
	for (int i = 0; i < GetItemCount(); ++i)
	{
		CDeckCardEntry* pDeckCardEntry = GetItem(i);
		CCardEntry* pCardEntry = pDeckCardEntry->GetCardEntry();

		CDeck::DeckCard deckCard;
		deckCard.strCardName = pCardEntry->GetCardName();
		deckCard.nImageId = pCardEntry->GetID();
		deckCard.cardType = pCardEntry->GetCardType();

		for (int j = 0; j < pDeckCardEntry->GetCount(); ++j)
			deckCards.push_back(deckCard);
	}

	for (std::list<CDeckCardEntry*>::const_iterator i = m_FilteredItems.begin(); i != m_FilteredItems.end(); ++i)
	{
		CDeckCardEntry* pDeckCardEntry = *i;
		CCardEntry* pCardEntry = pDeckCardEntry->GetCardEntry();

		CDeck::DeckCard deckCard;
		deckCard.strCardName = pCardEntry->GetCardName();
		deckCard.nImageId = pCardEntry->GetID();
		deckCard.cardType = pCardEntry->GetCardType();

		for (int j = 0; j < pDeckCardEntry->GetCount(); ++j)
			deckCards.push_back(deckCard);
	}
}

BEGIN_MESSAGE_MAP(CMListCtrl, CListCtrlEx)
    ON_WM_RBUTTONDOWN()
	ON_COMMAND(IDM_COPY_CARD_NAME, OnCopyCardName)
	ON_COMMAND(IDM_COPY_CARD_RULES_TEXT, OnCopyCardRulesText)
	ON_COMMAND(IDM_COPY_ALL_CARD_INFO, OnCopyAllCardInfo)
	ON_COMMAND(IDM_CARD_RULINGS, OnGetCardRulings)
	ON_NOTIFY_REFLECT(LVN_DELETEITEM, OnDeleteItem)

	ON_COMMAND(IDM_FT_WHITE, OnFilterWhite)
	ON_COMMAND(IDM_FT_BLUE, OnFilterBlue)
	ON_COMMAND(IDM_FT_BLACK, OnFilterBlack)
	ON_COMMAND(IDM_FT_RED, OnFilterRed)
	ON_COMMAND(IDM_FT_GREEN, OnFilterGreen)
	ON_COMMAND(IDM_FT_LAND, OnFilterLand)
	ON_COMMAND(IDM_FT_ARTIFACT, OnFilterArtifact)
	ON_COMMAND(IDM_FT_ARTIFACT_LAND, OnFilterArtifactLand)
	ON_COMMAND(IDM_FT_CREATURE, OnFilterCreature)
	ON_COMMAND(IDM_FT_PLANESWALKER, OnFilterPlaneswalker)
	ON_COMMAND(IDM_FT_SORCERY, OnFilterSorcery)
	ON_COMMAND(IDM_FT_INSTANT, OnFilterInstant)
	ON_COMMAND(IDM_FT_ENCHANTMENT, OnFilterEnchantment)
	ON_COMMAND(IDM_FT_SPECIAL, OnFilterSpecial)
	ON_COMMAND(IDM_FT_MYTHIC_RARE, OnFilterMythicRare)
	ON_COMMAND(IDM_FT_RARE, OnFilterRare)
	ON_COMMAND(IDM_FT_UNCOMMON, OnFilterUncommon)
	ON_COMMAND(IDM_FT_COMMON, OnFilterCommon)
	ON_COMMAND(IDM_FT_BASIC_LAND, OnFilterBasicLand)
END_MESSAGE_MAP()

void CMListCtrl::OnRButtonDown(UINT nFlags, CPoint point) 
{
	UINT uFlags = LVHT_ONITEM;
	m_nLastContextMenuItem = HitTest(point, &uFlags);
	if (m_nLastContextMenuItem >= 0)
	{
		DeselectAllItems();
		SelectItem(m_nLastContextMenuItem);
	}

	CMenu allContextMenus;
	allContextMenus.LoadMenu(IDR_CONTEXT_MENU);
	CMenu* pPopUpMenu = allContextMenus.GetSubMenu(1);

	pPopUpMenu->EnableMenuItem(IDM_COPY_CARD_NAME, MF_BYCOMMAND | (m_nLastContextMenuItem >= 0 ? MF_ENABLED : MF_GRAYED | MF_DISABLED) );
	pPopUpMenu->EnableMenuItem(IDM_COPY_CARD_RULES_TEXT, MF_BYCOMMAND | (m_nLastContextMenuItem >= 0 ? MF_ENABLED : MF_GRAYED | MF_DISABLED) );
	pPopUpMenu->EnableMenuItem(IDM_COPY_ALL_CARD_INFO, MF_BYCOMMAND | (m_nLastContextMenuItem >= 0 ? MF_ENABLED : MF_GRAYED | MF_DISABLED) );
	pPopUpMenu->EnableMenuItem(IDM_CARD_RULINGS, MF_BYCOMMAND | (m_nLastContextMenuItem >= 0 ? MF_ENABLED : MF_GRAYED | MF_DISABLED) );

	pPopUpMenu->CheckMenuItem(IDM_FT_WHITE, MF_BYCOMMAND | (HasFilter(FT_WHITE) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_BLUE, MF_BYCOMMAND | (HasFilter(FT_BLUE) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_BLACK, MF_BYCOMMAND | (HasFilter(FT_BLACK) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_RED, MF_BYCOMMAND | (HasFilter(FT_RED) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_GREEN, MF_BYCOMMAND | (HasFilter(FT_GREEN) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_LAND, MF_BYCOMMAND | (HasFilter(FT_LAND) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_ARTIFACT, MF_BYCOMMAND | (HasFilter(FT_ARTIFACT) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_ARTIFACT_LAND, MF_BYCOMMAND | (HasFilter(FT_ARTIFACT_LAND) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_CREATURE, MF_BYCOMMAND | (HasFilter(FT_CREATURE) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_PLANESWALKER, MF_BYCOMMAND | (HasFilter(FT_PLANESWALKER) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_SORCERY, MF_BYCOMMAND | (HasFilter(FT_SORCERY) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_INSTANT, MF_BYCOMMAND | (HasFilter(FT_INSTANT) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_ENCHANTMENT, MF_BYCOMMAND | (HasFilter(FT_ENCHANTMENT) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_SPECIAL, MF_BYCOMMAND | (HasFilter(FT_SPECIAL) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_MYTHIC_RARE, MF_BYCOMMAND | (HasFilter(FT_MYTHIC_RARE) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_RARE, MF_BYCOMMAND | (HasFilter(FT_RARE) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_UNCOMMON, MF_BYCOMMAND | (HasFilter(FT_UNCOMMON) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_COMMON, MF_BYCOMMAND | (HasFilter(FT_COMMON) ? MF_UNCHECKED : MF_CHECKED) );
	pPopUpMenu->CheckMenuItem(IDM_FT_BASIC_LAND, MF_BYCOMMAND | (HasFilter(FT_BASIC_LAND) ? MF_UNCHECKED : MF_CHECKED) );

	ClientToScreen(&point);

	pPopUpMenu->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, this);
}

void CMListCtrl::OnCopyCardName()
{
	if (m_nLastContextMenuItem < 0)
		return;

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->CopyToClipboard(GetItemText(m_nLastContextMenuItem, CARD_NAME));

	m_nLastContextMenuItem = -1;
}

void CMListCtrl::OnCopyCardRulesText()
{
	if (m_nLastContextMenuItem < 0)
		return;

	CString strRulesText(GetItemText(m_nLastContextMenuItem, CARD_RULES_TEXT));

	int nSecondStringAt = strRulesText.Find(s_strSeparator);
	if (nSecondStringAt != -1)
		strRulesText = strRulesText.Left(nSecondStringAt);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->CopyToClipboard(strRulesText);

	m_nLastContextMenuItem = -1;
}

void CMListCtrl::OnCopyAllCardInfo()
{
	if (m_nLastContextMenuItem < 0)
		return;

	CString strAllInfo;

	for (int i = 0; i < GetColumnCount(); ++i)
	{
		CString strInfo(GetItemText(m_nLastContextMenuItem, i));

		int nSecondStringAt = strInfo.Find(s_strSeparator);
		if (nSecondStringAt != -1)
			strInfo = strInfo.Left(nSecondStringAt);

		strInfo.Trim();
		if (strInfo.IsEmpty())
			continue;

		if (!strAllInfo.IsEmpty())
			strAllInfo += _T("\r\n");

		strAllInfo += strInfo;
	}

	strAllInfo += _T("\r\n");

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->CopyToClipboard(strAllInfo);

	m_nLastContextMenuItem = -1;
}

void CMListCtrl::OnGetCardRulings()
{
	if (m_nLastContextMenuItem < 0)
		return;

	CString strCardName(GetItemText(m_nLastContextMenuItem, CARD_NAME));
	strCardName.Replace(_T("â"),_T("a"));
	strCardName.Replace(_T("à"),_T("a"));
	strCardName.Replace(_T("á"),_T("a"));
	strCardName.Replace(_T("Æ"),_T("AE"));
	strCardName.Replace(_T("é"),_T("e"));
	strCardName.Replace(_T("ú"),_T("u"));
	strCardName.Replace(_T("û"),_T("u"));
	//strCardName.Replace(_T(":"),_T(""));

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	pMainWnd->GetCardRulings(strCardName);

	m_nLastContextMenuItem = -1;
}

void CMListCtrl::OnDeleteItem(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	CDeckCardEntry* pDeckCardEntry = (CDeckCardEntry*)GetItemData(pNMListView->iItem);
	if (pDeckCardEntry)
		delete pDeckCardEntry;

	*pResult = 0;
}

void CMListCtrl::OnFilterWhite()
{
	ToggleFilter(FT_WHITE);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_WHITE, m_nID);
}

void CMListCtrl::OnFilterBlue()
{
	ToggleFilter(FT_BLUE);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_BLUE, m_nID);
}

void CMListCtrl::OnFilterBlack()
{
	ToggleFilter(FT_BLACK);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_BLACK, m_nID);
}

void CMListCtrl::OnFilterRed()
{
	ToggleFilter(FT_RED);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_RED, m_nID);
}

void CMListCtrl::OnFilterGreen()
{
	ToggleFilter(FT_GREEN);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_GREEN, m_nID);
}

void CMListCtrl::OnFilterLand()
{
	ToggleFilter(FT_LAND);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_LAND, m_nID);
}

void CMListCtrl::OnFilterArtifact()
{
	ToggleFilter(FT_ARTIFACT);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_ARTIFACT, m_nID);
}

void CMListCtrl::OnFilterArtifactLand()
{
	ToggleFilter(FT_ARTIFACT_LAND);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_ARTIFACT_LAND, m_nID);
}

void CMListCtrl::OnFilterCreature()
{
	ToggleFilter(FT_CREATURE);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_CREATURE, m_nID);
}

void CMListCtrl::OnFilterPlaneswalker()
{
	ToggleFilter(FT_PLANESWALKER);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_PLANESWALKER, m_nID);
}

void CMListCtrl::OnFilterSorcery()
{
	ToggleFilter(FT_SORCERY);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_SORCERY, m_nID);
}

void CMListCtrl::OnFilterInstant()
{
	ToggleFilter(FT_INSTANT);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_INSTANT, m_nID);
}

void CMListCtrl::OnFilterEnchantment()
{
	ToggleFilter(FT_ENCHANTMENT);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_ENCHANTMENT, m_nID);
}

void CMListCtrl::OnFilterSpecial()
{
	ToggleFilter(FT_SPECIAL);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_SPECIAL, m_nID);
}

void CMListCtrl::OnFilterMythicRare()
{
	ToggleFilter(FT_MYTHIC_RARE);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_MYTHIC_RARE, m_nID);
}

void CMListCtrl::OnFilterRare()
{
	ToggleFilter(FT_RARE);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_RARE, m_nID);
}

void CMListCtrl::OnFilterUncommon()
{
	ToggleFilter(FT_UNCOMMON);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_UNCOMMON, m_nID);
}

void CMListCtrl::OnFilterCommon()
{
	ToggleFilter(FT_COMMON);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_COMMON, m_nID);
}

void CMListCtrl::OnFilterBasicLand()
{
	ToggleFilter(FT_BASIC_LAND);
	m_pParent->SendMessage(WM_APP_FILTER_CHANGED, FT_BASIC_LAND, m_nID);
}
