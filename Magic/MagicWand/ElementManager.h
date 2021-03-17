#pragma once

#include "UIElement.h"
#include "MemDC.h"

//____________________________________________________________________________
//
// CElementManager
//

class CElementManager
{
public:
	enum BACKGROUND_STYLE
	{
		BKG_CENTER = 0,
		BKG_TILE = 1
	};

	CElementManager(CScrollView* pView);
	~CElementManager();

	// Add and Remove Operations

	void AddElement(CUIElement* pElement);
	void AddElements(const std::vector<CUIElement*>& elements);

	void RemoveElement(CUIElement* pElement);
	void RemoveElementAt(int i);
	void RemoveAllElementsAtAltitude(CUIElement::ALTITUDE_TYPE nAltitude);
	void RemoveAllElements();

	void DetachElement(CUIElement* pElement);
	void DetachAllElementsAtAltitude(CUIElement::ALTITUDE_TYPE nAltitude, std::vector<CUIElement*>& elements);

	int GetElementCount() const;
	CUIElement* GetElement(int nIndex);

	CUIElement* GetElement(CPoint Point, int nElementType = -1, CUIElement* pExcludeThis = NULL);
	void GetElements(CUIElement::ALTITUDE_TYPE nAltitude, std::vector<CUIElement*>& elements);

	void Sort();

	// Zorder

	void ShuffleElementToFront(CUIElement* pElement);	// within the same altitude
	void ShuffleElementToBack(CUIElement* pElement);	// within the same altitude
	void ShuffleElementTo(CUIElement* pElement, CUIElement* pBehindThisElement); // these elements must have the same altitude

	void ChangeElementAltitude(CUIElement* pElement, CUIElement::ALTITUDE_TYPE nAltitude, BOOL bFront);
	void ChangeElementAltitude(CUIElement* pElement, CUIElement::ALTITUDE_TYPE nAltitude);

	// Move

	void AddMovingElement(CUIElement* pElement, CPoint toPt);
	void RemoveMovingElement(CUIElement* pElement);
	CPoint GetElementDestination(CUIElement* pElement);
	void UpdateMovingElements(CDC* pDC, BOOL bStartToFinish);
	void UpdateMovingElements(BOOL bStartToFinish);

	// Background

	void SetBackground(LPCTSTR strBackgroundFile, BACKGROUND_STYLE nBackgroundStyle, 
					   BOOL bScaleBackground, BOOL bBackgroundKeepAspectRatio);
	CString BackgroundFile() const;
	BACKGROUND_STYLE BackgroundStyle() const;
	BOOL ScaleBackground() const;
	BOOL BackgroundKeepAspectRatio() const;

	// Drawing

	void InvalidateElement(CUIElement* pElement);
	void UpdateElement(CDC* pDC, CUIElement* pElement);
	void UpdateElement(CUIElement* pElement);

	void Draw(CMemDC& dc2, CRgn& currentClipRgn, const CRect& clipRect);

protected:
	struct ElementMovement
	{
		ElementMovement(CUIElement* _pElement, CPoint _fromPoint, CPoint _toPoint)
			: pElement(_pElement)
			, toPoint(_toPoint)
		{
			int nDistance = MAX(toPoint.x - _fromPoint.x, toPoint.y - _fromPoint.y);
			nSteps = nDistance / 20;
			if (nSteps < 2)
				nSteps = 2;
			else
				if (nSteps > 20)
					nSteps = 20;

			delta.cx = (toPoint.x - _fromPoint.x) / nSteps;
			delta.cy = (toPoint.y - _fromPoint.y) / nSteps;
		}

		CUIElement* pElement;
		int nSteps;
		CSize delta;
		CPoint toPoint;
	};

	static bool SortElementFunc(const CUIElement* lhs, const CUIElement* rhs);

	CRect GetViewRect();
	int FindAltitudeLocation(CUIElement::ALTITUDE_TYPE nAltitude, BOOL bFront) const;

	CScrollView* m_pView;

	std::vector<CUIElement*>	m_Elements;
	std::list<ElementMovement>	m_MovingElements;

	// Background

	CString		m_strBackgroundFile;
	BOOL		m_bScaleBackground;
	BOOL		m_bBackgroundKeepAspectRatio;

	BACKGROUND_STYLE m_nBackgroundStyle;

	CGdipBitmap	m_Background;
	CGdipBitmap	m_BackgroundResized;

};