// UIElement.h : header file
//

#pragma once

//____________________________________________________________________________
//
// CUIElement
//

class CUIElement
{
	friend class CElementManager;

public:
	enum UIELEMENT_TYPE
	{
		INVALID_ELEMENT,
		CARD_ELEMENT,
		SELECTION_ELEMENT,
		LINK_ELEMENT,
		TEXT_ELEMENT,
		IMAGE_ELEMENT,
		AVATAR_ELEMENT,
		GROUP_ELEMENT
	};

	enum ALTITUDE_TYPE
	{
		LINK_LEVEL,
		NORMAL_LEVEL,
		SELECTION_LEVEL,
		INFO_LEVEL,
		ZOOM_LEVEL,
		_ALTITUDE_COUNT
	};

	CUIElement(UIELEMENT_TYPE nType, ALTITUDE_TYPE nAltitude, int nElementData = -1);
	virtual ~CUIElement();

	// General Properties

	UIELEMENT_TYPE GetElementType() const			{ return m_nType; }

	ALTITUDE_TYPE GetAltitude() const				{ return m_nAltitude; }

	int GetElementData() const						{ return m_nElementData; }
	void SetElementData(int nElementData)			{ m_nElementData = nElementData; }

	void SetToolTipText(LPCTSTR strToolTipText);
	CString GetToolTipText(CPoint Point);
	virtual CString UpdateToolTipText(CPoint Point)	{ return m_strToolTipText; }

	unsigned __int64 GetSortKey() const				{ return m_nSortKey; }
	void SetSortKeyOrderedPart(WORD wOrdered);
	WORD GetSortKeyOrderedPart() const;
	void SetSortKeyCustomPart(DWORD dwCustom);

	// Element Location and Region

	const CRgn* GetBoundRgn() const;
	virtual BOOL HasTransparentRegion() const		{ return FALSE; }
	BOOL PtInElement(CPoint Point) const;

	CRect GetBoundRect() const;
	CPoint GetTopLeft() const						{ return GetBoundRect().TopLeft(); }

	virtual BOOL CanBeDragged(CPoint point)			{ return !m_bHidden && PtInElement(point); }

	void Hide();
	void Show();
	BOOL Hidden() const								{ return m_bHidden; }

	void Move(CSize MoveSize);
	void MoveToPt(CPoint Point);
	virtual void OnBeforeMove(CSize MoveSize)		{};
	virtual void OnMoved(CSize MoveSize)			{};

	// Drawing

	virtual void Draw(CDC* pDC, const CRgn* pClipRegion) = 0;

	// Associated Elements

	void AddAssociatedElement(CUIElement* pElement);
	void RemoveAssociatedElement(CUIElement* pElement);
	void RemoveAllAssociatedElements();

	BOOL HasAssociatedElement(CUIElement* pElement) const;
	int GetAssociatedElementCount() const			{ return m_AssociatedElements.size(); }
	void GetAssociatedElements(std::vector<CUIElement*>& elements, UIELEMENT_TYPE nType = (UIELEMENT_TYPE)-1) const;
	void GetAssociatedElementsBoundRgn(CRgn& rgn, UIELEMENT_TYPE nType = (UIELEMENT_TYPE)-1) const;
	void InvalidateAssociatedElements(UIELEMENT_TYPE nType = (UIELEMENT_TYPE)-1);

	virtual void OnAssociatedElementAdded(CUIElement* pElement)					{};
	virtual void OnAssociatedElementRemoved(CUIElement* pElement)				{};
	virtual void OnAssociatedElementBoundRegionChanged(CUIElement* pElement)	{};

protected:
	void SetBoundRgn(const CRgn& BoundRgn, BOOL bCallOnMoved = TRUE);
	void SetAltitude(ALTITUDE_TYPE nAltitude) { m_nAltitude = nAltitude; }

	CScrollView*				m_pView;

	UIELEMENT_TYPE				m_nType;
	ALTITUDE_TYPE				m_nAltitude;

	int							m_nElementData;
	BOOL						m_bHidden;

	std::vector<CUIElement*>	m_AssociatedElements;

	unsigned __int64			m_nSortKey;

private:
	CRgn	m_BoundRgn;
	CRect	m_BoundRect;
	CString	m_strToolTipText;
};
