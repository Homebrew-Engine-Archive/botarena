// MagicWandView.h : interface of the CMagicWandView class
//

#pragma once

#include "MagicWandDoc.h"
#include "GameThread.h"
#include "memdc.h"
#include "MagicElementManager.h"

//_____________________________________________________________________________
//
// CMagicWandView
//

class CMagicWandView : public CScrollView
{
	friend class CMagicElementManager;

public:
	CMagicWandView();
	virtual ~CMagicWandView();

	CMagicWandDoc* GetDocument() const;

	// Game

	CGame* GetGame() const
	{
		if (!m_pGameThread)
			return NULL;

		return m_pGameThread->GetGame();
	}

	CString GetCurrentNodeText()					{ return m_strCurrentNode; }
	void SetBeginningCombat(int nBeginningCombat)	{ m_nBeginningCombat = nBeginningCombat; }
	void SetDefaultAction(int nDefaultMove)			{ m_nDefaultMove = nDefaultMove; }
	
	// Elements
	
	void RemoveSelections()							{ m_ElementManager.UnselectAllElements(); }
	void SelectCard(CCard* pCard)					{ m_ElementManager.SelectCard(pCard); }

	void ArrangeCards(BOOL bArrangeRow0 = TRUE, BOOL bArrangeRow1 = TRUE, BOOL bArrangeRow2 = TRUE, BOOL bArrangeRow3 = TRUE, BOOL bDisableAnimate = FALSE);

	int GetViewAreaId(CCard* pCard);

	// View

	void RefreshCards();
	void InvalidateRgn(const CRgn* pRgn, BOOL bErase = TRUE);
	void InvalidateRect(LPCRECT lpRect, BOOL bErase = TRUE);
	CRect GetViewRect();
	void UpdateScrollSize();

	CString GetUserAvatarFilePath() const			{ return m_strAvatarPath2; }

	BOOL SpeechEnabled()							{ return m_bSpeech; }
	BOOL SpeakOpening()								{ return m_bSpeakOpening; }

protected:
	DECLARE_DYNCREATE(CMagicWandView)

	enum CHILDVIEW_TIMER
	{ 
		ANIMATION_ID_EVENT = 1,
		CARD_TIP_ID_EVENT = 2,

		ANIMATION_ELAPSE = 150,
		CARD_TIP_ELAPSE = 100,
	};
	enum BKBITMAP_ORIENTATIONS
	{
		BKBITMAP_CENTER = 0,
		BKBITMAP_TILE = 1
	};
	enum VIEW_AREA_INDEX_OFFSET
	{
		VIEW_GRAVEYARD1,			// 0 - Row 0
		VIEW_HAND1,					// 1 - Row 0

		VIEW_CREATURE1,				// 2 - Row 1
		VIEW_STANDING_CREATURE1,	// 3 - Row 1
		VIEW_OTHER1,				// 4 - Row 1
		VIEW_LAND1,					// 5 - Row 1

		VIEW_GRAVEYARD2,			// 6 - Row 3
		VIEW_HAND2,					// 7 - Row 3

		VIEW_CREATURE2,				// 8 - Row 2
		VIEW_STANDING_CREATURE2,	// 9 - Row 2
		VIEW_OTHER2,				// 10 - Row 2
		VIEW_LAND2,					// 11 - Row 2

		VIEW_AREA_COUNT				// 12
	};

	struct ArrangementData
	{
		ArrangementData()
			: bArrange(FALSE)
			, bVisible(TRUE)
			, nCardCount(0)
			, ptCurrent(0, 0)
			, sizeDelta(0, 0)
			, sizeNextRowDelta(0, 0)
			, bHasNextRowDelta(FALSE)
		{}

		BOOL bArrange;
		BOOL bVisible;
		int nCardCount;

		CPoint ptCurrent;
		CSize sizeDelta;

		BOOL bHasNextRowDelta;
		CSize sizeNextRowDelta;		
		CRect rectArea;				// Ignored if sizeNextRowDelta is empty
		CPoint ptNextRow;			// Ignored if sizeNextRowDelta is empty
	};

	class AreaWidthCalculation
	{
	public:
		struct AreaData
		{
			int nCardCount;		// IN
			int nMinDist;		// IN
			int nMaxDist;		// IN
			int nParam;			// IN (not used in Calculate)
			int nWidth;			// OUT
			int nDelta;			// OUT
			BOOL bMultiRows;	// OUT
			BOOL bOverlapping;	// OUT
		};

