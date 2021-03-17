// UILink.h : header file
//

#pragma once

#include "UIElement.h"

//____________________________________________________________________________
//
// CUILink
//

class CUILink: public CUIElement
{
public:
	enum LINK_TYPE
	{
		ENCHANTED = 1,
		BLOCKED,
		IS_ALSO_A,
		EQUIPPED
	};

	static const int s_nDefaultWidth = 10;

	CUILink(LINK_TYPE LinkType, CUIElement* pUIElement1, CUIElement* pUIElement2,
			LPCTSTR strToolTipText, COLORREF Color, int nWidth = s_nDefaultWidth);
	virtual ~CUILink();

	// Overrides

	virtual BOOL CanBeDragged(CPoint point)		{ return FALSE; }
	virtual void Draw(CDC* pDC, const CRgn* pClipRegion);
	virtual BOOL HasTransparentRegion() const	{ return TRUE; }
	virtual void OnAssociatedElementAdded(CUIElement* pElement);
	virtual void OnAssociatedElementRemoved(CUIElement* pElement);
	virtual void OnAssociatedElementBoundRegionChanged(CUIElement* pElement);
	virtual void OnMoved(CSize MoveSize);
	//virtual BOOL PtInElement(CPoint Point) const;
	
	// Link Properties

	LINK_TYPE GetLinkType()		{ return m_LinkType; }

	CUIElement* GetElement1()	{ return m_pUIElement1; }
	CUIElement* GetElement2()	{ return m_pUIElement2; }

	void Refresh();

protected:
	static const CSize s_BufferSize;

	CRect GetViewRect();
	BOOL UpdatePath();
	void InitializeBoundRegion();
	void ClearWaypoints();

	CUIElement*				m_pUIElement1;
	CUIElement*				m_pUIElement2;
	CRect					m_Rect1;
	CRect					m_Rect2;
	COLORREF				m_Color;
	int						m_nWidth;
	LINK_TYPE				m_LinkType;
	Gdiplus::Point*			m_pWaypoints;
	int						m_nWaypointCount;
	Gdiplus::Pen			m_Pen;
	Gdiplus::GraphicsPath	m_Path;
};
