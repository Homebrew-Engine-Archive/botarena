// DeckDialog.h : header file
//

#pragma once

#include "MListCtrl.h"
#include "DialogEx.h"
#include "FileComboBox.h"
#include "afxcmn.h"
#include "ImageButtonWithStyle.h"
#include "EStringAutoComplete.h"


//_____________________________________________________________________________
//
// CDeckDialog dialog
class CDeckDialog : public CDialogEx
{
public:
	CDeckDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDeckDialog();

	CString m_strDeck;

protected:
	enum { IDD = IDD_DECKS };

	struct FilterButtonInfo
	{
		FilterButtonInfo(CBitmapButton* _pButton, UINT _nID, LPCTSTR _strResource, LPCTSTR _strToolTip)
			: pButton(_pButton)
			, nID(_nID)
			, strResource(_strResource)
			, strToolTip(_strToolTip)
		{}

		CBitmapButton* pButton;
		UINT nID;
		CString strResource;
		CString strToolTip;
	};

	void Refresh();
	void UpdateDeckList();
	int AddCardListEntry(CCardEntry* pCardEntry);
	int AddSideboardListEntry(CCardEntry* pCardEntry);
	int AddDeckListEntry(CCardEntry* pCardEntry);
	void CheckChanged();
	void SaveDeck();
	void UpdateStatistics();

	void InitializeCardList();
	void UpdateCardList(CMListCtrl::FILTERS Filter, BOOL bAdd);

	BOOL CanAddToDeck();
	BOOL CanRemoveFromDeck();

	CEStringAutoComplete *m_acBlocks;
	IAutoComplete2 *m_pac;

	void EnableWindows();
	bool IsUsingCardList() const;
	bool IsUsingSideboardList() const;

	void ToggleFilter(CMListCtrl::FILTERS filter);
	void UpdateFiltersFromList();

	void ToggleFilter2(CMListCtrl::FILTERS filter);
	void UpdateFiltersFromList2();

	//CButton	m_FindSimilarButton;
	CImageButton m_AddButton;
	CImageButton m_RemoveButton;
	CImageButton m_DeckPathButton;

	CButton	m_OptionsButton;
	CStatic	m_Card;
	CBitmap	m_CardBitmap;
	CButton	m_SaveButton;
	CString	m_strCardTotal;
	CString	m_strDeckTotal;
	CString	m_strCreatureTotal;
	CString	m_strLandTotal;
	CString	m_strNonCreatureTotal;
	CString	m_strSearch;
	CStatic m_strSealStatus;

	CFileComboBox	m_DeckComboBox;

	CComboBoxEx		m_SearchType;

	CString			m_strDeckBasePath;
	CString			m_strDeckPath;
	CDeck			m_Deck;

	CImageList		m_ImageList;

	BOOL			m_bChanged;

	CMListCtrl		m_DeckList;
	CMListCtrl		m_CardList;
	CMListCtrl		m_SideboardList;

	HICON			m_hIcon;
	CCardEntry*		m_pCardEntry;

	CBitmapButton	m_WhiteFilterButton;
	CBitmapButton	m_BlueFilterButton;
	CBitmapButton	m_BlackFilterButton;
	CBitmapButton	m_RedFilterButton;
	CBitmapButton	m_GreenFilterButton;
	CBitmapButton	m_LandFilterButton;
	CBitmapButton	m_ArtifactFilterButton;
	CBitmapButton	m_ArtifactLandFilterButton;
	CBitmapButton	m_CreatureFilterButton;
	CBitmapButton	m_PlaneswalkerFilterButton;
	CBitmapButton	m_SorceryFilterButton;
	CBitmapButton	m_InstantFilterButton;
	CBitmapButton	m_EnchantmentFilterButton;
	CBitmapButton	m_SpecialFilterButton;
	CBitmapButton	m_MythicRareFilterButton;
	CBitmapButton	m_RareFilterButton;
	CBitmapButton	m_UncommonFilterButton;
	CBitmapButton	m_CommonFilterButton;
	CBitmapButton	m_BasicLandFilterButton;

	CBitmapButton	m_LandFilterButton2;
	CBitmapButton	m_ArtifactFilterButton2;
	CBitmapButton	m_ArtifactLandFilterButton2;
	CBitmapButton	m_CreatureFilterButton2;
	CBitmapButton	m_PlaneswalkerFilterButton2;
	CBitmapButton	m_SorceryFilterButton2;
	CBitmapButton	m_InstantFilterButton2;
	CBitmapButton	m_EnchantmentFilterButton2;

	std::vector<FilterButtonInfo> m_FilterButtons;
	std::vector<FilterButtonInfo> m_FilterButtons2;

