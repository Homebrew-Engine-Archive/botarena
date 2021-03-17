// UIText.cpp: implementation of the CUIText class.
//

#include "stdafx.h"
#include "UIElement.h"
#include "UIText.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
std::auto_ptr<Gdiplus::Font> CUIText::s_apSmallFont;
std::auto_ptr<Gdiplus::Font> CUIText::s_apLargeFont;

CGdipBitmap CUIText::s_DefaultFrameLeft;
CGdipBitmap CUIText::s_DefaultFrameMiddle;
CGdipBitmap CUIText::s_DefaultFrameRight;

#pragma push_macro("new")
#ifdef new
#undef new
#endif

void CUIText::InitializeFonts()
{
	if (!s_apSmallFont.get())
		s_apSmallFont.reset(new Gdiplus::Font(_T("MPlantin"), 18, Gdiplus::FontStyleBold, Gdiplus::UnitPixel));

	if (!s_apLargeFont.get())
		s_apLargeFont.reset(new Gdiplus::Font(_T("MPlantin"), 48, Gdiplus::FontStyleBold, Gdiplus::UnitPixel));
}

void CUIText::InitializeBackground()
{
	s_DefaultFrameLeft.Load(g_pCoreApp->GetBitmapPath() + _T("\\FrameLeft.png"));
	s_DefaultFrameMiddle.Load(g_pCoreApp->GetBitmapPath() + _T("\\FrameMiddle.png"));
	s_DefaultFrameRight.Load(g_pCoreApp->GetBitmapPath() + _T("\\FrameRight.png"));
}

CUIText::CUIText(CPoint Point, float fAlpha)
	: CUIElement(TEXT_ELEMENT, INFO_LEVEL)
	, m_Font(SmallFont)
	, m_SmallSymbols(CCardStore::GetInstance()->GetSmallSymbols())
	, m_LargeSymbols(CCardStore::GetInstance()->GetLargeSymbols())
	, m_bDropShadow(FALSE)
	, m_nShadowOffset(5)
	, m_nShadowAlpha(255)
	, m_fShadowDistance(0.25f)
	, m_bFrame(false)
	, m_fHeightRatio(1.2f)
	, m_fPlacementRatio(0.0f)
	, m_nTextWidth(0)
	, m_bTextInLeftRight(FALSE)
{
	m_Point = Point;
	m_Color = RGB(0, 0, 0);

	InitializeFonts();
	InitializeBackground();

	Gdiplus::ColorMatrix colorMatrix =         { 
				1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, fAlpha, 0.0f, // <- alpha
				0.0f, 0.0f, 0.0f, 0.0f, 1.0f
	};

	m_ColorMatrix = colorMatrix;

	m_ImageAttribute.SetColorMatrix(&m_ColorMatrix, Gdiplus::ColorMatrixFlagsDefault, 
                        Gdiplus::ColorAdjustTypeBitmap);
}

void CUIText::SetText(LPCTSTR strText, COLORREF color, Font font)
{
	m_Color = color;
	m_Font = font;

	m_strText = strText;
	PrepareTextWithSymbols(strText, m_strDrawText, m_strPlainText);

	InitializeBoundRegion();

	if (m_bDropShadow)
	{
		CRect boundRect(GetBoundRect());
		m_apShadow.reset(CreateTextShadow(m_strPlainText, Gdiplus::SizeF(Gdiplus::REAL(boundRect.Width()), Gdiplus::REAL(boundRect.Height())), 
								  *GetTextFont(m_Font),
								  m_nShadowAlpha, // 0 (light) - 255 (dark)
								  m_fShadowDistance)); // 0.1 (blurry) - 1.0 (sharp)
	}
}

