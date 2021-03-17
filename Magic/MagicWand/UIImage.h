// UIImage.h : header file
//

#pragma once

#include "UIElement.h"

//____________________________________________________________________________
//
// CUIImage
//

class CUIImage : public CUIElement
{
public:
	CUIImage(CPoint Point = CPoint(), const CGdipBitmap& bitmap = CGdipBitmap(), UIELEMENT_TYPE nType = IMAGE_ELEMENT);

	// Overrides

	virtual BOOL CanBeDragged(CPoint point)		{ return FALSE; }
	virtual void Draw(CDC* pDC, const CRgn* pClipRegion);
	virtual void OnMoved(CSize MoveSize);
	virtual BOOL HasTransparentRegion() const { return TRUE; }

	// Image Properties

	void SetBitmap(const CGdipBitmap& bitmap);
	const CGdipBitmap& GetBitmap() const { return m_Bitmap; }
	void RefreshBitmap();
	void Reset();

	void SetAlphaValue(float fAlpha);
	float GetAlphaValue() const;
	void SetAlphaIncreasing(bool bIncreasing);
	bool GetAlphaIncreasing() const;

	void CycleAlphaValue(float fMinAlpha, float fMaxAlpha, float fStep);

	BOOL DrawBorder(BOOL bDrawBorder) { m_bDrawBorder = bDrawBorder; return UpdateBorder(); }

protected:
	void DrawBorder(CDC* pDC, int nWidth, COLORREF Color);
	void SetBorder(int nWidth, COLORREF Color);
	void RemoveBorder();
	BOOL HasBorder() { return m_nBorderWidth != 0; }
	BOOL UpdateBorder();

	// Image

	CGdipBitmap	m_Bitmap;
	CPoint		m_Point;

	// Transparency

	float		m_fAlpha;
	bool		m_bAlphaIncreasing;

	// Border

	int			m_nBorderWidth;
	COLORREF	m_BorderColor;
	BOOL		m_bDrawBorder;
};