		static void Calculate(AreaData* pData, int nAreaCount, int nAvailableWidth, int nCardWidth, int nCardSpacing)
		{
			// Any cards in this area?

			if (!pData->nCardCount)
			{
				pData->nWidth = 0;
				pData->nDelta = 0;
				pData->bMultiRows = FALSE;
				pData->bOverlapping = FALSE;

				if (nAreaCount > 1)
					Calculate(pData + 1, nAreaCount - 1, nAvailableWidth, nCardWidth, nCardSpacing);
				return;
			}

			// Just one card?

			if (pData->nCardCount == 1)
			{
				pData->nWidth = nCardWidth + nCardSpacing;
				pData->nDelta = 0;
				pData->bMultiRows = FALSE;
				pData->bOverlapping = FALSE;

				if (nAreaCount > 1)
					Calculate(pData + 1, nAreaCount - 1, nAvailableWidth - nCardWidth - nCardSpacing, nCardWidth, nCardSpacing);
				return;
			}

			// Last area?

			if (nAreaCount == 1)
			{
				int nDeltaX = (nAvailableWidth - nCardSpacing - nCardWidth) / (pData->nCardCount - 1);
				if (nDeltaX < pData->nMinDist)
				{
					pData->nWidth = nAvailableWidth;
					pData->nDelta = pData->nMinDist;
					pData->bMultiRows = TRUE;
					pData->bOverlapping = TRUE;
				}
				else
				{
					if (nDeltaX >= pData->nMaxDist)
					{
						nDeltaX = pData->nMaxDist;
						pData->nWidth = nCardWidth + ( pData->nCardCount - 1 ) * pData->nMaxDist + nCardSpacing;
					}
					else
						pData->nWidth = nAvailableWidth;

					pData->nDelta = nDeltaX;
					pData->bMultiRows = FALSE;
					pData->bOverlapping = nDeltaX < nCardWidth;
				}

				return;
			}

			// Can all the cards line up in the available width without overlapping?

			int nTotalWidth = 0;
			for (int i = 0; i < nAreaCount; ++i)
				nTotalWidth += nCardWidth + ( pData[i].nCardCount - 1 ) * pData[i].nMaxDist + nCardSpacing;

			if (nTotalWidth <= nAvailableWidth)
			{
				// Assign width according to number of cards

				for (int i = 0; i < nAreaCount; ++i)
				{
					if (pData[i].nCardCount)
					{
						pData[i].nWidth = nCardWidth + ( pData[i].nCardCount - 1 ) * pData[i].nMaxDist + nCardSpacing;
						pData[i].nDelta = pData[i].nMaxDist;
						pData[i].bOverlapping = pData[i].nDelta < nCardWidth;
					}
					else
					{
						pData[i].nWidth = 0;
						pData[i].nDelta = 0;
						pData[i].bOverlapping = FALSE;
					}

					pData[i].bMultiRows = FALSE;
				}

				return;
			}

			// Can cards in this area line up without overlappings and all the remaining zones can have their cards line up without using multi-rows?

			int nRemainingWidth = nAvailableWidth - ( nCardWidth + ( pData->nCardCount - 1 ) * pData->nMaxDist + nCardSpacing );
			BOOL bMultiRowsFound = TRUE;

			if (nRemainingWidth > 0)
			{
				Calculate(pData + 1, nAreaCount - 1, nRemainingWidth, nCardWidth, nCardSpacing);

				for (int i = 1; i < nAreaCount; ++i)
					if (pData[i].bMultiRows)
					{
						bMultiRowsFound = TRUE;
						break;
					}
			}

			if (!bMultiRowsFound)
			{
				pData->nWidth = nCardWidth + ( pData->nCardCount - 1 ) * pData->nMaxDist + nCardSpacing;
				pData->nDelta = pData->nMaxDist;
				pData->bMultiRows = FALSE;
				pData->bOverlapping = pData->nDelta < nCardWidth;
			}
			else
			{
				pData->nWidth = nAvailableWidth * 2 / 3;				// Give more space to zones on the right
				if (pData->nWidth < nCardWidth + nCardSpacing)
					pData->nWidth = nCardWidth + nCardSpacing;
				else
				if (pData->nWidth > nCardWidth + ( pData->nCardCount - 1 ) * pData->nMaxDist + nCardSpacing )
					pData->nWidth = nCardWidth + ( pData->nCardCount - 1 ) * pData->nMaxDist + nCardSpacing;

				nRemainingWidth = nAvailableWidth - pData->nWidth;

				int nDeltaX = (pData->nWidth - nCardWidth - nCardSpacing) / (pData->nCardCount - 1);
				if (nDeltaX < pData->nMinDist)
				{
					pData->nDelta = pData->nMinDist;
					pData->bMultiRows = TRUE;
					pData->bOverlapping = TRUE;
				}
				else
				{
					if (nDeltaX > pData->nMaxDist)
						nDeltaX = pData->nMaxDist;

					pData->nDelta = nDeltaX;
					pData->bMultiRows = FALSE;
					pData->bOverlapping = nDeltaX < nCardWidth;
				}
			}

			Calculate(pData + 1, nAreaCount - 1, nRemainingWidth, nCardWidth, nCardSpacing);
		}
	};