void CUIText::Draw(CDC* pDC, const CRgn* pClipRegion)
{
	/*
	// Debug region
	{
		Gdiplus::RectF borderRect(ToRectF(GetBoundRect()));
		Gdiplus::SolidBrush brush(Gdiplus::Color(255, 0, 0));
		Gdiplus::Graphics(pDC->GetSafeHdc()).FillRectangle(&brush, borderRect);
	}
	*/

	Gdiplus::Graphics graphics(pDC->GetSafeHdc());

	CRect boundRect(GetBoundRect());

	if (m_bFrame && m_FrameMiddle.IsValid())
	{
		if (m_FrameLeft.IsValid())
		{
			Gdiplus::Point point(boundRect.left, boundRect.top + (boundRect.Height() - m_FrameLeft.Size().Height) / 2);
			graphics.DrawImage(m_FrameLeft, point);
		}

		int nBackgroundLeftWidth = m_FrameLeft.IsValid() ? m_FrameLeft.Size().Width : 0;

		int nMiddleBackgroundCount = (boundRect.Width() - nBackgroundLeftWidth - (m_FrameRight.IsValid() ? m_FrameRight.Size().Width : 0)) / m_FrameMiddle.Size().Width;
		for (int i = 0; i < nMiddleBackgroundCount; ++i)
		{
			Gdiplus::Point point2(boundRect.left 
				+ nBackgroundLeftWidth
				+ i * m_FrameMiddle.Size().Width, boundRect.top + (boundRect.Height() - m_FrameMiddle.Size().Height) / 2);
			graphics.DrawImage(m_FrameMiddle, point2);

			/*
			// Hack
			if (!i)
				graphics.DrawImage(m_FrameMiddle.get(), Gdiplus::Point(point2.X - 2, point2.Y));
			graphics.DrawImage(m_FrameMiddle.get(), Gdiplus::Point(point2.X + 2, point2.Y));
			*/
		}

		if (m_FrameRight.IsValid())
		{
			Gdiplus::Point point3(boundRect.left
				+ nBackgroundLeftWidth +
				nMiddleBackgroundCount * m_FrameMiddle.Size().Width, boundRect.top + (boundRect.Height() - m_FrameRight.Size().Height) / 2);
			graphics.DrawImage(m_FrameRight, point3);
		}

		int nTextHeight = (int)((float)m_FrameMiddle.Size().Height / m_fHeightRatio);
		boundRect.top = boundRect.top + (boundRect.Height() - nTextHeight) / 2 + (int)((float)nTextHeight * m_fPlacementRatio);
		boundRect.bottom = boundRect.top + nTextHeight;

		int nBackgroundWidth = boundRect.Width();
		boundRect.left += (nBackgroundWidth - m_nTextWidth) / 2;
		boundRect.right = boundRect.left + nBackgroundWidth;
	}

	if (m_bDropShadow && m_apShadow.get())
	{
		graphics.DrawImage(m_apShadow.get(), Gdiplus::Point(
			boundRect.left + m_nShadowOffset, 
			boundRect.top + m_nShadowOffset));
	}

	if (!CCardStore::GetInstance()->GetShowMTGSymbols())
	{
		Gdiplus::SolidBrush brush(Gdiplus::Color(200, GetRValue(m_Color), GetGValue(m_Color), GetBValue(m_Color)));

		graphics.SetTextRenderingHint(Gdiplus::TextRenderingHintAntiAlias);

		graphics.DrawString(m_strPlainText, -1, GetTextFont(m_Font), Gdiplus::PointF(Gdiplus::REAL(boundRect.left), Gdiplus::REAL(boundRect.top)), &brush);

		return;
	}

	DrawMagicText(
		graphics, m_Color, 
		*GetTextFont(m_Font),
		m_Font == SmallFont ? m_SmallSymbols : m_LargeSymbols,
		m_strDrawText,
		ToRectF(boundRect), 
		Gdiplus::SizeF(0, 0), FALSE, &m_ImageAttribute, TRUE);
}

void CUIText::OnMoved(CSize moveSize)
{
	m_Point += moveSize;

	ATLASSERT(m_Point.x < 10000 && m_Point.y < 10000);
}

