// resize.inl : inlines for resize.h
//
// Written by Torben B. Haagh (TBHaagh@hotmail.com)

/////////////////////////////////////////////////////////////////////////////
// CRealRect

inline CRealRect::CRealRect()
{
}

inline CRealRect::CRealRect(const RECT& rc)
{
	(operator =)(rc);
}

inline CRealRect::CRealRect(const REALRECT& rrc)
{
	(operator =)(rrc);
}

inline CRealRect::CRealRect(double l, double t, double r, double b)
{
	left = l;
	top = t;
	right = r;
	bottom = b;
}

inline CRealRect& CRealRect::operator = (const RECT& rc) 
{ 
	left = (double) rc.left; 
	top = (double) rc.top; 
	right = (double) rc.right; 
	bottom = (double) rc.bottom; 

	return *this;
}

inline CRealRect& CRealRect::operator = (const REALRECT& rrc) 
{ 
	left = rrc.left; 
	top = rrc.top; 
	right = rrc.right; 
	bottom = rrc.bottom; 

	return *this;
}

inline CRealRect& CRealRect::operator += (const REALRECT& rrc) 
{ 
	left += rrc.left; 
	top += rrc.top; 
	right += rrc.right; 
	bottom += rrc.bottom; 

	return *this;
}

inline CRealRect CRealRect::operator + (const REALRECT& rrc) 
{ 
	return CRealRect(left + rrc.left, top + rrc.top, right + rrc.right, bottom += rrc.bottom); 
}

inline BOOL CRealRect::IsNormalized()
{
	return left<=right && top<=bottom;
}

inline CRealRect CRealRect::operator & (const REALRECT& rrc)
{ 
	ATLASSERT(IsNormalized() && ((CRealRect&) rrc).IsNormalized());

	CRealRect rrcI(MAX(left,rrc.left), MAX(top,rrc.top), 
				   MIN(right,rrc.right), MIN(bottom,rrc.bottom)); 
	
	// only intersection if resulting rect is normalized
	return (rrcI.IsNormalized()) ? rrcI : CRealRect(0,0,0,0);
}

inline bool CRealRect::operator == (const REALRECT& rrc)
{ 
	return left==rrc.left && top==rrc.top && right==rrc.right && bottom==rrc.bottom; 
}

inline bool CRealRect::operator != (const REALRECT& rrc) 
{ 
	return !operator==(rrc); 
}

inline CRealRect::operator CRect() 
{ 
	return CRect((int) left, (int) top, (int) right, (int) bottom); 
}

inline double CRealRect::Width() 
{ 
	return right-left; 
}

inline double CRealRect::Height() 
{ 
	return bottom-top; 
}

/////////////////////////////////////////////////////////////////////////////
// CResize

inline void CResize::SetMinSize(CSize& sz) 
{ 
	m_szMin = sz; 
}

inline void CResize::SetMaxSize(CSize& sz) 
{ 
	m_szMax = sz; 
}

inline BOOL CResize::HasFlag(EFlags eFlag)
{
	return (m_nFlags & eFlag) != 0;
}

inline void CResize::SetResize(const UINT nID, double left, double top, double right, double bottom)
{
	SetResize(nID, CRealRect(left, top, right, bottom));
}

inline void CResize::SetResize(SIZING arr[])
{
	for (int i=0; i<sizeof(arr); i++)
	{
		SIZING& sz = arr[i];
		SetResize(sz.id, sz.rrc.left, sz.rrc.top, sz.rrc.right, sz.rrc.bottom);
	}
}

inline void CResize::SetResize(CWnd* pwnd, const CRealRect& rrcSizing, CRect rcWindow)
{
	m_arrItems.Add(new CItem(pwnd, rrcSizing, rcWindow, FALSE));
}

inline CResize::CItem::CItem(CWnd* pwnd, const CRealRect& rrcSizing, CRect& rcWindow, BOOL bDeleteWnd) : 
	m_pwnd(pwnd),
	m_rrcSizing(rrcSizing),
	m_rrcWindow(rcWindow),
	m_bDeleteWnd(bDeleteWnd)
{

}

inline CResize::CItem::~CItem()
{
	if (m_bDeleteWnd)
	{
		m_pwnd->Detach();
		delete m_pwnd; 
	}
}
