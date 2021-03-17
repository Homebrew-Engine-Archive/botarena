#pragma once
 
class CMemDC : public CDC 
{
public:
	CMemDC(CDC* pDC, BOOL bCopyBackground = FALSE)
		: m_pOldBitmap(NULL)
		, m_pDC(pDC)
		, m_pOldFont(NULL)
		, m_ScrollPos(0, 0)
	{
		ATLASSERT(m_pDC != NULL); // If you asserted here, you passed in a NULL CDC.
		ATLASSERT(!pDC->IsPrinting());

		CreateCompatibleDC(pDC);

		pDC->GetClipBox(&m_Rect);

		m_Bitmap.CreateCompatibleBitmap(pDC, m_Rect.Width(), m_Rect.Height());

		m_pOldBitmap = SelectObject(&m_Bitmap);
		m_pOldFont = SelectObject(pDC->GetCurrentFont());

		if (bCopyBackground)
			BitBlt(0, 0, m_Rect.Width(), m_Rect.Height(), pDC, m_Rect.left, m_Rect.top, SRCCOPY); 

		SetWindowOrg(m_Rect.left, m_Rect.top);
	}

	CMemDC(CDC* pDC, const CRect& clipRect, const CPoint& scrollPos, BOOL bCopyBackground = FALSE)
		: m_pOldBitmap(NULL)
		, m_pDC(pDC)
		, m_pOldFont(NULL)
		, m_Rect(clipRect)
		, m_ScrollPos(scrollPos)
	{
		ATLASSERT(m_pDC != NULL); // If you asserted here, you passed in a NULL CDC.
		ATLASSERT(!pDC->IsPrinting());

		CreateCompatibleDC(pDC);

		m_Bitmap.CreateCompatibleBitmap(pDC, m_Rect.Width(), m_Rect.Height());

		m_pOldBitmap = SelectObject(&m_Bitmap);
		m_pOldFont = SelectObject(pDC->GetCurrentFont());

		if (bCopyBackground)
			BitBlt(0, 0, m_Rect.Width(), m_Rect.Height(), pDC, m_Rect.left, m_Rect.top, SRCCOPY); 

		SetWindowOrg(m_Rect.left + scrollPos.x, m_Rect.top + scrollPos.y);
	}

	virtual ~CMemDC()
	{
		m_pDC->BitBlt(m_Rect.left, m_Rect.top, m_Rect.Width(), m_Rect.Height(), this, m_Rect.left + m_ScrollPos.x, m_Rect.top + m_ScrollPos.y, SRCCOPY);
		
		if (m_pOldBitmap)
			SelectObject(m_pOldBitmap);

		if (m_pOldFont)
			SelectObject(m_pOldFont);
	}

	CMemDC* operator->()	{ return this; }
	operator CMemDC*()		{ return this; }

private:
	CBitmap		m_Bitmap;		// Offscreen bitmap
	CBitmap*	m_pOldBitmap;	// bitmap originally found in CMemDC
	CDC*		m_pDC;			// Saves CDC passed in constructor
	CRect		m_Rect;			// Rectangle of drawing area.
	CFont*		m_pOldFont;
	CPoint		m_ScrollPos;
};