void CUIText::InitializeBoundRegion()
{
	CRect rect(CPoint(0, 0), CSize(1, 1));
	Gdiplus::RectF layoutRect((Gdiplus::REAL)m_Point.x, (Gdiplus::REAL)m_Point.y, 0, 0);

	if (_tcslen(m_strDrawText) && CCardStore::GetInstance()->GetShowMTGSymbols())
	{
		CClientDC screenDC(::AfxGetMainWnd());

		DrawMagicText(
			Gdiplus::Graphics(screenDC.GetSafeHdc()), m_Color, 
			*GetTextFont(m_Font),
			m_Font == SmallFont ? m_SmallSymbols : m_LargeSymbols,
			m_strDrawText,
			layoutRect, Gdiplus::SizeF(0, 0), TRUE);
	}
	else
	if (_tcslen(m_strPlainText))
	{
		CClientDC screenDC(::AfxGetMainWnd());
		Gdiplus::Graphics graphics(screenDC.GetSafeHdc());

		graphics.MeasureString(m_strPlainText, -1, GetTextFont(m_Font), 
			Gdiplus::PointF(Gdiplus::REAL(m_Point.x), Gdiplus::REAL(m_Point.y)), &layoutRect);
	}

	rect = ToRect(layoutRect);
	m_nTextWidth = rect.Width();

	if (m_bDropShadow)
	{
		rect.bottom += m_nShadowOffset;
		rect.right += m_nShadowOffset;
	}

	if (m_bFrame && s_DefaultFrameMiddle.IsValid())
	{
		int nTargetBackgroundHeight = (int)((float)rect.Height() * m_fHeightRatio);

		if (m_FrameMiddle.Size().Height != nTargetBackgroundHeight)
		{
			m_FrameLeft.Reset();
			m_FrameMiddle.Reset();
			m_FrameRight.Reset();
		}

		if (!m_FrameMiddle.IsValid())
		{
			float fRatio = (float)nTargetBackgroundHeight / (float)s_DefaultFrameMiddle.Size().Height;

			Gdiplus::Size size((int)((float)s_DefaultFrameMiddle.Size().Width * fRatio), 
				(int)((float)s_DefaultFrameMiddle.Size().Height * fRatio));

			m_FrameMiddle = s_DefaultFrameMiddle;
			m_FrameMiddle.Stretch(size);
			m_FrameMiddle.Crop(2, 2, 0, 0);

			if (s_DefaultFrameLeft.IsValid())
			{
				Gdiplus::Size size((int)((float)s_DefaultFrameLeft.Size().Width * fRatio),
					(int)((float)s_DefaultFrameLeft.Size().Height * fRatio));

				m_FrameLeft = s_DefaultFrameLeft;
				m_FrameLeft.Stretch(size);
				m_FrameLeft.Crop(0, 2, 0, 0);
			}

			if (s_DefaultFrameRight.IsValid())
			{
				Gdiplus::Size size((int)((float)s_DefaultFrameRight.Size().Width * fRatio),
					(int)((float)s_DefaultFrameRight.Size().Height * fRatio));

				m_FrameRight = s_DefaultFrameRight;
				m_FrameRight.Stretch(size);
				m_FrameRight.Crop(2, 0, 0, 0);
			}
		}
		
		if (m_FrameMiddle.IsValid())
		{
			int nMiddleBackgroundCount = 0;

			if (m_bTextInLeftRight)
			{
				if (rect.Width() > (m_FrameLeft.IsValid() ? m_FrameLeft.Size().Width : 0) + (m_FrameRight.IsValid() ? m_FrameRight.Size().Width : 0))
					nMiddleBackgroundCount = (int)ceil((float)(rect.Width() - (m_FrameLeft.IsValid() ? m_FrameLeft.Size().Width : 0) - (m_FrameRight.IsValid() ? m_FrameRight.Size().Width : 0)) / (float)m_FrameMiddle.Size().Width);
			}
			else
			{
				nMiddleBackgroundCount = (int)ceil((float)rect.Width() / (float)m_FrameMiddle.Size().Width);
			}

			rect.right = rect.left + nMiddleBackgroundCount * m_FrameMiddle.Size().Width +
				(m_FrameLeft.IsValid() ? m_FrameLeft.Size().Width : 0) +
				(m_FrameRight.IsValid() ? m_FrameRight.Size().Width : 0);

			int nBackgroundHeight =
				MAX(MAX(m_FrameMiddle.Size().Height,
				(m_FrameLeft.IsValid() ? m_FrameLeft.Size().Height : 0)), 
				(m_FrameRight.IsValid() ? m_FrameRight.Size().Height : 0));

			if (rect.Height() < nBackgroundHeight)
				rect.bottom = rect.top + nBackgroundHeight;
		}
	}

	CRgn BoundRgn;
	BoundRgn.CreateRectRgn(rect.left, rect.top, rect.right, rect.bottom);
	SetBoundRgn(BoundRgn);
}

#pragma pop_macro("new")
