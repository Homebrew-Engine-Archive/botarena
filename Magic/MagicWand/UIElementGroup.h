#pragma once

#include "UIElement.h"

//____________________________________________________________________________
//
// CUIElementGroup
//

class CUIElementGroup : public CUIElement
{
public:
	CUIElementGroup(ALTITUDE_TYPE nAltitude);
	virtual ~CUIElementGroup();

	virtual BOOL CanBeDragged(CPoint point);
	virtual void Draw(CDC* pDC, const CRgn* pClipRegion);
	virtual BOOL HasTransparentRegion() const;
	virtual void OnMoved(CSize moveSize);
	virtual CString UpdateToolTipText(CPoint point);

	virtual void OnAssociatedElementAdded(CUIElement* pElement);
	virtual void OnAssociatedElementRemoved(CUIElement* pElement);
	virtual void OnAssociatedElementBoundRegionChanged(CUIElement* pElement);
};