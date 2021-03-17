////////////////////////////////////////////////////////////////////////////////
//
// Class CImageButtonWithStyle
//
// The class CImageButtonWithStyle is a CButton dereived class that
// handles the NM_CUSTOMDRAW notification to provide XP visual styles themed
// appearance for buttons with BS_BITMAP or BS_ICON style set.
// This makes them match the appearance of normal buttons with text labels.
// The default Windows controls do not provide the themed appearance for
// these buttons.
//
// To use these buttons, simply subclass the corresponding control with an
// instance of a CImageButtonWithStyle. For buttons on a Dialog, you can
// simple declare CImageButtonWithStyle members for each button in the
// CDialog derived class, and then call DDX_Control() for each instance
// to subclass the corresponding control.
//
//

#pragma once

class CImageButtonWithStyle : public CButton
{
	DECLARE_DYNAMIC(CImageButtonWithStyle)

public:
	CImageButtonWithStyle();
	virtual ~CImageButtonWithStyle();

	void SetImage(LPCTSTR strImagePath);

protected:
	DECLARE_MESSAGE_MAP()

	afx_msg void OnNotifyCustomDraw ( NMHDR * pNotifyStruct, LRESULT* result );
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);

	void draw_bitmap (HDC hDC, const CRect& Rect, DWORD style, int state_id);
	void draw_icon (HDC hDC, const CRect& Rect, DWORD style, int state_id);
	void draw_image (HDC hDC, const CRect& Rect, DWORD style, int state_id);

	Gdiplus::Bitmap* m_pImage;
	Gdiplus::Size m_ImageSize;
	Gdiplus::ImageAttributes m_ImageAttribute;
	Gdiplus::ColorMatrix m_ColorMatrix;
};

typedef CImageButtonWithStyle CImageButton;