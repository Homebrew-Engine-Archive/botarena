// GraphDialogBar.h : header file
//

#pragma once

#include "RoundButton.h"
#include "ManaStatic.h"
#include "sizecbar.h"
#include "UICardTip.h"

class CSelectionDialogBar;

//_____________________________________________________________________________
//
// CGraphDialogBar
//

class CGraphDialogBar : public CDialogBar
{
public:
	CGraphDialogBar();   // standard constructor
	virtual ~CGraphDialogBar();

	BOOL Create(CWnd* pParentWnd, UINT nStyle, UINT nID);

	void SetCurrentNode(BOOL bFirstPlayer, NodeId nodeId, BOOL bPrecombat,
						LPCTSTR strCurrentNode,
						LPCTSTR strPriorityPlayer,
						BOOL bBlink);

	void Reset();
	void SetCurrentNodeText(LPCTSTR strCurrentNode);

	void SetPriorityPlayerText(LPCTSTR strPriorityPlayer);
	CString GetPriorityPlayerText() const;

	void SetTurnNumber(int nTurnNumber);
	void SetWindowText(LPCTSTR strCaption);

	void EnableAttackButton(BOOL bEnable = TRUE) { m_AttackButton.EnableWindow(bEnable); }

	void RemoveAllNodeStates();

	void GetUsagePatternOverrides(CUsagePattern::UsagePatternItemArray& overrides);

	BOOL AlwaysStopNode(BOOL bOpponents, NodeId nodeId, BOOL bPreCombat);
	BOOL AlwaysPassNode(BOOL bOpponents, NodeId nodeId, BOOL bPreCombat);

	//void SetButtonToDecideNow();	// Removed

protected:
	enum { IDD = IDD_GRAPH };

	enum NODE_INDEX
	{
		NX_UNTAP,
		NX_UPKEEP,
		NX_DRAW,
		NX_MAIN_PRECOMBAT,
		NX_BEGINNING_COMBAT,
		NX_DECLARE_ATTACKERS,
		NX_DECLARE_BLOCKERS,
		NX_COMBAT_DAMAGE,
		NX_END_OF_COMBAT,
		NX_MAIN_POSTCOMBAT,
		NX_END_OF_TURN,
		_NX_COUNT
	};

	enum GRAPHBAR_TIMER
	{ 
		TOOL_TIP_ID_EVENT = 1,
		TOOL_TIP_ELAPSE = 100,

		BLINK_ID_EVENT = 2,
		BLINK_ELAPSE = 2000
	};

	UsagePatternItem TranslateToSelectedUsagePatternNode(int nPlayerIndex, int nNodeIndex);
	int GetNodeIndex(NodeId nodeID, BOOL bPreCombat, BOOL& bCombatNodes);
	BOOL CheckIconClick(CPoint point);
	CString GetToolTipText(CPoint point);
	void UpdateUsagePattern();

	void WriteProfile();
	void GetProfile();

	CStatic			m_CurrentNode;
	CStatic			m_TurnNumber;
	CStatic			m_PriorityPlayer;

	CBitmapButton	m_AttackButton;
	CBitmapButton	m_DefaultMoveButton;

    CSCBButton		m_biHide;

	CStatic			m_PlayerIcons1[_NX_COUNT];
	CStatic			m_PlayerIcons2[_NX_COUNT];

	int				m_NodeStates[2][_NX_COUNT];	// 0 -> Nothing, 1 -> Always pass, 2 -> Override usage patterns

	Gdiplus::ImageList m_ImageList;
	int				m_nNormalImageStart;
	int				m_nGrayImageStart;
	int				m_nDimImageStart;

	CImageList		m_StateImageList;
	int				m_nAlwaysStopImage;
	int				m_nAlwaysPassImage;

	CStatic*		m_pCurrentHighlightedIcon;
	int				m_nCurrentHighlightedIconIndex;
	BOOL			m_bHighlightedFirstPlayer;
	BOOL			m_bHighlightedCombatIcons1;
	BOOL			m_bHighlightedCombatIcons2;

	CCardTip		m_ToolTip;
	CString			m_strToolTipText;
	CPoint			m_ToolTipPoint;

	COLORREF		m_BlinkColor;
	CBrush			m_BlinkBrush;
	BOOL			m_bBlink;
	BOOL			m_bBlinkColorSet;

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
