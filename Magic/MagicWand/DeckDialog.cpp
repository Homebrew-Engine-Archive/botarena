// DeckDialog.cpp : implementation file
//

#include "stdafx.h"
#include "DeckDialog.h"
#include "DeckRenameDialog.h"
#include "CardDialog.h"
#include "Resource.h"
#include "StarterBoosterDlg.h"
#include "SealedDeckInfoDlg.h"
#include "DeckInfoDlg.h"
#include "MagicWandDoc.h"

#define new DEBUG_NEW


//_____________________________________________________________________________
//
// CDeckDialog dialog
//
CDeckDialog::CDeckDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDeckDialog::IDD, pParent)
{
	m_strCardTotal = _T("");
	m_strDeckTotal = _T("");
	m_strCreatureTotal = _T("");
	m_strLandTotal = _T("");
	m_strNonCreatureTotal = _T("");
	m_strSearch = _T("");
	
	m_bChanged = FALSE;

	m_strDeckBasePath = g_pCoreApp->GetDeckPath();
	::CreateDirectory(m_strDeckBasePath, NULL);

	m_hIcon = g_pCoreApp->LoadIcon(IDI_DECK);

	m_strDeck = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECK, _T(""));

	m_pTooltip = NULL;

	m_dwLastSearchChange = 0;

	m_FilterButtons.push_back(FilterButtonInfo(&m_WhiteFilterButton, IDC_FILTER_WHITE, _T("CB_WHITE"), _T("Show white cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_BlueFilterButton, IDC_FILTER_BLUE, _T("CB_BLUE"), _T("Show blue cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_BlackFilterButton, IDC_FILTER_BLACK, _T("CB_BLACK"), _T("Show black cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_RedFilterButton, IDC_FILTER_RED, _T("CB_RED"), _T("Show red cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_GreenFilterButton, IDC_FILTER_GREEN, _T("CB_GREEN"), _T("Show green cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_LandFilterButton, IDC_FILTER_LAND, _T("CB_LAND"), _T("Show land cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_ArtifactFilterButton, IDC_FILTER_ARTIFACT, _T("CB_ARTIFACT"), _T("Show artifact cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_ArtifactLandFilterButton, IDC_FILTER_ARTIFACT_LAND, _T("CB_ARTIFACT_LAND"), _T("Show artifact land cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_CreatureFilterButton, IDC_FILTER_CREATURE, _T("CB_CREATURE"), _T("Show creature cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_PlaneswalkerFilterButton, IDC_FILTER_PLANESWALKER, _T("CB_PLANESWALKER"), _T("Show planeswalker cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_SorceryFilterButton, IDC_FILTER_SORCERY, _T("CB_SORCERY"), _T("Show sorcery cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_InstantFilterButton, IDC_FILTER_INSTANT, _T("CB_INSTANT"), _T("Show instant cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_EnchantmentFilterButton, IDC_FILTER_ENCHANTMENT, _T("CB_ENCHANTMENT"), _T("Show enchantment cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_BasicLandFilterButton, IDC_FILTER_BASIC_LAND, _T("CB_BASIC_LAND"), _T("Show basic land cards"))); //don't move this line (1/3), basic land filter wouldn't work anymore...
	m_FilterButtons.push_back(FilterButtonInfo(&m_SpecialFilterButton, IDC_FILTER_SPECIAL, _T("CB_SPECIAL"), _T("Show special cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_MythicRareFilterButton, IDC_FILTER_MYTHIC_RARE, _T("CB_MYTHIC_RARE"), _T("Show mythic rare cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_RareFilterButton, IDC_FILTER_RARE, _T("CB_RARE"), _T("Show rare cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_UncommonFilterButton, IDC_FILTER_UNCOMMON, _T("CB_UNCOMMON"), _T("Show uncommon cards")));
	m_FilterButtons.push_back(FilterButtonInfo(&m_CommonFilterButton, IDC_FILTER_COMMON, _T("CB_COMMON"), _T("Show common cards")));

	m_FilterButtons2.push_back(FilterButtonInfo(&m_LandFilterButton2, IDC_FILTER_LAND2, _T("CB_LAND"), _T("Show land cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_ArtifactFilterButton2, IDC_FILTER_ARTIFACT2, _T("CB_ARTIFACT"), _T("Show artifact cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_ArtifactLandFilterButton2, IDC_FILTER_ARTIFACT_LAND2, _T("CB_ARTIFACT_LAND"), _T("Show artifact land cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_CreatureFilterButton2, IDC_FILTER_CREATURE2, _T("CB_CREATURE"), _T("Show creature cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_PlaneswalkerFilterButton2, IDC_FILTER_PLANESWALKER2, _T("CB_PLANESWALKER"), _T("Show planeswalker cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_SorceryFilterButton2, IDC_FILTER_SORCERY2, _T("CB_SORCERY"), _T("Show sorcery cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_InstantFilterButton2, IDC_FILTER_INSTANT2, _T("CB_INSTANT"), _T("Show instant cards")));
	m_FilterButtons2.push_back(FilterButtonInfo(&m_EnchantmentFilterButton2, IDC_FILTER_ENCHANTMENT2, _T("CB_ENCHANTMENT"), _T("Show enchantment cards")));
}

CDeckDialog::~CDeckDialog()
{
	if (m_hIcon)
		DeleteObject(m_hIcon);

	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECK, m_strDeck);

	delete m_pTooltip;
	m_pac->Release();
	delete m_acBlocks;
}

void CDeckDialog::Refresh()
{
	m_DeckComboBox.Dir(m_strDeckBasePath, _T("txt"));
	m_DeckComboBox.SetCurSel(0);
	m_DeckComboBox.SelectString(m_strDeck);

	UpdateDeckList();
}

void CDeckDialog::UpdateDeckList()
{
	m_strDeck = m_DeckComboBox.GetFileTitle();
	m_strDeckPath = m_DeckComboBox.GetFilePath();

	m_DeckList.DeleteAllItems();
	m_DeckList.ClearFilters();

	m_SideboardList.DeleteAllItems();
	m_SideboardList.ClearFilters();

	UpdateFiltersFromList();

	if (!m_strDeck.IsEmpty())
	{
		m_Deck.ImportDeck(m_strDeckPath, false);

		if (m_Deck.GetStatus() != CDeck::DeckStatus::ParseError)
		{
			const CDeck::DeckCards& deckCards(m_Deck.GetDeck());
			
			for (size_t i = 0; i < deckCards.size(); ++i)
			{
				const CDeck::DeckCard& deckCard(deckCards[i]);

				CCardEntry* pCardEntry = NULL;
				if (deckCard.nImageId)
					pCardEntry = CCardStore::GetInstance()->GetCardByID(deckCard.nImageId);
				else
					pCardEntry = CCardStore::GetInstance()->GetCard(deckCard.strCardName, TRUE);

				if (pCardEntry)
					AddDeckListEntry(pCardEntry);
			}

			const CDeck::DeckCards& sideboardCards(m_Deck.GetSideboard());
			
			for (size_t i = 0; i < sideboardCards.size(); ++i)
			{
				const CDeck::DeckCard& sideboardCard(sideboardCards[i]);

				CCardEntry* pCardEntry = NULL;
				if (sideboardCard.nImageId)
					pCardEntry = CCardStore::GetInstance()->GetCardByID(sideboardCard.nImageId);
				else
					pCardEntry = CCardStore::GetInstance()->GetCard(sideboardCard.strCardName, TRUE);

				if (pCardEntry)
					AddSideboardListEntry(pCardEntry);
			}
		}
		else
		{
			m_strDeck.Empty();
			m_strDeckPath.Empty();
		}
	}
	else
	{
		m_Deck.Clear();
	}

	m_DeckList.Sort();
	m_DeckList.EnsureVisible(0, TRUE);
	
	m_SideboardList.Sort();
	m_SideboardList.EnsureVisible(0, TRUE);

	m_bChanged = FALSE;

	EnableWindows();
	UpdateStatistics();

	if (m_Deck.GetSealed() && m_Deck.GetStatus() == CDeck::DeckStatus::SealCorruption)
		MessageBox(_T("This sealed deck is corrupted. You will not be able to save changes to this deck."), _T("Sealed Deck Error"), MB_OK | MB_ICONERROR);
}

void CDeckDialog::UpdateCardList(CMListCtrl::FILTERS filter, BOOL bAdd)
{
	if (!bAdd)
	{
		m_CardList.RemoveFilter(filter);
		UpdateStatistics();
		return;
	}

	m_CardList.AddFilter(filter);
	UpdateStatistics();
}

int CDeckDialog::AddCardListEntry(CCardEntry* pCardEntry)
{
	return m_CardList.InsertItem(pCardEntry);
}

int CDeckDialog::AddDeckListEntry(CCardEntry* pCardEntry)
{
	return m_DeckList.InsertItem(pCardEntry);
}

int CDeckDialog::AddSideboardListEntry(CCardEntry* pCardEntry)
{
	return m_SideboardList.InsertItem(pCardEntry);
}

void CDeckDialog::CheckChanged()
{
	if (m_bChanged && (!m_Deck.GetSealed() || m_Deck.GetStatus() == CDeck::DeckStatus::Okay))
		if (MessageBox(_T("Save changes?"), _T("Save Deck"), MB_ICONQUESTION | MB_YESNO) == IDYES)
			SaveDeck();
}

void CDeckDialog::SaveDeck()
{
	if (m_Deck.GetSealed() && m_Deck.GetStatus() == CDeck::DeckStatus::SealCorruption)
		return;

	if (m_Deck.GetReadOnly())
	{
		if (MessageBox(_T("This is a read-only deck, do you want to save anyway?"),
			_T("Save Deck"), MB_ICONQUESTION | MB_YESNO) != IDYES)
			return;
	}

	CDeck::DeckCards deckCards;
	m_DeckList.GetDeckCards(deckCards);
	m_Deck.SetDeck(deckCards, false);

	CDeck::DeckCards sideboardCards;
	m_SideboardList.GetDeckCards(sideboardCards);
	m_Deck.SetSideboard(sideboardCards);

	if (!m_Deck.ExportDeck(m_strDeckPath))
	{
		MessageBox(_T("Error saving deck"), _T("Save Deck"), MB_ICONERROR);
		return;
	}

	m_bChanged = FALSE;
	EnableWindows();
	UpdateStatistics();
}

void CDeckDialog::UpdateStatistics()
{
	int nTotalVisibleCount = m_DeckList.GetTotalVisibleCount();
	int nTotalCount = m_DeckList.GetTotalCount();
	if (nTotalVisibleCount == nTotalCount)
		m_strDeckTotal.Format(_T("%d"), nTotalCount);
	else
		m_strDeckTotal.Format(_T("%d/%d"), nTotalVisibleCount, nTotalCount);

	int nVisibleLands = m_DeckList.GetVisibleCount(CMListCtrl::FT_LAND);
	int nLands = m_DeckList.GetCount(CMListCtrl::FT_LAND);
	if (nVisibleLands == nLands)
		m_strLandTotal.Format(_T("%d"), nLands);
	else
		m_strLandTotal.Format(_T("%d/%d"), nVisibleLands, nLands);

	int nVisibleCreatures = m_DeckList.GetVisibleCount(CMListCtrl::FT_CREATURE);
	int nCreatures = m_DeckList.GetCount(CMListCtrl::FT_CREATURE);
	if (nVisibleCreatures == nCreatures)
		m_strCreatureTotal.Format(_T("%d"), nCreatures);
	else
		m_strCreatureTotal.Format(_T("%d/%d"), nVisibleCreatures, nCreatures);
	
	int nVisibleOthers = m_DeckList.GetVisibleCount(CMListCtrl::FT_ARTIFACT) -
		m_DeckList.GetVisibleCount(CMListCtrl::FT_ARTIFACT_LAND) +
		m_DeckList.GetVisibleCount(CMListCtrl::FT_PLANESWALKER) +
		m_DeckList.GetVisibleCount(CMListCtrl::FT_SORCERY) +
		m_DeckList.GetVisibleCount(CMListCtrl::FT_INSTANT) +
		m_DeckList.GetVisibleCount(CMListCtrl::FT_ENCHANTMENT);
	int nOthers = m_DeckList.GetCount(CMListCtrl::FT_ARTIFACT) -
		m_DeckList.GetCount(CMListCtrl::FT_ARTIFACT_LAND) +
		m_DeckList.GetCount(CMListCtrl::FT_PLANESWALKER) +
		m_DeckList.GetCount(CMListCtrl::FT_SORCERY) +
		m_DeckList.GetCount(CMListCtrl::FT_INSTANT) +
		m_DeckList.GetCount(CMListCtrl::FT_ENCHANTMENT);
	if (nVisibleOthers == nOthers)
		m_strNonCreatureTotal.Format(_T("%d"), nOthers);
	else
		m_strNonCreatureTotal.Format(_T("%d/%d"), nVisibleOthers, nOthers);

	if (IsUsingCardList())
	{
		int nVisibleCount = m_CardList.GetTotalVisibleCount();
		int nCount = m_CardList.GetTotalCount();

		if (nCount == nVisibleCount)
			m_strCardTotal.Format(_T("%d"), nCount);
		else
			m_strCardTotal.Format(_T("%d/%d"), nVisibleCount, nCount);
	}
	else
	if (IsUsingSideboardList())
	{
		int nVisibleCount = m_SideboardList.GetTotalVisibleCount();
		int nCount = m_SideboardList.GetTotalCount();

		if (nCount == nVisibleCount)
			m_strCardTotal.Format(_T("%d"), nCount);
		else
			m_strCardTotal.Format(_T("%d/%d"), nVisibleCount, nCount);
	}
	else
		m_strCardTotal = _T("");

	UpdateData(TO_UI);
}

bool CDeckDialog::IsUsingCardList() const
{
	return m_Tab.GetCurSel() == 0;
}

bool CDeckDialog::IsUsingSideboardList() const
{
	return m_Tab.GetCurSel() == 1;
}

BOOL CDeckDialog::CanAddToDeck()
{
	if (!m_CardList.GetSelectedCount())
		return FALSE;

	if (!m_Deck.GetSealed())
		return TRUE;

	int nIndex = -1;
	while ((nIndex = m_CardList.GetNextItem(nIndex, LVNI_SELECTED)) != -1)
	{
		CMListCtrl::CDeckCardEntry* pDeckCardEntry = m_CardList.GetItem(nIndex);
		if (pDeckCardEntry->GetCardEntry()->GetRarity() != RarityType::BasicLand)
			return FALSE;
	}

	return TRUE;
}

BOOL CDeckDialog::CanRemoveFromDeck()
{
	if (!m_DeckList.GetSelectedCount())
		return FALSE;

	if (!m_Deck.GetSealed())
		return TRUE;

	int nIndex = -1;
	while ((nIndex = m_DeckList.GetNextItem(nIndex, LVNI_SELECTED)) != -1)
	{
		CMListCtrl::CDeckCardEntry* pDeckCardEntry = m_DeckList.GetItem(nIndex);
		if (pDeckCardEntry->GetCardEntry()->GetRarity() != RarityType::BasicLand)
			return FALSE;
	}

	return TRUE;
}

void CDeckDialog::EnableWindows()
{
	m_SaveButton.EnableWindow(
		TRUE);
		//m_bChanged && (!m_Deck.GetSealed() || m_Deck.GetStatus() != CDeck::DeckStatus::SealCorruption));

	m_AddButton.EnableWindow((IsUsingCardList() && CanAddToDeck()) || (IsUsingSideboardList() && m_SideboardList.GetSelectedCount()));
	m_RemoveButton.EnableWindow((IsUsingCardList() && CanRemoveFromDeck()) || (IsUsingSideboardList() && m_DeckList.GetSelectedCount()));

	m_CardList.ShowWindow(IsUsingCardList());
	m_SideboardList.ShowWindow(IsUsingSideboardList());
}

void CDeckDialog::ToggleFilter(CMListCtrl::FILTERS filter)
{
	CMListCtrl* pList = NULL;
	if (IsUsingCardList())
		pList = &m_CardList;
	else
	if (IsUsingSideboardList())
		pList = &m_SideboardList;
	else
		return;

	CBitmapButton* pButton = m_FilterButtons[filter].pButton;
	const CString& strResource(m_FilterButtons[filter].strResource);

	if (!pList->HasFilter(filter))
		pButton->LoadBitmaps(strResource + _T("D"), strResource + _T("D"));
	else
		pButton->LoadBitmaps(strResource + _T("U"), strResource + _T("U"));
	pButton->Invalidate();

	pList->ToggleFilter(filter);

	UpdateStatistics();
}

void CDeckDialog::ToggleFilter2(CMListCtrl::FILTERS filter)
{
	CBitmapButton* pButton = m_FilterButtons2[filter - CMListCtrl::FT_LAND].pButton;
	const CString& strResource(m_FilterButtons2[filter - CMListCtrl::FT_LAND].strResource);

	if (!m_DeckList.HasFilter(filter))
		pButton->LoadBitmaps(strResource + _T("D"), strResource + _T("D"));
	else
		pButton->LoadBitmaps(strResource + _T("U"), strResource + _T("U"));
	pButton->Invalidate();

	m_DeckList.ToggleFilter(filter);

	UpdateStatistics();
}

void CDeckDialog::UpdateFiltersFromList()
{
	UpdateData(FROM_UI);

	CMListCtrl* pList = NULL;
	if (IsUsingCardList())
		pList = &m_CardList;
	else
	if (IsUsingSideboardList())
		pList = &m_SideboardList;
	else
		return;

	for (int i = CMListCtrl::FT_WHITE; i <= CMListCtrl::FT_COMMON; ++i)
	{
		CBitmapButton* pButton = m_FilterButtons[i].pButton;
		const CString& strResource(m_FilterButtons[i].strResource);

		if (pList->HasFilter((CMListCtrl::FILTERS)i))
			pButton->LoadBitmaps(strResource + _T("D"), strResource + _T("D"));
		else
			pButton->LoadBitmaps(strResource + _T("U"), strResource + _T("U"));

		pButton->Invalidate();
	}
	
	for (int i = CMListCtrl::FT_CARD_NAME; i <= CMListCtrl::FT_BLOCK; ++i)
		if (pList->HasFilter((CMListCtrl::FILTERS)i, m_strSearch))
		{
			m_SearchType.SetCurSel(i - CMListCtrl::FT_CARD_NAME);
			break;
		}

	for (int i = CMListCtrl::FT_LAND; i <= CMListCtrl::FT_ENCHANTMENT; ++i)
	{
		CBitmapButton* pButton = m_FilterButtons2[i - CMListCtrl::FT_LAND].pButton;
		const CString& strResource(m_FilterButtons2[i - CMListCtrl::FT_LAND].strResource);

		if (m_DeckList.HasFilter((CMListCtrl::FILTERS)i))
			pButton->LoadBitmaps(strResource + _T("D"), strResource + _T("D"));
		else
			pButton->LoadBitmaps(strResource + _T("U"), strResource + _T("U"));

		pButton->Invalidate();
	}

	UpdateData(TO_UI);
}

void CDeckDialog::UpdateFiltersFromList2()
{
	for (int i = CMListCtrl::FT_LAND; i <= CMListCtrl::FT_ENCHANTMENT; ++i)
	{
		CBitmapButton* pButton = m_FilterButtons2[i - CMListCtrl::FT_LAND].pButton;
		const CString& strResource(m_FilterButtons2[i - CMListCtrl::FT_LAND].strResource);

		if (m_DeckList.HasFilter((CMListCtrl::FILTERS)i))
			pButton->LoadBitmaps(strResource + _T("D"), strResource + _T("D"));
		else
			pButton->LoadBitmaps(strResource + _T("U"), strResource + _T("U"));

		pButton->Invalidate();
	}
}

//_____________________________________________________________________________
//
// CDeckDialog - Overrides
//

void CDeckDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CARD, m_Card);
	DDX_Control(pDX, IDC_SAVE, m_SaveButton);
	DDX_Text(pDX, IDC_CARD_TOTAL, m_strCardTotal);	
	DDX_Text(pDX, IDC_DECK_TOTAL, m_strDeckTotal);
	DDX_Text(pDX, IDC_CREATURE_TOTAL, m_strCreatureTotal);
	DDX_Text(pDX, IDC_LAND_TOTAL, m_strLandTotal);
	DDX_Text(pDX, IDC_NONCREATURE_TOTAL, m_strNonCreatureTotal);
	DDX_Text(pDX, IDC_SEARCH, m_strSearch);
	DDX_Control(pDX, IDC_SEARCH_TYPE, m_SearchType);
	DDX_Control(pDX, IDC_TAB, m_Tab);
	DDX_Control(pDX, IDC_ADD, m_AddButton);
	DDX_Control(pDX, IDC_REMOVE, m_RemoveButton);
	DDX_Control(pDX, IDC_DECK_PATH, m_DeckPathButton);
}

void CDeckDialog::OnCancel() 
{
	CheckChanged();	

	CDialogEx::OnCancel();
}

BOOL CDeckDialog::OnInitDialog() 
{
	CDialogEx::OnInitDialog();
	AfxGetApp()->DoWaitCursor(1);

	m_AddButton.SetImage(g_pCoreApp->GetBitmapPath() + _T("\\cardup.png"));
	m_RemoveButton.SetImage(g_pCoreApp->GetBitmapPath() + _T("\\carddown.png"));
	m_DeckPathButton.SetImage(g_pCoreApp->GetBitmapPath() + _T("\\folder.png"));

	g_MagicWandApp.m_hwndDialog = m_hWnd;

	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);

	m_DeckComboBox.SubclassDlgItem(IDC_DECK, this);
	m_DeckComboBox.AddImage(IDI_DECK, ~CFile::readOnly);
	m_DeckComboBox.AddImage(IDI_DECK_READONLY, CFile::readOnly);

	int nModuleCount = CCardStore::GetInstance()->GetModuleCount();
	for (int i = 0; i < nModuleCount; ++i)
	{
		CCardModule* pModule = CCardStore::GetInstance()->GetModule(i);
		m_DeckComboBox.AddImage(pModule->GetIcon(), CString(_T("(")) + pModule->GetExpansionName() + _T(")"));
	}

	m_DeckList.Initialize(IDC_DECK_LIST, this, TRUE);
	m_SideboardList.Initialize(IDC_SIDEBOARD_LIST, this, TRUE);
	m_CardList.Initialize(IDC_CARD_LIST, this, FALSE);

	m_CardBitmap.Attach(CCardStore::GetInstance()->GetBackBitmap().GetHBITMAP());
	HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
	if (hPreviousBitmap)
		::DeleteObject(hPreviousBitmap);
	
	m_pCardEntry = NULL;

	// Left, Top, Right, Bottom

	SetResize(IDC_ADD, 0.5, 0.5, 0.5, 0.5);
	SetResize(IDC_REMOVE, 0.5, 0.5, 0.5, 0.5);

	SetResize(IDC_CARD, 1, 0.5, 1, 0.5);
	SetResize(IDC_DECK_LIST, 0, 0, 1, 0.5);
	SetResize(IDC_SIDEBOARD_LIST, 0, 0.5, 1, 1);
	SetResize(IDC_CARD_LIST, 0, 0.5, 1, 1);

	SetResize(IDC_SEARCH_TYPE, 0, 0.5, 0, 0.5);
	SetResize(IDC_STATIC2, 0, 0.5, 0, 0.5);
	SetResize(IDC_SEARCH, 0, 0.5, 0, 0.5);
	SetResize(IDC_SEARCH_BUTTON, 0, 0.5, 0, 0.5);
	SetResize(IDC_CARD_TOTAL, 0, 0.5, 0, 0.5);

	for (size_t i = 0; i < m_FilterButtons.size(); ++i)
	{
		m_FilterButtons[i].pButton->AutoLoad(m_FilterButtons[i].nID, this);
		SetResize(m_FilterButtons[i].nID, 0, 0.5, 0, 0.5);
	}

	for (size_t i = 0; i < m_FilterButtons2.size(); ++i)
	{
		m_FilterButtons2[i].pButton->AutoLoad(m_FilterButtons2[i].nID, this);
	}

	SetResize(IDC_TAB, 0, 0.5, 1, 1);

#ifdef _MY_DEBUG
/*
	for (int i = 0; i < CCardFactory::s_CardClassCount; ++i)
	{
		ATLTRACE(_T("[%s]\n\t\t"), CCardFactory::s_CardClassNames[i]);

		CCard* pCard = CCardFactory::GetInstance()->CreateCard(CCardFactory::s_CardClassNames[i], -1);

		if (!pCard)
			continue;

		for (int j = 0; j < pCard->GetAbilityCount(); ++j)
		{
			CAbility* pAbility = pCard->GetAbility(j);

			ATLTRACE(_T("[%s]"), pAbility->GetUniqueChildAbilityName());
		}

		ATLTRACE(_T("\n"));

		delete pCard;
	}
*/
#endif

	COMBOBOXEXITEM cbi;
	cbi.mask = CBEIF_TEXT;

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Card Name");
	m_SearchType.InsertItem(&cbi);

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Card Type");
	m_SearchType.InsertItem(&cbi);

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Cost");
	m_SearchType.InsertItem(&cbi);

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Power/Toughness");
	m_SearchType.InsertItem(&cbi);

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Rules Text");
	m_SearchType.InsertItem(&cbi);

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Expansion");
	m_SearchType.InsertItem(&cbi);

	cbi.iItem = m_SearchType.GetCount();
	cbi.pszText = _T("Block");
	m_SearchType.InsertItem(&cbi);

	m_SearchType.SetCurSel(0);

	m_Tab.InsertItem(0, _T("All Cards"));
	m_Tab.InsertItem(1, _T("Sideboard"));

	// autocompletition preparation
	IUnknown *punkSource = NULL;

	m_acBlocks = new CEStringAutoComplete;
	m_acBlocks->Add(_T("Modern"));
	m_acBlocks->Add(_T("Standard"));
	m_acBlocks->Add(_T("Extended"));
	m_acBlocks->Add(_T("Return to Ravnica"));
	m_acBlocks->Add(_T("Innistrad"));
	m_acBlocks->Add(_T("Scars of Mirrodin"));
	m_acBlocks->Add(_T("Zendikar"));
	m_acBlocks->Add(_T("Shards of Alara"));
	m_acBlocks->Add(_T("Lorwyn-Shadowmoor"));
	m_acBlocks->Add(_T("Shadowmoor"));
	m_acBlocks->Add(_T("Lorwyn"));
	m_acBlocks->Add(_T("Time Spiral"));
	m_acBlocks->Add(_T("Ravnica"));
	m_acBlocks->Add(_T("Kamigawa"));
	m_acBlocks->Add(_T("Mirrodin"));
	m_acBlocks->Add(_T("Onslaught"));
	m_acBlocks->Add(_T("Odyssey"));
	m_acBlocks->Add(_T("Invasion"));
	m_acBlocks->Add(_T("Masques"));
	m_acBlocks->Add(_T("Urza"));
	m_acBlocks->Add(_T("Tempest"));
	m_acBlocks->Add(_T("Mirage"));
	m_acBlocks->Add(_T("Ice Age"));
	m_acBlocks->QueryInterface(IID_PPV_ARGS(&punkSource));

	HWND hwnd = ::GetDlgItem(m_hWnd, IDC_SEARCH);
	CoCreateInstance(CLSID_AutoComplete, 
		NULL, 
		CLSCTX_INPROC_SERVER, 
		IID_IAutoComplete2, 
		(LPVOID*)&m_pac);
	
	m_pac->Init(hwnd, punkSource, NULL, NULL);
	m_pac->SetOptions(ACO_NONE);
	punkSource->Release();

	// Populate data

	DWORD dwPos = CCardStore::GetInstance()->EnumCardStartPos();
	CCardEntry* pCardEntry;

	while (CCardStore::GetInstance()->EnumCardNextPos(dwPos, &pCardEntry))
	{
		if (!(pCardEntry->GetCardType() & CardType::Token).Any())
			AddCardListEntry(pCardEntry);
	}

	UpdateStatistics();

	Refresh();

	if (!m_DeckList.GetProfile())
		m_DeckList.SortColumn(CMListCtrl::CARD_NAME);

	if (!m_SideboardList.GetProfile())
		m_SideboardList.SortColumn(CMListCtrl::CARD_NAME);

	if (!m_CardList.GetProfile())
		m_CardList.SortColumn(CMListCtrl::CARD_NAME);

	AfxGetApp()->DoWaitCursor(-1);
	EnableWindows();

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDeckDialog::OnOK() 
{
	CheckChanged();	

	CDialogEx::OnOK();
}

void CDeckDialog::PostNcDestroy()
{
	CDialogEx::PostNcDestroy();

	g_MagicWandApp.m_hwndDialog = NULL;
    g_MagicWandApp.m_gpToolTip = NULL;
}

//_____________________________________________________________________________
//
// CDeckDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CDeckDialog, CDialogEx)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_REMOVE, OnRemove)
	ON_NOTIFY(NM_RCLICK, IDC_ADD, OnAddFast)
	ON_NOTIFY(NM_RCLICK, IDC_REMOVE, OnRemoveFast)
	ON_BN_CLICKED(IDC_DECK_PATH, OnDeckPath)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_CARD_LIST, OnItemchangedCardList)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_DECK_LIST, OnItemchangedDeckList)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_SIDEBOARD_LIST, OnItemchangedSideboardList)
	ON_BN_CLICKED(IDC_SAVE, OnSave)
	ON_CBN_SELCHANGE(IDC_DECK, OnSelchangeDeck)
	ON_BN_CLICKED(IDC_FILTER_WHITE, OnBnClickedFilterWhite)
	ON_BN_DOUBLECLICKED(IDC_FILTER_WHITE, OnBnDoubleclickedFilterWhite)
	ON_BN_CLICKED(IDC_FILTER_BLUE, OnBnClickedFilterBlue)
	ON_BN_DOUBLECLICKED(IDC_FILTER_BLUE, OnBnDoubleclickedFilterBlue)
	ON_BN_CLICKED(IDC_FILTER_BLACK, OnBnClickedFilterBlack)
	ON_BN_DOUBLECLICKED(IDC_FILTER_BLACK, OnBnDoubleclickedFilterBlack)
	ON_BN_CLICKED(IDC_FILTER_RED, OnBnClickedFilterRed)
	ON_BN_DOUBLECLICKED(IDC_FILTER_RED, OnBnDoubleclickedFilterRed)
	ON_BN_CLICKED(IDC_FILTER_GREEN, OnBnClickedFilterGreen)
	ON_BN_DOUBLECLICKED(IDC_FILTER_GREEN, OnBnDoubleclickedFilterGreen)
	ON_BN_CLICKED(IDC_FILTER_LAND, OnBnClickedFilterLand)
	ON_BN_DOUBLECLICKED(IDC_FILTER_LAND, OnBnDoubleclickedFilterLand)
	ON_BN_CLICKED(IDC_FILTER_ARTIFACT, OnBnClickedFilterArtifact)
	ON_BN_DOUBLECLICKED(IDC_FILTER_ARTIFACT, OnBnDoubleclickedFilterArtifact)
	ON_BN_CLICKED(IDC_FILTER_ARTIFACT_LAND, OnBnClickedFilterArtifactLand)
	ON_BN_DOUBLECLICKED(IDC_FILTER_ARTIFACT_LAND, OnBnDoubleclickedFilterArtifactLand)
	ON_BN_CLICKED(IDC_FILTER_CREATURE, OnBnClickedFilterCreature)
	ON_BN_DOUBLECLICKED(IDC_FILTER_CREATURE, OnBnDoubleclickedFilterCreature)
	ON_BN_CLICKED(IDC_FILTER_PLANESWALKER, OnBnClickedFilterPlaneswalker)
	ON_BN_DOUBLECLICKED(IDC_FILTER_PLANESWALKER, OnBnDoubleclickedFilterPlaneswalker)
	ON_BN_CLICKED(IDC_FILTER_SORCERY, OnBnClickedFilterSorcery)
	ON_BN_DOUBLECLICKED(IDC_FILTER_SORCERY, OnBnDoubleclickedFilterSorcery)
	ON_BN_CLICKED(IDC_FILTER_INSTANT, OnBnClickedFilterInstant)
	ON_BN_DOUBLECLICKED(IDC_FILTER_INSTANT, OnBnDoubleclickedFilterInstant)
	ON_BN_CLICKED(IDC_FILTER_ENCHANTMENT, OnBnClickedFilterEnchantment)
	ON_BN_DOUBLECLICKED(IDC_FILTER_ENCHANTMENT, OnBnDoubleclickedFilterEnchantment)
	ON_BN_CLICKED(IDC_FILTER_SPECIAL, OnBnClickedFilterSpecial)
	ON_BN_DOUBLECLICKED(IDC_FILTER_SPECIAL, OnBnDoubleclickedFilterSpecial)
	ON_BN_CLICKED(IDC_FILTER_MYTHIC_RARE, OnBnClickedFilterMythicRare)
	ON_BN_DOUBLECLICKED(IDC_FILTER_MYTHIC_RARE, OnBnDoubleclickedFilterMythicRare)
	ON_BN_CLICKED(IDC_FILTER_RARE, OnBnClickedFilterRare)
	ON_BN_DOUBLECLICKED(IDC_FILTER_RARE, OnBnDoubleclickedFilterRare)
	ON_BN_CLICKED(IDC_FILTER_UNCOMMON, OnBnClickedFilterUncommon)
	ON_BN_DOUBLECLICKED(IDC_FILTER_UNCOMMON, OnBnDoubleclickedFilterUncommon)
	ON_BN_CLICKED(IDC_FILTER_COMMON, OnBnClickedFilterCommon)
	ON_BN_DOUBLECLICKED(IDC_FILTER_COMMON, OnBnDoubleclickedFilterCommon)
	ON_BN_CLICKED(IDC_FILTER_BASIC_LAND, OnBnClickedFilterBasicLand)
	ON_BN_DOUBLECLICKED(IDC_FILTER_BASIC_LAND, OnBnDoubleclickedFilterBasicLand)

	ON_BN_CLICKED(IDC_FILTER_LAND2, OnBnClickedFilterLand2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_LAND2, OnBnDoubleclickedFilterLand2)
	ON_BN_CLICKED(IDC_FILTER_ARTIFACT2, OnBnClickedFilterArtifact2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_ARTIFACT2, OnBnDoubleclickedFilterArtifact2)
	ON_BN_CLICKED(IDC_FILTER_ARTIFACT_LAND2, OnBnClickedFilterArtifactLand2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_ARTIFACT_LAND2, OnBnDoubleclickedFilterArtifactLand2)
	ON_BN_CLICKED(IDC_FILTER_CREATURE2, OnBnClickedFilterCreature2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_CREATURE2, OnBnDoubleclickedFilterCreature2)
	ON_BN_CLICKED(IDC_FILTER_PLANESWALKER2, OnBnClickedFilterPlaneswalker2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_PLANESWALKER2, OnBnDoubleclickedFilterPlaneswalker2)
	ON_BN_CLICKED(IDC_FILTER_SORCERY2, OnBnClickedFilterSorcery2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_SORCERY2, OnBnDoubleclickedFilterSorcery2)
	ON_BN_CLICKED(IDC_FILTER_INSTANT2, OnBnClickedFilterInstant2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_INSTANT2, OnBnDoubleclickedFilterInstant2)
	ON_BN_CLICKED(IDC_FILTER_ENCHANTMENT2, OnBnClickedFilterEnchantment2)
	ON_BN_DOUBLECLICKED(IDC_FILTER_ENCHANTMENT2, OnBnDoubleclickedFilterEnchantment2)

	ON_MESSAGE(WM_APP_FILTER_CHANGED, OnFilterChanged)

	ON_NOTIFY(NM_DBLCLK, IDC_DECK_LIST, &CDeckDialog::OnNMDblclkDeckList)
	ON_NOTIFY(NM_DBLCLK, IDC_SIDEBOARD_LIST, &CDeckDialog::OnNMDblclkSideboardList)
	ON_NOTIFY(NM_DBLCLK, IDC_CARD_LIST, &CDeckDialog::OnNMDblclkCardList)
	ON_CBN_SELCHANGE(IDC_SEARCH_TYPE, OnSelchangeSearchType)
	ON_WM_TIMER()
	ON_WM_MOUSEMOVE()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB, &CDeckDialog::OnTcnSelchangeTab)
	ON_BN_CLICKED(IDC_SEARCH_BUTTON, &CDeckDialog::OnBnClickedSearchButton)
	ON_EN_KILLFOCUS(IDC_SEARCH, &CDeckDialog::OnEnKillfocusSearch)
	ON_BN_CLICKED(IDC_NEW, &CDeckDialog::OnNewConstructed)
	ON_COMMAND(ID_FILE_NEWCONSTRUCTED, &CDeckDialog::OnNewConstructed)
	ON_COMMAND(ID_FILE_SAVE, &CDeckDialog::OnSave)
	ON_COMMAND(ID_FILE_SAVEAS, &CDeckDialog::OnSaveDeckAs)
	ON_COMMAND(ID_FILE_RENAME, &CDeckDialog::OnRenameDeck)
	ON_COMMAND(ID_DECKCLEAR, &CDeckDialog::OnClearDeck)
	ON_COMMAND(ID_FILE_DELETE, &CDeckDialog::OnDeleteDeck)
	ON_COMMAND(ID_DE_EXIT, &CDeckDialog::OnOK)
	ON_COMMAND(ID_SEALED_NEWSEALED, &CDeckDialog::OnNewSealedDeck)
	ON_COMMAND(ID_SEALED_ADDPRODUCT, &CDeckDialog::OnAddProduct)
	ON_COMMAND(ID_INFO_HEADER, &CDeckDialog::OnInfoHeader)
END_MESSAGE_MAP()

void CDeckDialog::OnSelchangeSearchType() 
{
	m_strSearch.Empty();

	if (IsUsingCardList())
	{
		m_CardList.RemoveFilters(CMListCtrl::FT_CARD_NAME);
		m_CardList.EnsureVisible(0, TRUE);
		m_CardList.DeselectAllItems();
	}
	else
	if (IsUsingSideboardList())
	{
		m_SideboardList.RemoveFilters(CMListCtrl::FT_CARD_NAME);
		m_SideboardList.EnsureVisible(0, TRUE);
		m_SideboardList.DeselectAllItems();
	}

	UpdateStatistics();
	if (m_SearchType.GetCurSel() == CMListCtrl::FT_BLOCK - CMListCtrl::FT_CARD_NAME)
		m_pac->SetOptions(ACO_AUTOAPPEND);
	else
		m_pac->SetOptions(ACO_NONE);
}

void CDeckDialog::OnDeleteDeck() 
{
	if (m_Deck.GetReadOnly())
	{
		if (MessageBox(_T("This is a read-only deck, do you want to delete it?"),
			_T("Delete Deck"), MB_ICONQUESTION | MB_YESNO) != IDYES)
			return;

		DeleteFile(m_strDeckPath);
		Refresh();		
	}
	else
	if (MessageBox(_T("Delete deck?"), _T("Delete Deck"), MB_ICONQUESTION | MB_YESNO) == IDYES)
	{
		DeleteFile(m_strDeckPath);
		Refresh();		
	}	
}

/*
void CDeckDialog::OnFindSimilar() 
{
	CWaitCursor WaitCursor;

	if (!m_pCardEntry)
		return;

	counted_ptr<CCard> cpCard(
		CCardFactory::GetInstance()->CreateCard(m_pCardEntry->GetCardName(), m_pCardEntry->GetID()));
	if (!cpCard.GetPointer())
		return;

	CCountedCardContainer cardContainer;
	const StringArray& cardClassNames = CCardFactory::GetInstance()->GetCardClassNames();
	for (StringArray::size_type i = 0; i < cardClassNames.size(); ++i)
	{
//		ATLTRACE(_T("Card %s\n"), CCardFactory::s_CardClassNames[i]);

		counted_ptr<CCard> cpCard2(CCardFactory::GetInstance()->CreateCard(cardClassNames[i], -1));
		if (!cpCard2.GetPointer())
			continue;

		if (!_tcsicmp(cpCard->GetPrintedCardName(), cpCard2->GetPrintedCardName()))
		{
			continue;
		}

		BOOL bFound = FALSE;
		for (int j = 0; j < cpCard->GetAbilityCount() && !bFound; ++j)
		{
			USES_CONVERSION;

			CAbility* pAbility = cpCard->GetAbility(j).GetPointer();
			CString strAbilityClassName = A2CT(typeid(*pAbility).name());

//			ATLTRACE(_T("\t[%s]\n"), pAbility->GetAbilityName());

			if (!_tcsicmp(strAbilityClassName, _T("class CCombatDamageAssignmentAbility")) ||
				!_tcsicmp(strAbilityClassName, _T("class CUntapAbility")) ||
				!_tcsicmp(strAbilityClassName, _T("class CDiscardAbility")) ||
				!_tcsicmp(strAbilityClassName, _T("class CAttackAbility")) ||
				!_tcsicmp(strAbilityClassName, _T("class CBlockAbility")) ||
				!_tcsicmp(strAbilityClassName, _T("class CSpell")))
				continue;

			AbilityTag family = pAbility->GetAbilityTag();

			for (int k = 0; k < cpCard2->GetAbilityCount() && !bFound; ++k)
			{
				CAbility* pAbility2 = cpCard2->GetAbility(k).GetPointer();
				CString strAbilityClassName2 = A2CT(typeid(*pAbility2).name());
				AbilityTag family2 = pAbility2->GetAbilityTag();

				if ((!family.Any() && !family2.Any() &&
					!_tcsicmp(strAbilityClassName, strAbilityClassName2)) ||
					(family.Any() && family2.Any() &&
					(family & family2) == family))
				{
					bFound = TRUE;
				}
			}
		}

		if (!bFound)
			if ((cpCard->GetCardType() & CardType::Creature).Any() &&
				(cpCard2->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)cpCard.GetPointer();
				CCreatureCard* pCreatureCard2 = (CCreatureCard*)cpCard2.GetPointer();

				if ((pCreatureCard->GetCreatureKeyword()->Get() &
					pCreatureCard2->GetCreatureKeyword()->Get()).Any())
					bFound = TRUE;
				else
					if (pCreatureCard->GetCreatureType() == pCreatureCard2->GetCreatureType())
						bFound = TRUE;
			}

		if (!bFound)
		{
			continue;
		}

		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(cpCard2->GetPrintedCardName(), FALSE);
		if (!pCardEntry)
		{
			continue;
		}

		cpCard2->SetWorldID(pCardEntry->GetID());

		bFound = FALSE;

		for (int j = 0; j < cardContainer.GetSize(); ++j)
			if (!cardContainer.GetAt(j)->GetPrintedCardName().CompareNoCase(cpCard2->GetPrintedCardName()))
			{
				bFound = TRUE;
				break;
			}

		if (!bFound)
			cardContainer.Add(cpCard2.GetPointer());
	}

	if (!cardContainer.GetSize())
	{
		MessageBox(_T("Card not found"), _T("Find Similar Cards"), MB_ICONINFORMATION | MB_OK);
		return;
	}

	std::auto_ptr<const CCountedCardContainer> apCardContainer(cardContainer.CloneAsCardContainer());

	CCardDialog CardDialog;

	CardDialog.SetCardContainer(apCardContainer.get());
	CardDialog.SetCaption(_T("Find Similar Cards"));
	CardDialog.SetTitle(_T("Card"));

	CardDialog.DoModal();
}
*/

void CDeckDialog::OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	*pResult = 0;

	if (!(pNMListView->uChanged & LVIF_STATE) ||
		(pNMListView->uNewState & LVIS_SELECTED) == (pNMListView->uOldState & LVIS_SELECTED))
		return;

	if (m_CardList.GetSelectedCount() == 1)
	{
		m_pCardEntry = m_CardList.GetItem(m_CardList.GetNextItem(-1, LVNI_SELECTED))->GetCardEntry();
		
		m_CardBitmap.DeleteObject();

		m_CardBitmap.Attach(m_pCardEntry->GetBitmap(FALSE).GetHBITMAP());
		HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
		if (hPreviousBitmap)
			::DeleteObject(hPreviousBitmap);
	}

	EnableWindows();
}

void CDeckDialog::OnItemchangedDeckList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	*pResult = 0;

	if (!(pNMListView->uChanged & LVIF_STATE) ||
		(pNMListView->uNewState & LVIS_SELECTED) == (pNMListView->uOldState & LVIS_SELECTED))
		return;

	if (m_DeckList.GetSelectedCount() == 1)
	{
		m_pCardEntry = m_DeckList.GetItem(m_DeckList.GetNextItem(-1, LVNI_SELECTED))->GetCardEntry();
		
		m_CardBitmap.DeleteObject();

		m_CardBitmap.Attach(m_pCardEntry->GetBitmap(FALSE).GetHBITMAP());
		HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
		if (hPreviousBitmap)
			::DeleteObject(hPreviousBitmap);
	}

	EnableWindows();
}

void CDeckDialog::OnItemchangedSideboardList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;

	*pResult = 0;

	if (!(pNMListView->uChanged & LVIF_STATE) ||
		(pNMListView->uNewState & LVIS_SELECTED) == (pNMListView->uOldState & LVIS_SELECTED))
		return;

	if (m_SideboardList.GetSelectedCount() == 1)
	{
		m_pCardEntry = m_SideboardList.GetItem(m_SideboardList.GetNextItem(-1, LVNI_SELECTED))->GetCardEntry();
		
		m_CardBitmap.DeleteObject();

		m_CardBitmap.Attach(m_pCardEntry->GetBitmap(FALSE).GetHBITMAP());
		HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
		if (hPreviousBitmap)
			::DeleteObject(hPreviousBitmap);
	}

	EnableWindows();
}

void CDeckDialog::OnNewConstructed()
{
	CheckChanged();

	CString strDeckPath =
		CMagicWandDoc::GetSaveFile(
			_T("Deck Files (*.txt)\0*.txt\0")
			_T("All Files (*.*)\0*.*\0\0"),
			_T("txt"),
			m_strDeckBasePath,
			GetSafeHwnd());

	if (strDeckPath.IsEmpty() ||
		PathFileExists(strDeckPath))
		return;

	int nIndex = strDeckPath.ReverseFind(_T('\\'));
	if (nIndex == -1)
		return;

	m_strDeckBasePath = strDeckPath.Left(nIndex);
	m_strDeck = strDeckPath.Mid(nIndex + 1);

	strDeckPath.MakeLower();
	nIndex = strDeckPath.Find(_T(".txt"));
	if (nIndex != -1 && nIndex == strDeckPath.GetLength() - 4)
		m_strDeck = m_strDeck.Left(m_strDeck.GetLength() - 4);

	m_strDeckPath = m_strDeckBasePath + _T("\\") + m_strDeck + _T(".txt");
	{	
		CStdioFile Deck;
		Deck.Open(m_strDeckPath, CFile::modeWrite | CFile::typeText | CFile::modeCreate);
	}

	g_pCoreApp->SetDeckPath(m_strDeckBasePath);

	m_Deck.Clear();
	
	Refresh();
}

void CDeckDialog::OnNewSealedDeck()
{
	CheckChanged();

	CStarterBoosterDlg dlg(IDD_ADD_SEALED_DECK);

	int nCount = 0;
	dlg.m_strDeck = _T("Sealed Deck");
	while (PathFileExists(m_strDeckBasePath + _T("\\") + dlg.m_strDeck + _T(".txt")))
		dlg.m_strDeck.Format(_T("Sealed Deck %d"), ++nCount);

	if (dlg.DoModal() != IDOK)
		return;

	m_strDeck = dlg.m_strDeck;

	m_strDeckPath = m_strDeckBasePath + _T("\\") + m_strDeck + _T(".txt");
	{
		CStdioFile Deck;
		Deck.Open(m_strDeckPath, CFile::modeWrite | CFile::typeText | CFile::modeCreate);
	}

	m_Deck.Clear();

	CDeck::DeckCards deckCards;
	for (size_t i = 0; i < dlg.m_Cards.size(); ++i)
	{
		CCardEntry* pCardEntry = dlg.m_Cards[i];
		AddDeckListEntry(pCardEntry);
		
		CDeck::DeckCard deckCard;
		deckCard.strCardName = pCardEntry->GetCardName();
		deckCard.nImageId = pCardEntry->GetID();

		deckCards.push_back(deckCard);
	}

	m_Deck.SetDeck(deckCards, false);
	m_Deck.Seal(dlg.m_strSeed);
	if (!m_Deck.ExportDeck(m_strDeckPath))
	{
		MessageBox(_T("Error saving deck"), _T("Save Deck"), MB_ICONERROR);
		return;
	}

	Refresh();
}

void CDeckDialog::OnAdd()
{
	if (IsUsingSideboardList())
		OnAddFromSideboard();
	else
	if (IsUsingCardList())
		OnAddFromCardList();
}

void CDeckDialog::OnAddFast(NMHDR * pNMHDR, LRESULT * result)
{
	if (IsUsingSideboardList())
		OnAddFromSideboard(4);
	else
	if (IsUsingCardList())
		OnAddFromCardList(4);
}

void CDeckDialog::OnAddFromCardList(int nCount)
{
	if (m_strDeck.IsEmpty())
	{
		OnNewConstructed();
		return;
	}

	// Card List -> Deck List

	m_DeckList.DeselectAllItems();

	CCardEntry* pCardEntry = NULL;
	int nItem = -1, nItem2;
	while ((nItem = m_CardList.GetNextItem(nItem, LVNI_SELECTED)) != -1)
	{
		pCardEntry = m_CardList.GetItem(nItem)->GetCardEntry();
		for (int loop = 0; loop<nCount; ++loop)
			nItem2 = AddDeckListEntry(pCardEntry);
		if (nItem2 != -1) m_DeckList.SelectItem(nItem2);
	}

	m_DeckList.Sort();

	for (int i = 0; i < m_DeckList.GetItemCount(); ++i)
		if (m_DeckList.GetItem(i)->GetCardEntry() == pCardEntry)
		{
			m_DeckList.EnsureVisible(i, TRUE);
			break;
		}

	m_bChanged = TRUE;
	ATLASSERT(m_Deck.IsSealOkay());
	EnableWindows();
	UpdateStatistics();
}

void CDeckDialog::OnAddFromSideboard(int nCount) 
{
	// Sideboard List -> Deck List

	m_DeckList.DeselectAllItems();

	CCardEntry* pCardEntry = NULL;
	int nItem = -1, nItem2;
	while ((nItem = m_SideboardList.GetNextItem(nItem, LVNI_SELECTED)) != -1)
	{
		pCardEntry = m_SideboardList.GetItem(nItem)->GetCardEntry();
		int nRemove = std::min<int>(nCount, m_SideboardList.GetItem(nItem)->GetCount());
		for (int loop = 0; loop<nRemove; ++loop)
		{
			nItem2 = AddDeckListEntry(pCardEntry);
			if (m_SideboardList.RemoveItem(nItem, false)) --nItem;
		}
		if (nItem2 != -1) m_DeckList.SelectItem(nItem2);
		
	}

	m_DeckList.Sort();

	for (int i = 0; i < m_DeckList.GetItemCount(); ++i)
		if (m_DeckList.GetItem(i)->GetCardEntry() == pCardEntry)
		{
			m_DeckList.EnsureVisible(i, TRUE);
			break;
		}

	m_bChanged = TRUE;	
	ATLASSERT(m_Deck.IsSealOkay());
	EnableWindows();
	UpdateStatistics();
}

void CDeckDialog::OnRemove()
{
	if (IsUsingSideboardList())
		OnRemoveToSideboard();
	else
	if (IsUsingCardList())
		OnRemoveToCardList();
}

void CDeckDialog::OnRemoveFast(NMHDR * pNMHDR, LRESULT * result)
{
	if (IsUsingSideboardList())
	OnRemoveToSideboard(4);
	else
	if (IsUsingCardList())
		OnRemoveToCardList(4);
}

void CDeckDialog::OnRemoveToCardList(int nCount)
{
	// Deck List -> Card List

	m_CardList.DeselectAllItems();

	CCardEntry* pCardEntry = NULL;
	int nItem = -1;
	while ((nItem = m_DeckList.GetNextItem(nItem, LVNI_SELECTED)) != -1)
	{
		pCardEntry = m_DeckList.GetItem(nItem)->GetCardEntry();

		for (int i = 0; i < m_CardList.GetItemCount(); ++i)
			if (m_CardList.GetItem(i)->GetCardEntry() == pCardEntry)
			{
				m_CardList.SelectItem(i);
				break;
			}
		int nRemove = std::min<int>(nCount, m_DeckList.GetItem(nItem)->GetCount());
		for (int loop = 0; loop<nRemove; ++loop)
			if(m_DeckList.RemoveItem(nItem, false)) --nItem;
	}

	for (int i = 0; i < m_CardList.GetItemCount(); ++i)
		if (m_CardList.GetItem(i)->GetCardEntry() == pCardEntry)
		{
			m_CardList.EnsureVisible(i, TRUE);
			break;
		}

	m_bChanged = TRUE;	
	ATLASSERT(m_Deck.IsSealOkay());
	EnableWindows();
	UpdateStatistics();
}

void CDeckDialog::OnRemoveToSideboard(int nCount) 
{
	// Deck List -> Sideboard List

	m_SideboardList.DeselectAllItems();
	CCardEntry* pCardEntry = NULL;

	int nItem = -1, nItem2;
	while ((nItem = m_DeckList.GetNextItem(nItem, LVNI_SELECTED)) != -1)
	{
		CMListCtrl::CDeckCardEntry* pDeckCardEntry = m_DeckList.GetItem(nItem);

		int nRemove = std::min<int>(nCount, m_DeckList.GetItem(nItem)->GetCount());
		for (int loop = 0; loop<nRemove; ++loop)
		{
			nItem2 = AddSideboardListEntry(pDeckCardEntry->GetCardEntry());
			if (m_DeckList.RemoveItem(nItem, false)) --nItem;
		}
		if (nItem2 != -1) m_SideboardList.SelectItem(nItem2);
	}

	m_SideboardList.Sort();

	for (int i = 0; i < m_SideboardList.GetItemCount(); ++i)
		if (m_SideboardList.GetItem(i)->GetCardEntry() == pCardEntry)
		{
			m_SideboardList.EnsureVisible(i, TRUE);
			break;
		}

	m_bChanged = TRUE;	
	ATLASSERT(m_Deck.IsSealOkay());
	EnableWindows();
	UpdateStatistics();
}

void CDeckDialog::OnRenameDeck() 
{
	if (m_Deck.GetReadOnly())
	{
		if (MessageBox(_T("This is a read-only deck, do you want to rename it?"),
			_T("Rename Deck"), MB_ICONQUESTION | MB_YESNO) != IDYES)
			return;
	}

	CDeckRenameDialog Dlg;
	Dlg.m_strDeckName = m_strDeck;

	if ((Dlg.DoModal() == IDOK) && !Dlg.m_strDeckName.IsEmpty())
	{
		if (m_bChanged)
			SaveDeck();

		m_strDeck = Dlg.m_strDeckName;
		CFile::Rename(m_strDeckPath, m_strDeckBasePath + _T("\\") + m_strDeck + _T(".txt"));

		Refresh();
	}	
}

void CDeckDialog::OnSaveDeckAs()
{
	if (m_Deck.GetSealed())
	{
		if (m_Deck.GetStatus() == CDeck::DeckStatus::SealCorruption)
			return;

		if (MessageBox(_T("Do you want to unseal this deck?"), _T("Sealed Deck"), MB_YESNO | MB_ICONQUESTION) == IDYES)
			m_Deck.Unseal();
	}

	CString strDeckPath =
		CMagicWandDoc::GetSaveFile(
			_T("Deck Files (*.txt)\0*.txt\0")
			_T("All Files (*.*)\0*.*\0\0"),
			_T("txt"),
			m_strDeckBasePath,
			GetSafeHwnd());

	if (strDeckPath.IsEmpty() ||
		PathFileExists(strDeckPath))
		return;

	int nIndex = strDeckPath.ReverseFind(_T('\\'));
	if (nIndex == -1)
		return;

	m_strDeckBasePath = strDeckPath.Left(nIndex);
	m_strDeck = strDeckPath.Mid(nIndex + 1);

	strDeckPath.MakeLower();
	nIndex = strDeckPath.Find(_T(".txt"));
	if (nIndex != -1 && nIndex == strDeckPath.GetLength() - 4)
		m_strDeck = m_strDeck.Left(m_strDeck.GetLength() - 4);

	m_strDeckPath = m_strDeckBasePath + _T("\\") + m_strDeck + _T(".txt");
	{	
		CStdioFile Deck;
		Deck.Open(m_strDeckPath, CFile::modeWrite | CFile::typeText | CFile::modeCreate);
	}

	CDeck::DeckCards deckCards;
	m_DeckList.GetDeckCards(deckCards);
	m_Deck.SetDeck(deckCards, false);

	CDeck::DeckCards sideboardCards;
	m_SideboardList.GetDeckCards(sideboardCards);
	m_Deck.SetSideboard(sideboardCards);

	if (!m_Deck.ExportDeck(m_strDeckPath))
	{
		MessageBox(_T("Error saving deck"), _T("Save Deck"), MB_ICONERROR);
		return;
	}

	g_pCoreApp->SetDeckPath(m_strDeckBasePath);
	
	Refresh();
}

void CDeckDialog::OnDeckPath()
{	
	CString strDeckPath = CMagicWandDoc::GetFolder(g_pCoreApp->GetDeckPath(), GetSafeHwnd());
	if (strDeckPath.IsEmpty())
		return;

	m_strDeckBasePath = strDeckPath;

	g_pCoreApp->SetDeckPath(m_strDeckBasePath);
	
	Refresh();
}

void CDeckDialog::OnSave()
{
	SaveDeck();
}

void CDeckDialog::OnSelchangeDeck()
{
	CheckChanged();

	UpdateDeckList();
}

void CDeckDialog::OnBnClickedFilterWhite()
{
	ToggleFilter(CMListCtrl::FT_WHITE);
}

void CDeckDialog::OnBnDoubleclickedFilterWhite()
{
	OnBnClickedFilterWhite();
}

void CDeckDialog::OnBnClickedFilterBlue()
{
	ToggleFilter(CMListCtrl::FT_BLUE);
}

void CDeckDialog::OnBnDoubleclickedFilterBlue()
{
	OnBnClickedFilterBlue();
}

void CDeckDialog::OnBnClickedFilterBlack()
{
	ToggleFilter(CMListCtrl::FT_BLACK);
}

void CDeckDialog::OnBnDoubleclickedFilterBlack()
{
	OnBnClickedFilterBlack();
}

void CDeckDialog::OnBnClickedFilterRed()
{
	ToggleFilter(CMListCtrl::FT_RED);
}

void CDeckDialog::OnBnDoubleclickedFilterRed()
{
	OnBnClickedFilterRed();
}

void CDeckDialog::OnBnClickedFilterGreen()
{
	ToggleFilter(CMListCtrl::FT_GREEN);
}

void CDeckDialog::OnBnDoubleclickedFilterGreen()
{
	OnBnClickedFilterGreen();
}

void CDeckDialog::OnBnClickedFilterLand()
{
	ToggleFilter(CMListCtrl::FT_LAND);
}

void CDeckDialog::OnBnDoubleclickedFilterLand()
{
	OnBnClickedFilterLand();
}

void CDeckDialog::OnBnClickedFilterArtifact()
{
	ToggleFilter(CMListCtrl::FT_ARTIFACT);
}

void CDeckDialog::OnBnDoubleclickedFilterArtifact()
{
	OnBnClickedFilterArtifact();
}

void CDeckDialog::OnBnClickedFilterArtifactLand()
{
	ToggleFilter(CMListCtrl::FT_ARTIFACT_LAND);
}

void CDeckDialog::OnBnDoubleclickedFilterArtifactLand()
{
	OnBnClickedFilterArtifactLand();
}

void CDeckDialog::OnBnClickedFilterCreature()
{
	ToggleFilter(CMListCtrl::FT_CREATURE);
}

void CDeckDialog::OnBnDoubleclickedFilterCreature()
{
	OnBnClickedFilterCreature();
}

void CDeckDialog::OnBnClickedFilterPlaneswalker()
{
	ToggleFilter(CMListCtrl::FT_PLANESWALKER);
}

void CDeckDialog::OnBnDoubleclickedFilterPlaneswalker()
{
	OnBnClickedFilterPlaneswalker();
}

void CDeckDialog::OnBnClickedFilterSorcery()
{
	ToggleFilter(CMListCtrl::FT_SORCERY);
}

void CDeckDialog::OnBnDoubleclickedFilterSorcery()
{
	OnBnClickedFilterSorcery();
}

void CDeckDialog::OnBnClickedFilterInstant()
{
	ToggleFilter(CMListCtrl::FT_INSTANT);
}

void CDeckDialog::OnBnDoubleclickedFilterInstant()
{
	OnBnClickedFilterInstant();
}

void CDeckDialog::OnBnClickedFilterEnchantment()
{
	ToggleFilter(CMListCtrl::FT_ENCHANTMENT);
}

void CDeckDialog::OnBnDoubleclickedFilterEnchantment()
{
	OnBnClickedFilterEnchantment();
}

void CDeckDialog::OnBnClickedFilterSpecial()
{
	ToggleFilter(CMListCtrl::FT_SPECIAL);
}

void CDeckDialog::OnBnDoubleclickedFilterSpecial()
{
	OnBnClickedFilterSpecial();
}

void CDeckDialog::OnBnClickedFilterMythicRare()
{
	ToggleFilter(CMListCtrl::FT_MYTHIC_RARE);
}

void CDeckDialog::OnBnDoubleclickedFilterMythicRare()
{
	OnBnClickedFilterMythicRare();
}

void CDeckDialog::OnBnClickedFilterRare()
{
	ToggleFilter(CMListCtrl::FT_RARE);
}

void CDeckDialog::OnBnDoubleclickedFilterRare()
{
	OnBnClickedFilterRare();
}

void CDeckDialog::OnBnClickedFilterUncommon()
{
	ToggleFilter(CMListCtrl::FT_UNCOMMON);
}

void CDeckDialog::OnBnDoubleclickedFilterUncommon()
{
	OnBnClickedFilterUncommon();
}

void CDeckDialog::OnBnClickedFilterCommon()
{
	ToggleFilter(CMListCtrl::FT_COMMON);
}

void CDeckDialog::OnBnDoubleclickedFilterCommon()
{
	OnBnClickedFilterCommon();
}

void CDeckDialog::OnBnClickedFilterBasicLand()
{
	ToggleFilter(CMListCtrl::FT_BASIC_LAND);
}

void CDeckDialog::OnBnDoubleclickedFilterBasicLand()
{
	OnBnClickedFilterBasicLand();
}


void CDeckDialog::OnBnClickedFilterLand2()
{
	ToggleFilter2(CMListCtrl::FT_LAND);
}

void CDeckDialog::OnBnDoubleclickedFilterLand2()
{
	OnBnClickedFilterLand2();
}

void CDeckDialog::OnBnClickedFilterArtifact2()
{
	ToggleFilter2(CMListCtrl::FT_ARTIFACT);
}

void CDeckDialog::OnBnDoubleclickedFilterArtifact2()
{
	OnBnClickedFilterArtifact2();
}

void CDeckDialog::OnBnClickedFilterArtifactLand2()
{
	ToggleFilter2(CMListCtrl::FT_ARTIFACT_LAND);
}

void CDeckDialog::OnBnDoubleclickedFilterArtifactLand2()
{
	OnBnClickedFilterArtifactLand2();
}

void CDeckDialog::OnBnClickedFilterCreature2()
{
	ToggleFilter2(CMListCtrl::FT_CREATURE);
}

void CDeckDialog::OnBnDoubleclickedFilterCreature2()
{
	OnBnClickedFilterCreature2();
}

void CDeckDialog::OnBnClickedFilterPlaneswalker2()
{
	ToggleFilter2(CMListCtrl::FT_PLANESWALKER);
}

void CDeckDialog::OnBnDoubleclickedFilterPlaneswalker2()
{
	OnBnClickedFilterPlaneswalker2();
}

void CDeckDialog::OnBnClickedFilterSorcery2()
{
	ToggleFilter2(CMListCtrl::FT_SORCERY);
}

void CDeckDialog::OnBnDoubleclickedFilterSorcery2()
{
	OnBnClickedFilterSorcery2();
}

void CDeckDialog::OnBnClickedFilterInstant2()
{
	ToggleFilter2(CMListCtrl::FT_INSTANT);
}

void CDeckDialog::OnBnDoubleclickedFilterInstant2()
{
	OnBnClickedFilterInstant2();
}

void CDeckDialog::OnBnClickedFilterEnchantment2()
{
	ToggleFilter2(CMListCtrl::FT_ENCHANTMENT);
}

void CDeckDialog::OnBnDoubleclickedFilterEnchantment2()
{
	OnBnClickedFilterEnchantment2();
}


void CDeckDialog::OnMouseMove(UINT nFlags, CPoint point)
{
	//Set up the tooltip
    if (!m_pTooltip)
    {
		m_pTooltip = new CToolTipCtrl;
		m_pTooltip->Create(this);

		g_MagicWandApp.m_gpToolTip = m_pTooltip;

		for (size_t i = 0; i < m_FilterButtons.size(); ++i)
			m_pTooltip->AddTool(m_FilterButtons[i].pButton, m_FilterButtons[i].strToolTip);

		for (size_t i = 0; i < m_FilterButtons2.size(); ++i)
			m_pTooltip->AddTool(m_FilterButtons2[i].pButton, m_FilterButtons2[i].strToolTip);

		m_pTooltip->Activate(TRUE);
    }

	__super::OnMouseMove(nFlags, point);
}

void CDeckDialog::OnNMDblclkDeckList(NMHDR *pNMHDR, LRESULT *pResult)
{
	if (m_RemoveButton.IsWindowEnabled())
		if (IsUsingSideboardList())
			OnRemoveToSideboard();
		else
		if (IsUsingCardList())
			OnRemoveToCardList();

	*pResult = 0;
}

void CDeckDialog::OnNMDblclkSideboardList(NMHDR *pNMHDR, LRESULT *pResult)
{
	if (m_AddButton.IsWindowEnabled())
		OnAddFromSideboard();
	*pResult = 0;
}

void CDeckDialog::OnNMDblclkCardList(NMHDR *pNMHDR, LRESULT *pResult)
{
	if (m_AddButton.IsWindowEnabled())
		OnAddFromCardList();
	*pResult = 0;
}

void CDeckDialog::OnBnClickedSearchButton()
{
	CMListCtrl* pList;
	if (IsUsingSideboardList())
		pList = &m_SideboardList;
	else
	if (IsUsingCardList())
		pList = &m_CardList;
	else
		return;

	UpdateData(FROM_UI);

	AfxGetApp()->DoWaitCursor(1);
	//pList->SuspendDraw();
	pList->DeselectAllItems();
	pList->RemoveFilters(CMListCtrl::FT_CARD_NAME);
	pList->AddFilter(CMListCtrl::FILTERS(m_SearchType.GetCurSel() + CMListCtrl::FT_CARD_NAME), m_strSearch);
	//pList->ResumeDraw();
	AfxGetApp()->DoWaitCursor(-1);

	UpdateStatistics();
}

void CDeckDialog::OnAddProduct() 
{
	CStarterBoosterDlg dlg(IDD_ADD_STARTER_BOOSTER);
	if (dlg.DoModal() == IDOK)
	{
		m_DeckList.DeselectAllItems();

		for (size_t i = 0; i < dlg.m_Cards.size(); ++i)
		{
			int nItem = AddDeckListEntry(dlg.m_Cards[i]);
			m_DeckList.SelectItem(nItem);
		}

		m_DeckList.Sort();

		for (int i = 0; i < m_DeckList.GetItemCount(); ++i)
		{
			bool bFound = false;
			for (size_t j = 0; j < dlg.m_Cards.size(); ++j)
				if (dlg.m_Cards[j] == m_DeckList.GetItem(i)->GetCardEntry())
				{
					bFound = true;
					m_DeckList.EnsureVisible(i, TRUE);
					break;
				}

			if (bFound)
				break;
		}

		m_bChanged = TRUE;
		ATLASSERT(m_Deck.IsSealOkay());
		EnableWindows();
		UpdateStatistics();
	}
}

void CDeckDialog::OnClearDeck()
{
	m_Deck.Clear();
	m_DeckList.DeleteAllItems();
	m_SideboardList.DeleteAllItems();
	m_bChanged = TRUE;
	ATLASSERT(m_Deck.IsSealOkay());
	EnableWindows();
	UpdateStatistics();
}

void CDeckDialog::OnInfoHeader()
{
	CDeck::DeckCards deckCards;
	m_DeckList.GetDeckCards(deckCards);
	m_Deck.SetDeck(deckCards, false);
	UpdateStatistics();

	if (m_Deck.GetSealed())
	{
		CSealedDeckInfoDlg dlg(m_Deck);

		dlg.m_strDeckName = m_strDeck;

		dlg.DoModal();
	}
	else
	{
		CDeckInfoDlg dlg(m_Deck);

		StringArray headerLines(m_Deck.GetHeaderLines());
	
		for (size_t i = 0; i < headerLines.size(); ++i)
			dlg.m_strHeader += headerLines[i].Trim() + _T("\r\n");

		dlg.m_strDeckName = m_strDeck;
		dlg.m_bPreconstructed = m_Deck.GetPreconstructed() ? TRUE : FALSE;
		dlg.m_bNoCardLimit = m_Deck.GetNoCardLimit() ? TRUE : FALSE;

		if (dlg.DoModal() == IDOK)
		{
			SplitString(dlg.m_strHeader, _T("\r"), headerLines);

			m_Deck.SetHeaderLines(headerLines);
			m_Deck.SetPreconstructed(dlg.m_bPreconstructed ? true : false);
			m_Deck.SetNoCardLimit(dlg.m_bNoCardLimit ? true : false);
			
			m_bChanged = TRUE;
			ATLASSERT(m_Deck.IsSealOkay());
			EnableWindows();
		}
	}
}

void CDeckDialog::OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult)
{
	UpdateFiltersFromList();
	EnableWindows();
	UpdateStatistics();
	*pResult = 0;
}

LRESULT CDeckDialog::OnFilterChanged(WPARAM wParam, LPARAM lParam)
{
	CMListCtrl::FILTERS filter = (CMListCtrl::FILTERS)wParam;
	UINT nID = (UINT)lParam;

	CMListCtrl* pList = NULL;
	CBitmapButton* pButton = NULL;
	CString strResource;

	switch(nID)
	{
	case IDC_SIDEBOARD_LIST:
		if (IsUsingSideboardList())
		{
			pList = &m_SideboardList;
			pButton = m_FilterButtons[filter].pButton;
			strResource = m_FilterButtons[filter].strResource;
		}
		break;

	case IDC_CARD_LIST:
		if (IsUsingCardList())
		{
			pList = &m_CardList;
			pButton = m_FilterButtons[filter].pButton;
			strResource = m_FilterButtons[filter].strResource;
		}
		break;

	case IDC_DECK_LIST:
		if (filter >= CMListCtrl::FT_LAND && filter <= CMListCtrl::FT_ENCHANTMENT)
		{
			pList = &m_DeckList;
			pButton = m_FilterButtons2[filter - CMListCtrl::FT_LAND].pButton;
			strResource = m_FilterButtons2[filter - CMListCtrl::FT_LAND].strResource;
		}
		break;
	}

	if (pList && pButton)
	{
		if (pList->HasFilter(filter))
			pButton->LoadBitmaps(strResource + _T("D"), strResource + _T("D"));
		else
			pButton->LoadBitmaps(strResource + _T("U"), strResource + _T("U"));
		pButton->Invalidate();
	}

	UpdateStatistics();

	return 0;
}

void CDeckDialog::OnEnKillfocusSearch()
{
	UpdateData(FROM_UI);
}
