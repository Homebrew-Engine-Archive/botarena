// SelectionDialogBar.h : header file
//

#pragma once

#include "SizeCBar.h"
#include "SelectionListCtrl.h"
#include "StackDialog.h"

//_____________________________________________________________________________
//
// CSelectionDialogBar dialog
//

class CSelectionDialogBar : public CSizingControlBar
{
public:
	CSelectionDialogBar();   // standard constructor
	virtual ~CSelectionDialogBar();

	HANDLE GetMoveSelectedEvent() const	{ return m_hMoveSelected; }
	void Quit();
	BOOL IsSelectingMove() const		{ return m_pMoveContainer != NULL; }

	void SelectMove(int nMoveIndex);
	void HighlightMove(int nMoveIndex);

	int AddSelectionToMenu(CMenu* pMenu, CCard* pCard,
						   BOOL bSingleMoveIsDefault,
						   BOOL bSingleTapUnTapIsDefault);
	BOOL HasMove(const CCard* pCard, BOOL bTricks) const;
	int GetMoveIndex(CCard* pSrcCard, CCard* pDesCard, BOOL bTricks) const;
	int GetMoveIndex(CCard* pSrcCard, CPlayer* pDesPlayer, BOOL bTricks) const;

	BOOL AutoMove() const;
	BOOL AutoUntap() const;
	BOOL ShowTrick() const;
	void SetAutoMove(BOOL bAutoMove);
	void SetAutoUntap(BOOL bAutoUntap);
	void SetShowTrick(BOOL bShowTrick);
	void SetDoneForPlayerTurn();

	void UpdateMTGFont();

	void SetSelectionTimerCountdown(int nCountdown)			{ m_nSelectionTimerCountdown = nCountdown; }
	int GetSelectionTimerCountdown()						{ return m_nSelectionTimerCountdown; }

	void SetDelaySelectInMain(BOOL bDelaySelectInMain)		{ m_bDelaySelectInMain = bDelaySelectInMain; }
	BOOL GetDelaySelectInMain()								{ return m_bDelaySelectInMain; }

	void SetDelaySelectInOthers(BOOL bDelaySelectInOthers)	{ m_bDelaySelectInOthers = bDelaySelectInOthers; }
	BOOL GetDelaySelectInOthers()							{ return m_bDelaySelectInOthers; }

	void ResetSelectionTimerWindow()						{ m_hwndSelectionTimer = NULL; }

	BOOL HasUndoMoves() const								{ return m_nFirstUndoMove != -1; }
	void SelectFirstUndoMove();

protected:
	struct CombatDamageAssignment
	{
		const CCard* pSourceCard;
		int nPoints;
		int nAssignedPoints;
		CSubjectGroup subjects;
	};

	typedef std::map<const CCard*, CombatDamageAssignment> CombatDamageAssignments;
		
	void UpdateList();
	void ShowSelectionTimerDialog(int nMoveIndex);
	BOOL HandleCombatDamageAssignments();
	
	CSelectionListCtrl		m_SelectionList;
	CImageList		m_ImageList;
	CFont			m_Font;
	CButton			m_ShowTrickButton;
	CButton			m_AutoUntapButton;
	CButton			m_AutoMoveButton;

	HANDLE			m_hMoveSelected;

	const CActionContainer*	m_pMoveContainer;
	int*			m_pnSelectedMove;
	BOOL			m_bUpdating;

	CStackDialog*	m_pStackDialog;
	int				m_nSelectionTimerCountdown;
	BOOL			m_bDelaySelectInMain;
	BOOL			m_bDelaySelectInOthers;
	HWND			m_hwndSelectionTimer;

	int				m_nFirstUndoMove;

	int				m_nDoneForPlayerTurn;

	CombatDamageAssignments m_CombatDamageAssignments;

// Generated message map functions
protected:
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDblclkSelectionList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDestroy();
	afx_msg void OnItemchangedSelectionList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg LRESULT OnSelectMoves(WPARAM wParam, LPARAM lParam);
	afx_msg void OnShowTricks();
    afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()
};
