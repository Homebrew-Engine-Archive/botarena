// UIText.h : header file
//

#pragma once

#include "UIElement.h"

//____________________________________________________________________________
//
// CUIText
//

class CUIText : public CUIElement
{
public:
	enum Font
	{
		SmallFont,
		LargeFont
	};

	CUIText(CPoint Point, float fAlpha = 1.0f);

	// Overrides

	virtual BOOL CanBeDragged(CPoint point)		{ return FALSE; }
	virtual void Draw(CDC* pDC, const CRgn* pClipRegion);
	virtual BOOL HasTransparentRegion() const	{ return TRUE; }
	virtual void OnMoved(CSize MoveSize);

	// Text Properties

	void SetText(LPCTSTR strText, COLORREF Color, Font font);
	CString GetText() const { return m_strPlainText; }

	void DropShadow(BOOL bDropShadow, int nOffset = 1, BYTE nAlpha = 255, Gdiplus::REAL fDistance = 0.25f) 
	{ 
		m_bDropShadow = bDropShadow; 
		m_nShadowOffset = nOffset;
		m_nShadowAlpha = nAlpha;
		m_fShadowDistance = fDistance;
	}

	void UseDefaultFrame(BOOL bUseFrame, BOOL bTextInLeftRight = FALSE, // put text in the left or right frame image? no -> restrict text to be within the middle frame image
						 float fHeightRatio = 1.2f, float fPlacementRatio = 0.0f)
	{
		m_bFrame = bUseFrame;

		if (m_bFrame)
		{
			if (!s_DefaultFrameMiddle.IsValid())
			{
				m_bFrame = FALSE;
				return;
			}

			m_fHeightRatio = fHeightRatio;
			m_fPlacementRatio = fPlacementRatio;
			m_bTextInLeftRight = bTextInLeftRight;
		}
	}

protected:
	static std::auto_ptr<Gdiplus::Font> s_apSmallFont;
	static std::auto_ptr<Gdiplus::Font> s_apLargeFont;

	static CGdipBitmap s_DefaultFrameLeft;
	static CGdipBitmap s_DefaultFrameMiddle;
	static CGdipBitmap s_DefaultFrameRight;

	static void InitializeFonts();
	static void InitializeBackground();

	static Gdiplus::Font* GetTextFont(Font font)
	{
		switch(font)
		{
		case SmallFont: return s_apSmallFont.get();
		case LargeFont: return s_apLargeFont.get();
		}

		ATLASSERT(false);
		return NULL;
	}

	void InitializeBoundRegion();

	const CMTGSymbol& m_SmallSymbols;
	const CMTGSymbol& m_LargeSymbols;

	// Text

	CPoint		m_Point;
	CString		m_strText;
	CString		m_strPlainText;
	CString		m_strDrawText;
	COLORREF	m_Color;
	Font		m_Font;
	Gdiplus::ImageAttributes	m_ImageAttribute;
	Gdiplus::ColorMatrix		m_ColorMatrix;

	// Text Shadow

	BOOL							m_bDropShadow;
	std::auto_ptr<Gdiplus::Bitmap>	m_apShadow;
	int								m_nShadowOffset;
	BYTE							m_nShadowAlpha;
	Gdiplus::REAL					m_fShadowDistance;

	// Frame

	CGdipBitmap			m_FrameLeft;
	CGdipBitmap			m_FrameMiddle;
	CGdipBitmap			m_FrameRight;

	BOOL				m_bFrame;
	float				m_fHeightRatio;
	float				m_fPlacementRatio;
	int					m_nTextWidth;
	BOOL				m_bTextInLeftRight;
};
