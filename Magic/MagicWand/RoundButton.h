#pragma once

// RoundButton.h : header file
//
// Round buttons!
//
// Written by Chris Maunder (Chris.Maunder@cbr.clw.csiro.au)
// Copyright (c) 1998.
//
// This code may be used in compiled form in any way you desire. This
// file may be redistributed unmodified by any means PROVIDING it is 
// not sold for profit without the authors written consent, and 
// providing that this notice and the authors name is included. If 
// the source code in  this file is used in any commercial application 
// then a simple email woulod be nice.
//
// This file is provided "as is" with no expressed or implied warranty.
// The author accepts no liability if it causes any damage to your
// computer, causes your pet cat to fall ill, increases baldness or
// makes you car start emitting strange noises when you start it up.
//
// Expect bugs.
// 
// Please use and enjoy. Please let me know of any bugs/mods/improvements 
// that you have found/implemented and I will fix/incorporate them into this
// file. 
//
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
// CRoundButton window

class CRoundButton : public CButton
{
// Construction
public:
	CRoundButton();

	void SetFaceColor(COLORREF Color) { m_ClrButtonFace = Color; }
	void SetShadowColor(COLORREF Color) { m_ClrShadow = Color; }
	void SetLightColor(COLORREF Color) { m_ClrLight = Color; }
	void SetDarkShadowColor(COLORREF Color) { m_ClrDarkShadow = Color; }
	void SetHighLightColor(COLORREF Color) { m_ClrHighLight = Color; }

	void SetColor(COLORREF FaceColor, COLORREF DarkShadowColor);

	void SetTextShadow(BOOL bShadow) { m_bTextShadow = bShadow; }

	int AddButtonIcon(UINT uID);
	void UseButtonIcon(int nIndex);
	int GetCurrentIcon() { return m_nImageIndex; }

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRoundButton)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	protected:
	virtual void PreSubclassWindow();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRoundButton();

	CRgn   m_Rgn;
	CRgn   m_Rgn1;
	CRgn   m_Rgn2;
	CRgn   m_Rgn3;
	CFont  m_Font;
	CPen   m_Pen1;
	CPen   m_Pen2;
	CPen   m_Pen3;
	CPen   m_Pen4;
	CPoint m_ptCentre;
	CPoint m_ptLeft;
	CPoint m_ptRight;
	int    m_nRadius;
	BOOL   m_bDrawDashedFocusCircle;
	BOOL   m_bStretch;
	COLORREF	m_ClrButtonFace;
	COLORREF	m_ClrShadow;
	COLORREF	m_ClrLight;
	COLORREF	m_ClrDarkShadow;
	COLORREF	m_ClrHighLight;
	BOOL   m_bTextShadow;
	CArray<POINT> m_LeftOuter;
	CArray<POINT> m_RightOuter;
	CArray<COLORREF> m_Color;
	CArray<COLORREF> m_Color2;
	CArray<COLORREF> m_Color3;
	CArray<COLORREF> m_Color4;

	CImageList	m_ImageList;
	int			m_nImageIndex;
	BOOL		m_bHideIconWhenDisabled;

	// Generated message map functions
protected:
	//{{AFX_MSG(CRoundButton)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};
