// UICard.h : header file
//

#pragma once

#include "UIElement.h"

//____________________________________________________________________________
//
// CUICard
//

class CUICard : public CUIElement
{
public:
	CUICard(CGame* pGame, CPoint Point, CCardEntry* pEntry, 
		int nViewAreaId, CCard* pCard,
		BOOL bFaceUp = TRUE, BOOL bTapped = FALSE,
		BOOL bShadow = FALSE, BOOL bFlipped = FALSE);

	// Overrides

	virtual void Draw(CDC* pDC, const CRgn* pClipRegion);
	virtual BOOL HasTransparentRegion() const;
	virtual void OnBeforeMove(CSize MoveSize);
	virtual void OnMoved(CSize MoveSize);
	virtual CString UpdateToolTipText(CPoint Point);

	// Card Properties

	CCardEntry* GetCardEntry()	{ return m_pCardEntry; }
	CCard* GetCard()			{ return m_cpCard.GetPointer(); }

	CString GetCardName()		{ return m_strCardName; }

	BOOL RefreshInfo();			// returns TRUE if info changed
	BOOL IsNewVisible()			{ return m_pGame->GetGameTurnNumber() == m_nTurnCreated; }

	bool IsCreature()             { return m_bCreature == TRUE; }

	BOOL IsTapped()				{ return m_fRotate == 90.0f || m_fRotate == 270.0f; }
	BOOL IsFlipped()			{ return m_fRotate == 180.0f || m_fRotate == 270.0f; }
	void Tap();
	void TapFlipped();
	void Untap();
	void UntapFlipped();

	void Flip();
	void FlipTapped();
	void UnFlip();
	void UnFlipTapped();

	void Rotate(float fAngle);
	float Rotation() const		{ return m_fRotate; }

	BOOL IsFaceDown()		        	{ return m_bShowingBack; }
	BOOL IsSecondFaceDisplayed()   		{ return m_bSecondFace;  }
	BOOL IsMorphDisplayed()   			{ return m_bMorph;  }

	void FaceDown();
	void FaceUp();

	void FaceFirst();
	void FaceSecond();

	void Morph();
	void UnMorph();

	BOOL SetHighlighted(BOOL bHighlighted)	{ m_bHighlighted = bHighlighted; return UpdateBorder(); }
	void SetTransparent(BOOL bTransparent)	{ m_bTransparent = bTransparent; }
	BOOL IsTransparent() const				{ return m_bTransparent; }

	// Image

	BOOL IsLargeSize() const;
	BOOL IsSmallSize() const;
	void ToggleSize();
	void SetToLargeSize();
	void SetToSmallSize();
	void SetSize(Gdiplus::Size size);
	Gdiplus::Size GetBitmapSize() const		{ return m_BitmapSize; }
	void ClearPreviousLocation()			{ m_nPreviousTop = -1; }
	void RememberPreviousLocation()			{ m_nPreviousTop = m_EnclosingRect.top; }

	void DropShadow(BOOL bShadow);
	BOOL DropShadow() const				{ return m_bShadow; }

	CRect GetCardRect() const			{ return m_CardRect; }
	BOOL PointInCardName(CPoint point) const;

protected:
	enum CARD_METRICS_RATIOS
	{ 
		CORNER_RATIO = 10
	};
	enum CARD_METRICS_TEXT_HEIGHTS
	{
		LARGE_POW_TGH_TEXT_HEIGHT = 16,
		SMALL_POW_TGH_TEXT_HEIGHT = 12,
	};
	enum CARD_METRICS
	{
		SHADOW_OFFSET_X_RATIO = 10,
		SHADOW_OFFSET_Y_RATIO = 7,
	};

	static CFont s_PowTghSmallFont;
	static CFont s_PowTghLargeFont;

	static void InitializeFonts();

	void InitializeBoundRegion();
	void DrawBorder(CDC* pDC, int nWidth, COLORREF Color);
	void SetBorder(int nWidth, COLORREF Color);
	void RemoveBorder();
	BOOL HasBorder() { return m_nBorderWidth != 0; }
	BOOL UpdateBorder();
	BOOL DrawShadow() const;

	CRect GetVisibleRect();

	// Location Properties

	CPoint				m_Center;
	CRect				m_EnclosingRect;
	CGdipBitmap			m_Bitmap;
	Gdiplus::Size		m_BitmapSize;
	CRgn				m_CardRegion;
	CRect				m_CardRect;

	float				m_fRotate;
	int					m_nPreviousTop;

	// Border

	int					m_nBorderWidth;
	COLORREF			m_BorderColor;

	// Card Properties

	CGame*				m_pGame;
	CCardEntry*			m_pCardEntry;
	CCardEntry*			m_pOriginalCardEntry;
	counted_ptr<CCard>	m_cpCard;

	BOOL				m_bShowingBack;
	BOOL                m_bSecondFace;
	BOOL                m_bMorph;

	BOOL                m_bCreature;

	CString				m_strPowTghText;

	BOOL				m_bAttacking;
	BOOL				m_bBlocking;
	BOOL				m_bHighlighted;
	BOOL				m_bHasMoves;
	BOOL				m_bCanAttackInGeneral;
	BOOL				m_bInplay;
	BOOL				m_bTransparent;

	CImageList			m_ImageList;
	int					m_nAttackingImage;
	int					m_nBlockingImage;

	int					m_nTurnCreated;
	CString				m_strCardName;
	CString				m_strAllInfo;
	CString				m_strExtraInfo;

	// Shadow

	BOOL				m_bShadow;
	CRgn				m_ShadowRegion;
	CGdipBitmap			m_ShadowBitmap;
	CRect				m_ShadowRect;
};
