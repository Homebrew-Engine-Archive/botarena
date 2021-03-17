// UISelection.h : header file
//

#pragma once

//____________________________________________________________________________
//
// CUISelection
//

class CUISelection : public CUIElement
{
public:
	CUISelection(CRect EnclosingRect, CardType cardColor = CardType::Misc);

	// Overrides

	virtual BOOL CanBeDragged(CPoint point)		{ return FALSE; }
	virtual void Draw(CDC* pDC, const CRgn* pClipRegion);
	virtual BOOL HasTransparentRegion() const	{ return TRUE; }
	virtual void OnMoved(CSize MoveSize);

	// Selection Properties

	void ShiftBrush();

	CardType GetColor() const { return m_CardColor; }
	void SetColor(CardType cardColor);

	CRect GetEnclosingRect() const { return m_EnclosingRect; }
	void SetEnclosingRect(CRect enclosingRect);

protected:
	enum SELECTION_METRICS
	{
		CORNER_RATIO = 10,
		SELECTION_FRAME_MARGIN = 4,
		SELECTION_FRAME_THICK = 8
	};

	static const int s_nSteps = 5;

	void InitializeBoundRegion();
	void CreateBrush();

	CRect		m_EnclosingRect;
	CRect		m_BoundRect;
	CardType	m_CardColor;

	Gdiplus::PathGradientBrush*	m_pBrush;
	int							m_nBrushDirection;			// 0 ->, 1 V, 2 <-, 3 ^
	Gdiplus::REAL				m_fBrushDelta;
	Gdiplus::PointF				m_fBrushPos;
	Gdiplus::SizeF				m_fBrushSize;
};
