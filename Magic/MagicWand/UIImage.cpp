// UIImage.cpp: implementation of the CUIImage class.
//

#include "stdafx.h"
#include "UIElement.h"
#include "UIImage.h"
#include "Resource.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CUIImage::CUIImage(CPoint point, const CGdipBitmap& bitmap, UIELEMENT_TYPE nType)
	: CUIElement(nType, INFO_LEVEL)
	, m_Point(point)
	, m_fAlpha(1.0f)
	, m_bAlphaIncreasing(false)
	, m_nBorderWidth(0)
	, m_bDrawBorder(FALSE)
{
	Reset();
	SetBitmap(bitmap);
}

void CUIImage::Reset()
{
	m_Bitmap.Reset();

	CRgn boundRgn;
	boundRgn.CreateRectRgn(0, 0, 1, 1);
	SetBoundRgn(boundRgn);
}

void CUIImage::RefreshBitmap()
{
	Gdiplus::Size bitmapSize(m_Bitmap.Size());

	Gdiplus::Rect rect(m_Point.x, m_Point.y, bitmapSize.Width, bitmapSize.Height);

	CRgn boundRgn;
	boundRgn.CreateRectRgn(rect.GetLeft(), rect.GetTop(), rect.GetRight(), rect.GetBottom());
	SetBoundRgn(boundRgn);
}

void CUIImage::SetBitmap(const CGdipBitmap& bitmap)
{
	m_Bitmap = bitmap;
	RefreshBitmap();
}

void CUIImage::SetAlphaValue(float fAlpha)
{
	m_fAlpha = fAlpha;
}

float CUIImage::GetAlphaValue() const
{
	return m_fAlpha;
}

void CUIImage::SetAlphaIncreasing(bool bIncreasing)
{
	m_bAlphaIncreasing = bIncreasing;
}

bool CUIImage::GetAlphaIncreasing() const
{
	return m_bAlphaIncreasing;
}

void CUIImage::CycleAlphaValue(float fMinAlpha, float fMaxAlpha, float fStep)
{
	if (!m_bAlphaIncreasing)
		fStep = -fStep;

	float fAlpha = m_fAlpha + fStep;

	if (fAlpha < fMinAlpha || fAlpha > fMaxAlpha)
	{
		if (fAlpha < fMinAlpha)
		{
			fAlpha = fMinAlpha;
			m_bAlphaIncreasing = true;
		}
		else
			if (fAlpha > fMaxAlpha)
			{
				fAlpha = fMaxAlpha;
				m_bAlphaIncreasing = false;
			}
	}

	SetAlphaValue(fAlpha);
}

void CUIImage::Draw(CDC* pDC, const CRgn* pClipRegion)
{
	if (m_Bitmap.IsValid())
	{
		Gdiplus::Graphics graphics(pDC->GetSafeHdc());

		if (m_fAlpha != 1.0)
		{
			CGdipBitmap bitmap(m_Bitmap);
			bitmap.ChangeTransparency(m_fAlpha);
			graphics.DrawImage(bitmap, m_Point.x, m_Point.y);
		}
		else
		{
			//graphics.DrawImage(m_Bitmap, m_Point.x, m_Point.y);
			graphics.DrawImage(m_Bitmap, 
				Gdiplus::Rect(Gdiplus::Point(m_Point.x, m_Point.y), m_Bitmap.Size()),
				0, 0, m_Bitmap.Size().Width, m_Bitmap.Size().Height, Gdiplus::UnitPixel);

		}

		if (m_nBorderWidth)
			DrawBorder(pDC, m_nBorderWidth, m_BorderColor);
	}
}

void CUIImage::OnMoved(CSize moveSize)
{
	m_Point += moveSize;
}

void CUIImage::DrawBorder(CDC* pDC, int nWidth, COLORREF Color)
{
	CPen Pen(PS_SOLID | PS_INSIDEFRAME, nWidth, Color);
	CBrush* pOldBrush = (CBrush*)pDC->SelectStockObject(NULL_BRUSH);
	CPen* pOldPen = pDC->SelectObject(&Pen);

	Gdiplus::Size bitmapSize(m_Bitmap.Size());

	pDC->Rectangle(
		m_Point.x, m_Point.y,
		m_Point.x + bitmapSize.Width - 1, m_Point.y + bitmapSize.Height - 1);

	pDC->SelectObject(pOldPen);
	pDC->SelectObject(pOldBrush);
}

void CUIImage::SetBorder(int nWidth, COLORREF Color)
{
	m_nBorderWidth = nWidth;
	m_BorderColor = Color;
}

void CUIImage::RemoveBorder()
{
	m_nBorderWidth = 0;
}

BOOL CUIImage::UpdateBorder()
{
	COLORREF OldColor = m_BorderColor;
	int nOldBorderWidth = m_nBorderWidth;
	const int nBorderWidth = 4;

	if (m_bDrawBorder)
		SetBorder(nBorderWidth, RGB(128, 255, 255));
	else
		RemoveBorder();

	return OldColor != m_BorderColor || nOldBorderWidth != m_nBorderWidth;
}