	DWORD			m_dwLastSearchChange;
	CToolTipCtrl*	m_pTooltip;
	CTabCtrl		m_Tab;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void PostNcDestroy();

// Generated message map functions
protected:
	afx_msg void OnAdd();
	afx_msg void OnRemove();
	afx_msg void OnAddFast(NMHDR * pNMHDR, LRESULT * result);
	afx_msg void OnRemoveFast(NMHDR * pNMHDR, LRESULT * result);
	afx_msg void OnDeckPath();
	afx_msg void OnAddFromCardList(int nCount=1);
	afx_msg void OnAddFromSideboard(int nCount=1);
	afx_msg void OnBnClickedSearchButton();
	afx_msg void OnDeleteDeck();
	//afx_msg void OnFindSimilar();
	afx_msg void OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnItemchangedDeckList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnItemchangedSideboardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnNewConstructed();
	afx_msg void OnNewSealedDeck();
	afx_msg void OnOptions();
	afx_msg void OnRemoveToCardList(int nCount=1);
	afx_msg void OnRemoveToSideboard(int nCount=1);
	afx_msg void OnRenameDeck();
	afx_msg void OnSaveDeckAs();
	afx_msg void OnAddProduct();
	afx_msg void OnSave();
	afx_msg void OnSelchangeDeck();
	afx_msg void OnBnClickedFilterWhite();
	afx_msg void OnBnDoubleclickedFilterWhite();
	afx_msg void OnBnClickedFilterBlue();
	afx_msg void OnBnDoubleclickedFilterBlue();
	afx_msg void OnBnClickedFilterBlack();
	afx_msg void OnBnDoubleclickedFilterBlack();
	afx_msg void OnBnClickedFilterRed();
	afx_msg void OnBnDoubleclickedFilterRed();
	afx_msg void OnBnClickedFilterGreen();
	afx_msg void OnBnDoubleclickedFilterGreen();
	afx_msg void OnBnClickedFilterLand();
	afx_msg void OnBnDoubleclickedFilterLand();
	afx_msg void OnBnClickedFilterArtifact();
	afx_msg void OnBnDoubleclickedFilterArtifact();
	afx_msg void OnBnClickedFilterArtifactLand();
	afx_msg void OnBnDoubleclickedFilterArtifactLand();
	afx_msg void OnBnClickedFilterCreature();
	afx_msg void OnBnDoubleclickedFilterCreature();
	afx_msg void OnBnClickedFilterPlaneswalker();
	afx_msg void OnBnDoubleclickedFilterPlaneswalker();
	afx_msg void OnBnClickedFilterSorcery();
	afx_msg void OnBnDoubleclickedFilterSorcery();
	afx_msg void OnBnClickedFilterInstant();
	afx_msg void OnBnDoubleclickedFilterInstant();
	afx_msg void OnBnClickedFilterEnchantment();
	afx_msg void OnBnDoubleclickedFilterEnchantment();
	afx_msg void OnBnClickedFilterSpecial();
	afx_msg void OnBnDoubleclickedFilterSpecial();
	afx_msg void OnBnClickedFilterMythicRare();
	afx_msg void OnBnDoubleclickedFilterMythicRare();
	afx_msg void OnBnClickedFilterRare();
	afx_msg void OnBnDoubleclickedFilterRare();
	afx_msg void OnBnClickedFilterUncommon();
	afx_msg void OnBnDoubleclickedFilterUncommon();
	afx_msg void OnBnClickedFilterCommon();
	afx_msg void OnBnDoubleclickedFilterCommon();
	afx_msg void OnBnClickedFilterBasicLand();
	afx_msg void OnBnDoubleclickedFilterBasicLand();

	afx_msg void OnBnClickedFilterLand2();
	afx_msg void OnBnDoubleclickedFilterLand2();
	afx_msg void OnBnClickedFilterArtifact2();
	afx_msg void OnBnDoubleclickedFilterArtifact2();
	afx_msg void OnBnClickedFilterArtifactLand2();
	afx_msg void OnBnDoubleclickedFilterArtifactLand2();
	afx_msg void OnBnClickedFilterCreature2();
	afx_msg void OnBnDoubleclickedFilterCreature2();
	afx_msg void OnBnClickedFilterPlaneswalker2();
	afx_msg void OnBnDoubleclickedFilterPlaneswalker2();
	afx_msg void OnBnClickedFilterSorcery2();
	afx_msg void OnBnDoubleclickedFilterSorcery2();
	afx_msg void OnBnClickedFilterInstant2();
	afx_msg void OnBnDoubleclickedFilterInstant2();
	afx_msg void OnBnClickedFilterEnchantment2();
	afx_msg void OnBnDoubleclickedFilterEnchantment2();

	afx_msg void OnNMDblclkDeckList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclkSideboardList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclkCardList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnSelchangeSearchType();
	afx_msg void OnClearDeck();
	afx_msg void OnInfoHeader();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnKillfocusSearch();

	LRESULT OnFilterChanged(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP();
};
