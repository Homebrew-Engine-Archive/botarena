// MListCtrl.h : header file
//

#pragma once

#include "ListViewCtrlEx.h"

//____________________________________________________________________________
//
// CMListCtrl
//
class CMListCtrl : public CListCtrlEx
{
public:
	enum COLUMNS
	{
		CARD_NAME,
		CARD_COLOR,
		CARD_TYPE,
		CARD_COST,
		CARD_PT,
		CARD_RULES_TEXT,
		CARD_EXPANSION,
		CARD_RARITY,
		CARD_COUNT			// optional
	};

	enum FILTERS
	{
		FT_WHITE,
		FT_BLUE,
		FT_BLACK,
		FT_RED,
		FT_GREEN,

		FT_LAND,
		FT_ARTIFACT,
		FT_ARTIFACT_LAND, //not used as a filter; created for m_strNonCreatureTotal in DeckDialog.cpp at "void CDeckDialog::UpdateStatistics()" to remove Artifact Lands from this count (because Artifact Lands should only be in Land count)
		FT_CREATURE,
		FT_PLANESWALKER,
		FT_SORCERY,
		FT_INSTANT,
		FT_ENCHANTMENT,
		
		FT_BASIC_LAND, //don't move this line (3/3), basic land filter wouldn't work anymore...
		FT_SPECIAL,
		FT_MYTHIC_RARE,
		FT_RARE,
		FT_UNCOMMON,
		FT_COMMON,

		FT_CARD_NAME,
		FT_CARD_TYPE,
		FT_CAST_COST,
		FT_PT,
		FT_RULES_TEXT,
		FT_EXPANSION,
		FT_BLOCK
	};

	class CDeckCardEntry
	{
	public:
		CDeckCardEntry(const CDeckCardEntry& deckCardEntry)
			: m_pCardEntry(deckCardEntry.m_pCardEntry)
			, m_nCount(deckCardEntry.m_nCount)
		{}

		CDeckCardEntry(CCardEntry* pCardEntry, int nCount = 1)
			: m_pCardEntry(pCardEntry)
			, m_nCount(nCount)
		{}

		CCardEntry* GetCardEntry() const { return m_pCardEntry; }
		int GetCount() const { return m_nCount; }
		void SetCount(int nCount) { m_nCount = nCount; }

		void IncreaseCount() { ++m_nCount; }
		void DecreaseCount() { --m_nCount; }

		int Collate(const CDeckCardEntry& entry, COLUMNS byColumn) const;

	protected:
		CCardEntry* m_pCardEntry;
		int m_nCount;
	};

	CMListCtrl();
	virtual ~CMListCtrl();

	void Initialize(UINT nID, CWnd* pParent, BOOL bUseCountColumn/* = FALSE*/);

	void SetUseMTGSymbols(BOOL bEnable);

	int InsertItem(CCardEntry* pCardEntry, int nCount = 1);

	CDeckCardEntry* GetItem(int nIndex) const;
	BOOL RemoveItem(int nIndex, bool bAll = true);
	BOOL DeleteAllItems();
		
	void AddFilter(FILTERS filter, LPCTSTR strText = _T(""));
	void ToggleFilter(FILTERS filter);
	BOOL HasFilter(FILTERS filter) const;
	BOOL HasFilter(FILTERS filter, CString& strText) const;
	void RemoveFilter(FILTERS filter);
	void RemoveFilters(FILTERS fromFilter = FT_WHITE, FILTERS toFilter = FT_BLOCK);
	void ClearFilters();

	int GetTotalCount() const { return m_nTotalCount; }
	int GetTotalVisibleCount() const { return m_nTotalVisibleCount; }

	int	GetCount(FILTERS filter) const { return m_Counts[filter]; }
	int GetVisibleCount(FILTERS filter) const { return m_VisibleCounts[filter]; }

	void GetDeckCards(CDeck::DeckCards& deckCards) const;

protected:
	enum IMAGES
	{
		BALL_COLORLESS,
		BALL_WHITE,
		BALL_BLUE,
		BALL_BLACK,
		BALL_RED,
		BALL_GREEN,
		BALL_EMBLEM,
		BALL_MULTICOLOR,
		BALL_LAND,
		EXPANSION_IMAGE
	};

	static int CALLBACK CompareFunc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
	static BOOL IsCardType(CMListCtrl::FILTERS Filter, CCardEntry* pCardEntry);

	virtual bool DrawSubItemText(HDC hdc, int nItem, int nSubitem, LPCTSTR strText, const CRect& itemRect, const CRect& subitemRect, int iStateId);
	virtual bool DrawSubItemText(LPNMLVCUSTOMDRAW pCustomDraw, const CRect& subitemRect, COLORREF textColor, COLORREF backgroundColor);//old version
	static const LPCTSTR s_strFont;//for old version
	std::map<CString, std::set<CString>> m_Blocks;

	static const TCHAR s_strSeparator[];

	int InsertItemImpl(CCardEntry* pCardEntry, int nCount = 1);
	int InsertItem2(int nItem, LPCTSTR strItem, int nImage = -1);
	BOOL SetItemText2(int nItem, int nSubItem, LPCTSTR strText);

	BOOL IsCardFilteredBy(FILTERS filter, CCardEntry* pCardEntry);
	BOOL IsCardFiltered(CCardEntry* pCardEntry, FILTERS exceptFromFilter = (FILTERS)-1, FILTERS exceptToFilter = (FILTERS)-1);
	BOOL IsInBlock(CString strBlock, CCardEntry* pCardEntry);

	BOOL DeleteItem(int nItem) { return __super::DeleteItem(nItem); }
	void UpdateStatistics(CCardEntry* pCardEntry, int nCount, bool bTotal, bool bVisible);

	std::auto_ptr<Gdiplus::Font> m_apTextFont;
	CFont m_Font;

	BOOL	m_bUseCountColumn;
	std::list<CDeckCardEntry*> m_FilteredItems;
	std::map<FILTERS, CString> m_Filters;
	std::vector<int> m_Counts;
	std::vector<int> m_VisibleCounts;
	int m_nTotalCount;
	int m_nTotalVisibleCount;

	BOOL	m_bUseMTGSymbols;
	int		m_nLastContextMenuItem;

	CImageList m_ImageList;
	const CMTGSymbol* m_pSmallSymbols;

    afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCopyCardName();
	afx_msg void OnCopyCardRulesText();
	afx_msg void OnCopyAllCardInfo();
	afx_msg void OnGetCardRulings();
	afx_msg void OnDeleteItem(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnFilterWhite();
	afx_msg void OnFilterBlue();
	afx_msg void OnFilterBlack();
	afx_msg void OnFilterRed();
	afx_msg void OnFilterGreen();
	afx_msg void OnFilterLand();
	afx_msg void OnFilterArtifact();
	afx_msg void OnFilterArtifactLand();
	afx_msg void OnFilterCreature();
	afx_msg void OnFilterPlaneswalker();
	afx_msg void OnFilterSorcery();
	afx_msg void OnFilterInstant();
	afx_msg void OnFilterEnchantment();
	afx_msg void OnFilterSpecial();
	afx_msg void OnFilterMythicRare();
	afx_msg void OnFilterRare();
	afx_msg void OnFilterUncommon();
	afx_msg void OnFilterCommon();
	afx_msg void OnFilterBasicLand();

    DECLARE_MESSAGE_MAP()
};
