#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "clrbutton.h"

// CAppearanceDialog dialog

class CAppearanceDialog : public CDialog
{
	DECLARE_DYNAMIC(CAppearanceDialog)

public:
	CAppearanceDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAppearanceDialog();

// Dialog Data
	enum { IDD = IDD_APPEARANCE };

	BOOL	m_bShowSelectionIndicator;
	BOOL	m_bAnimatedCardMovement;
	BOOL	m_bSpeech;
	BOOL	m_bSpeakOpening;
	BOOL	m_bDisableSpeech;
	DWORD	m_dwBoardSize;
	BOOL	m_bShowLife;
	BOOL	m_bShowPool;
	BOOL	m_bShowPhaseText;
	BOOL	m_bShowPhaseIcon;
	BOOL	m_bShowAvatarImage;
	BOOL	m_bShowLibraryCardCount;
	int		m_nBackgroundLocation;
	UINT	m_uBuiltinBackground;
	CString m_strCustomBackgroundFile;
	BOOL	m_bScaleCustomBackground;
	BOOL	m_bKeepAspectRatio;
	int		m_nCardSize;
	COLORREF m_LifeTextColor;
	COLORREF m_LibraryTextColor;
	COLORREF m_PhaseTextColor;
	BOOL	m_bAlwaysStackLands;
	BOOL	m_bAutoZoom;

	CString	m_strAvatarPath1;
	CString m_strAvatarPath2;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

	void EnableControls();
	void ResizeCardBitmap();

	CComboBox	m_BoardSize;
	CStatic		m_Card;
	CBitmap		m_CardBitmap;
	CSliderCtrl m_CardSizeSlider;
	CStatic		m_CardSizeValue;
	CClrButton	m_LifeColorButton;
	CClrButton	m_LibraryColorButton;	
	CClrButton	m_PhaseColorButton;

	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedBackgroundLocation();
	afx_msg void OnBnClickedUseCustomBackground();
	afx_msg void OnSpeech();
	afx_msg void OnBnClickedBrowse();
	afx_msg void OnBnClickedScaleCustomBackground();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnBnClickedLifeColor();
	afx_msg void OnBnClickedLibraryColor();
	afx_msg void OnBnClickedPhaseColor();
	afx_msg void OnBnClickedAvatars();
};