	static const double s_ViewPercentageLands;
	static const double s_ViewPercentageOthers;
	static const double s_ViewPercentageCreatures;
	static const double s_ViewPercentageStandingCreatures;
	//static const int s_nTopRowBaseHeight;
	static const DWORD s_dwGameThreadTimeOut;

	//

	void GetZoneInformation(int nViewAreaId, CRect& AreaRect, int& nCount, int& nAverageCX);
	CPoint FindAvailablePos(int nViewAreaId);

	BOOL AddCardsToArea(int nViewAreaId, BOOL bDropShadow);
	void RemoveCardsFromArea(int nViewAreaId, BOOL bVisible, BOOL viewChanged[VIEW_AREA_COUNT]);
	void RefreshBoard();

	void DrawSelectionBand(CDC* pDC, CRect Rect);

	void GameCleanup();

	//

	static const int s_nMinimumCardHeight = 70;
	static const int s_nMaximumCardHeight = CCardStore::LargeCardHeight;

	// Elements

	CMagicElementManager	m_ElementManager;
	CUICard*				m_pContextMenuCard;

	// Drawing

	HANDLE			m_hUpdateCompleted;
	DWORD			m_dwBoardSize;

	BOOL			m_bShowSelectionIndicator;
	BOOL			m_bAnimatedCardMovement;

	BOOL			m_bDblClkZoom;
	BOOL			m_bAutoZoom;

	BOOL			m_bShowLife;
	BOOL			m_bShowPool;
	BOOL			m_bShowPhaseText;
	BOOL			m_bShowPhaseIcon;
	BOOL			m_bShowLibraryCardCount;
	BOOL			m_bShowAvatarImage;

	BOOL			m_bViewGraveyard1;
	BOOL			m_bViewGraveyard2;
	BOOL			m_bViewHand1;

	BOOL			m_bCenterZones;
	BOOL			m_bAlwaysStackLands;

	COLORREF		m_LifeTextColor;
	COLORREF		m_LibraryTextColor;
	COLORREF		m_PhaseTextColor;

	CUICard*		m_pHighlightedCard;
	CUIAvatar*		m_pHighlightedAvatar;

	CString			m_strAvatarPath1;
	CString			m_strAvatarPath2;

	// Card Tips

	CCardTip		m_CardTip;
	CString			m_strCardTipText;
	CPoint			m_CardTipPoint;

	// Mouse

	BOOL			m_bMoving;
	BOOL			m_bMoved;

	CPoint			m_FromPt;
	CPoint			m_ToPt;
	CPoint			m_PreviousCardPt;

	// Game

	CGameThread*	m_pGameThread;
	int				m_nBeginningCombat;
	int				m_nDefaultMove;
	CString			m_strCurrentNode;
	CString			m_strUserName;
	CString			m_strComputerPlayerName;
	int				m_nLocalPlayerIndex;

	BOOL			m_bSpeech;
	BOOL			m_bSpeakOpening;

	// Thinking

	bool			m_bDecideNow;
	DWORD			m_dwMaxDuration;
	bool			m_bCanDecideNow;
	BOOL			m_bWithComputer;
	BOOL			m_bExtraCareful;
	BOOL			m_bOverkill;
	BOOL			m_bConservative;
	BOOL			m_bBoostProcess;

protected:

	// Overrides

	#ifdef _MY_DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
	#endif
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:

	// Message Handlers

	DECLARE_MESSAGE_MAP()

	afx_msg void OnAppearanceSettings();
	afx_msg void OnApplicationSettings();
	afx_msg void OnArrange();
	afx_msg void OnAttack();	
	afx_msg LRESULT OnCanDecideNow(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnConceded(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnConnectedBy(WPARAM wParam, LPARAM lParam);
	afx_msg void OnCopyAllCardInfo();
	afx_msg void OnCopyCardName();
	afx_msg void OnCopyCardRulesText();
	afx_msg void OnDecideNow();
	afx_msg void OnDefault();
	afx_msg void OnDestroy();
	afx_msg LRESULT OnDisconnect(WPARAM wParam, LPARAM lParam);
	afx_msg void OnEditCardUsagePattern();
	afx_msg void OnEnableCardUsagePattern();
	afx_msg LRESULT OnEngineException(WPARAM wParam, LPARAM lParam);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg LRESULT OnFileReceived(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnGameEnded(WPARAM wParam, LPARAM lParam);
	afx_msg void OnGamePlay();
	afx_msg void OnGameUndo();
	afx_msg void OnGetCardRulings();
	afx_msg void OnGraphDefault();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg LRESULT OnInitCardStore(WPARAM wParam, LPARAM lParam);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT fFlags, short zDelta, CPoint point);
	afx_msg LRESULT OnOrderCards(WPARAM wParam, LPARAM lParam);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg LRESULT OnSelectCards(WPARAM wParam, LPARAM lParam);
	afx_msg void OnSelectMoves(UINT nID);
	afx_msg void OnShowHand();
	afx_msg void OnShowLibrary();
	afx_msg void OnShowOpponentsGrave();
	afx_msg void OnShowOpponentsLibrary();
	afx_msg void OnShowOpponentsRemoved();
	afx_msg void OnShowOpponentsCommand();
	afx_msg void OnShowYourGrave();
	afx_msg void OnShowYourRemoved();
	afx_msg void OnShowYourCommand();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnStart();
	afx_msg void OnStop();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnToggleLands();
	afx_msg void OnTurnDefault();
	afx_msg void OnUpdateArrange(CCmdUI* pCmdUI);
	afx_msg void OnUpdateAttack(CCmdUI* pCmdUI);
	afx_msg LRESULT OnUpdateGame(WPARAM wParam, LPARAM lParam);
	afx_msg void OnUpdateGraphDefault(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDecideNow(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDefault(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGameUndo(CCmdUI* pCmdUI);
	afx_msg void OnUpdateShowOpponentsGrave(CCmdUI *pCmdUI);
	afx_msg void OnUpdateShowOpponentsCommand(CCmdUI *pCmdUI);
	afx_msg void OnUpdateShowOpponentsRemoved(CCmdUI *pCmdUI);
	afx_msg void OnUpdateShowYourGrave(CCmdUI *pCmdUI);
	afx_msg void OnUpdateShowYourCommand(CCmdUI *pCmdUI);
	afx_msg void OnUpdateShowYourRemoved(CCmdUI *pCmdUI);
	afx_msg void OnUpdateStart(CCmdUI* pCmdUI);
	afx_msg void OnUpdateStop(CCmdUI* pCmdUI);
	afx_msg void OnUpdateTurnDefault(CCmdUI* pCmdUI);
	afx_msg void OnUpdateUsagePattern(CCmdUI* pCmdUI);
	afx_msg void OnUpdateViewMagicbitmaps(CCmdUI* pCmdUI);
	afx_msg void OnUpdateViewMagicsymbols(CCmdUI* pCmdUI);
	afx_msg void OnUpdateViewOpponentsGrave(CCmdUI *pCmdUI);
	afx_msg void OnUpdateViewOpponentsHand(CCmdUI *pCmdUI);
	afx_msg void OnUpdateViewYourGrave(CCmdUI *pCmdUI);
	afx_msg LRESULT OnUPnPConfigResult(WPARAM wParam, LPARAM lParam);
	afx_msg void OnUsagePattern();
	afx_msg void OnViewDecks();
	afx_msg void OnViewMagicbitmaps();
	afx_msg void OnViewMagicsymbols();
	afx_msg void OnViewOpponentsGrave();
	afx_msg void OnViewOpponentsHand();
	afx_msg void OnViewSelections2();
	afx_msg void OnViewYourGrave();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnZoom();
};

#ifndef _MY_DEBUG  // debug version in MagicWandView.cpp
inline CMagicWandDoc* CMagicWandView::GetDocument() const
   { return reinterpret_cast<CMagicWandDoc*>(m_pDocument); }
#endif
