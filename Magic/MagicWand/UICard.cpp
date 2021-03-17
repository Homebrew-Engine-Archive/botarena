// UICard.cpp: implementation of the CUICard class.
//

#include "stdafx.h"
#include "UIElement.h"
#include "UICard.h"
#include "UILink.h"
#include "Resource.h"
#include "MagicWandView.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CFont CUICard::s_PowTghSmallFont;
CFont CUICard::s_PowTghLargeFont;

void CUICard::InitializeFonts()
{
	if (!s_PowTghSmallFont.GetSafeHandle())
		s_PowTghSmallFont.CreateFont(SMALL_POW_TGH_TEXT_HEIGHT, 0, 0, 0, FW_NORMAL, 0, 0, 0, 
			DEFAULT_CHARSET, OUT_CHARACTER_PRECIS, CLIP_CHARACTER_PRECIS,
			DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, _T("Arial"));

	if (!s_PowTghLargeFont.GetSafeHandle())
		s_PowTghLargeFont.CreateFont(LARGE_POW_TGH_TEXT_HEIGHT, 0, 0, 0, FW_NORMAL, 0, 0, 0, 
			DEFAULT_CHARSET, OUT_CHARACTER_PRECIS, CLIP_CHARACTER_PRECIS,
			DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, _T("Arial"));
}

CUICard::CUICard(CGame* pGame, CPoint point, CCardEntry* pEntry, int nViewAreaId, CCard* pCard, BOOL bFaceUp, BOOL bTapped, BOOL bShadow, BOOL bFlipped)
	: CUIElement(CARD_ELEMENT, NORMAL_LEVEL, nViewAreaId)
	, m_pGame(pGame)
	, m_bCanAttackInGeneral(FALSE)
	, m_bInplay(FALSE)
	, m_bShadow(bShadow)
	, m_bTransparent(FALSE)
	, m_bCreature(FALSE)
	, m_bSecondFace(FALSE)
	, m_bMorph(FALSE)
{
	ATLASSERT(pEntry);

#ifdef _DEBUG
	CString strCardName(pEntry->GetCardName());
	int nLength = 0;
	for (int i = strCardName.GetLength() - 1; i >= 0; --i)
		if (!::isdigit(strCardName[i]))
		{
			nLength = i + 1;
			break;
		}
	strCardName = strCardName.Left(nLength);
	ATLASSERT(pCard->GetPrintedCardName() == strCardName);
#endif

	m_pCardEntry = pEntry;
	m_pOriginalCardEntry = pEntry;
	m_cpCard = pCard;
	m_bShowingBack = !bFaceUp;

	if (!bFlipped)
		if (bTapped)
			m_fRotate = 90.0f;
		else
			m_fRotate = 0.0f;		
	else
		if (bTapped)
			m_fRotate = 270.0f;
		else
			m_fRotate = 180.0f;

	m_BitmapSize = CCardStore::GetInstance()->GetSmallCardSize();
	if (!bTapped)
		m_Center = CPoint(point.x + m_BitmapSize.Width / 2, point.y + m_BitmapSize.Height);
	else
		m_Center = CPoint(point.x + m_BitmapSize.Height / 2, point.y + m_BitmapSize.Width);

	//if (m_bMorph)
		//m_pCardEntry = CCardStore::GetInstance()->GetCard(_T("Morph"),TRUE);

	InitializeBoundRegion();

	m_nBorderWidth = 0;

	m_nPreviousTop = -1;

	m_bAttacking = FALSE;
	m_bBlocking = FALSE;
	m_bHighlighted = FALSE;
	m_bHasMoves = FALSE;

	m_ImageList.Create(48, 48, ILC_COLORDDB | ILC_MASK, 2, 1);
	m_nAttackingImage = m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_SWORD));
	m_nBlockingImage = m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_SHIELD2));

	m_nTurnCreated = m_pGame->GetGameTurnNumber();

	InitializeFonts();

	RefreshInfo();
}

void CUICard::InitializeBoundRegion()
{
	if (!m_bShowingBack)
	{
		if (m_fRotate == 0.0f || m_fRotate == 90.0f)
			m_Bitmap = m_pCardEntry->GetBitmap(m_BitmapSize, IsTapped());
		else
		{
			m_Bitmap = m_pCardEntry->GetBitmap(m_BitmapSize, FALSE);
			m_Bitmap.FreeRotate(m_fRotate);
		}
	}
	else
		m_Bitmap = CCardStore::GetInstance()->GetBackBitmap(m_BitmapSize);

	m_EnclosingRect = CRect(CPoint(m_Center.x - m_Bitmap.Size().Width / 2,
			m_Center.y - m_Bitmap.Size().Height / 2), CSize(m_Bitmap.Size().Width, m_Bitmap.Size().Height));

	m_CardRect = m_EnclosingRect;

	m_CardRegion.DeleteObject();
	m_CardRegion.CreateRoundRectRgn(
		m_EnclosingRect.left, m_EnclosingRect.top,
		m_EnclosingRect.right, m_EnclosingRect.bottom,
		m_EnclosingRect.Width() / CORNER_RATIO, m_EnclosingRect.Width() / CORNER_RATIO);

	if (m_bShadow)
	{
		m_ShadowBitmap = CCardStore::GetInstance()->GetShadowBitmap(m_BitmapSize);

		m_ShadowRect = CRect(m_EnclosingRect.TopLeft(), CSize(m_ShadowBitmap.Size().Width, m_ShadowBitmap.Size().Height));
		m_ShadowRect.OffsetRect(
			int(float(SHADOW_OFFSET_X_RATIO) / 100.0 * (float)m_BitmapSize.Width),
			int(float(SHADOW_OFFSET_Y_RATIO) / 100.0 * (float)m_BitmapSize.Height));

		m_ShadowRegion.DeleteObject();
		m_ShadowRegion.CreateRoundRectRgn(
			m_ShadowRect.left, m_ShadowRect.top,
			m_ShadowRect.right, m_ShadowRect.bottom,
			m_ShadowRect.Width() / CORNER_RATIO, m_ShadowRect.Width() / CORNER_RATIO);

		m_ShadowRegion.CombineRgn(&m_ShadowRegion, &m_CardRegion, RGN_DIFF);

		m_EnclosingRect.UnionRect(m_EnclosingRect, m_ShadowRect);

		CRgn boundRgn;
		boundRgn.CreateRectRgn(0, 0, 0, 0);
		boundRgn.CombineRgn(&m_CardRegion, &m_ShadowRegion, RGN_OR);

		SetBoundRgn(boundRgn, FALSE);
	}
	else
		SetBoundRgn(m_CardRegion, FALSE);
}

void CUICard::Draw(CDC* pDC, const CRgn* pClipRegion)
{
	// Draw card

	CPoint origin(pDC->GetWindowOrg()); // weird GDI thing: it looks like SetWindowOrig() affects all drawing code but not affecting clipping setup. So here we need to shift our clipping region to match the changed window origin

	if (origin.x || origin.y)
	{
		CRgn clipRgn;
		clipRgn.CreateRectRgn(0, 0, 0, 0);
		clipRgn.CopyRgn(&m_CardRegion);
		clipRgn.OffsetRgn(-origin.x, -origin.y);

		pDC->SelectClipRgn(&clipRgn, RGN_AND);
	}
	else
		pDC->SelectClipRgn(&m_CardRegion, RGN_AND);

	/*
	CBrush brush(RGB(0, 0, 255));
	pDC->FillRgn(&m_CardRegion, &brush);
	*/

	{
		Gdiplus::Graphics graphics(pDC->GetSafeHdc());
		if (m_bTransparent)
		{
			CGdipBitmap bitmap(m_Bitmap);
			bitmap.ChangeTransparency(0.5f);
			graphics.DrawImage(bitmap, Gdiplus::Point(m_EnclosingRect.left, m_EnclosingRect.top));
		}
		else
			graphics.DrawImage(m_Bitmap, Gdiplus::Point(m_EnclosingRect.left, m_EnclosingRect.top));
	}

	if (m_nBorderWidth && (m_fRotate == 0.0f || m_fRotate == 90.0f || m_fRotate == 180.0f || m_fRotate == 270.0f))
		DrawBorder(pDC, m_nBorderWidth, m_BorderColor);

	if (!m_bShowingBack && m_bInplay)
	{
		CString strBottomInfo(m_strExtraInfo);
		if (!m_strPowTghText.IsEmpty())
		{
			if (!strBottomInfo.IsEmpty())
				strBottomInfo += _T(" - ");
			strBottomInfo += m_strPowTghText;
		}

		if (!strBottomInfo.IsEmpty())
		{
			CFont* pOldFont = NULL;

			if (m_BitmapSize.Height < CCardStore::LargeCardHeight / 2)
				pOldFont = pDC->SelectObject(&s_PowTghSmallFont);
			else
				pOldFont = pDC->SelectObject(&s_PowTghLargeFont);

			pDC->SetBkMode(TRANSPARENT);

			Gdiplus::Rect pTRect = m_pCardEntry->GetItemRect(CCardEntry::PowerTough, m_BitmapSize, IsTapped());
			CSize pTSize = pDC->GetTextExtent(strBottomInfo);
			CRect rect;
		
			if (IsTapped())
			{	
				//rect = CRect(pTRect.left, pTRect.bottom - pTSize.cy, pTRect.left + pTSize.cx, pTRect.bottom);
				//rect = CRect((int)pTRect.X, (int)(pTRect.Y + pTRect.Height) - pTSize.cy, (int)pTRect.X + pTSize.cx, (int)(pTRect.Y + pTRect.Height));

				rect = CRect(pTRect.GetLeft(), pTRect.GetTop(), pTRect.GetRight(), pTRect.GetBottom());
				if (rect.Width() < pTSize.cx)
					rect.right += (pTSize.cx - rect.Width());

				if (rect.Height() < pTSize.cy)
					rect.top -= (pTSize.cy - rect.Height());
			}
			else
			{
				//rect = CRect(pTRect.right - pTSize.cx, pTRect.bottom - pTSize.cy, pTRect.right, pTRect.bottom);
				//rect = CRect((int)(pTRect.X + pTRect.Width)- pTSize.cx, (int)(pTRect.Y + pTRect.Height) - pTSize.cy, (int)(pTRect.X + pTRect.Width), (int)(pTRect.Y + pTRect.Height));

				rect = CRect((int)pTRect.GetLeft(), (int)pTRect.GetTop(), (int)pTRect.GetRight(), (int)pTRect.GetBottom());
				if (rect.Width() < pTSize.cx)
					rect.left -= (pTSize.cx - rect.Width());

				if (rect.Height() < pTSize.cy)
					rect.top -= (pTSize.cy - rect.Height());
			}

			rect += m_EnclosingRect.TopLeft();
			rect.InflateRect(1, 1);

			if (m_bCanAttackInGeneral)
			{
				pDC->FillSolidRect(rect, RGB(255, 255, 255));
				pDC->SetTextColor(RGB(0, 0, 0));
			}
			else
			{
				pDC->FillSolidRect(rect, RGB(0, 0, 0));
				pDC->SetTextColor(RGB(255, 255, 255));
			}

			CPoint point(rect.left + (rect.Width() - pTSize.cx) / 2, rect.top + (rect.Height() - pTSize.cy) / 2);

			pDC->TextOut(point.x, point.y, strBottomInfo);

			if (!m_strPowTghText.IsEmpty())
			{
				int nCombatImage = -1;
				if (m_bAttacking)
					nCombatImage = m_nAttackingImage;
				else
					if (m_bBlocking)
						nCombatImage = m_nBlockingImage;

				if (nCombatImage	!= -1)
				{
					if (!IsTapped())
						m_ImageList.Draw(pDC, nCombatImage, CPoint(point.x - 48, rect.bottom - 48), ILD_TRANSPARENT);
					else
						m_ImageList.Draw(pDC, nCombatImage, CPoint(point.x + pTSize.cx, rect.bottom - 48), ILD_TRANSPARENT);
				}
			}

			if (pOldFont)
				pDC->SelectObject(pOldFont);
		}
	}

	// Draw shadow

	if (DrawShadow())
	{
		if (origin.x || origin.y)
		{
			CRgn clipRgn;
			clipRgn.CreateRectRgn(0, 0, 0, 0);
			clipRgn.CombineRgn(&m_ShadowRegion, pClipRegion, RGN_AND);
			clipRgn.OffsetRgn(-origin.x, -origin.y);

			pDC->SelectClipRgn(&clipRgn);
		}
		else
		{
			CRgn clipRgn;
			clipRgn.CreateRectRgn(0, 0, 0, 0);
			clipRgn.CombineRgn(&m_ShadowRegion, pClipRegion, RGN_AND);
			pDC->SelectClipRgn(&clipRgn);
		}

		/*
		CBrush brush(RGB(255, 0, 0));
		pDC->FillRgn(&m_ShadowRegion, &brush);
		*/
		
		Gdiplus::Graphics graphics(pDC->GetSafeHdc());
		graphics.DrawImage(m_ShadowBitmap, Gdiplus::Point(m_ShadowRect.left, m_ShadowRect.top));
	}
}

BOOL CUICard::DrawShadow() const
{
	return m_bShadow && m_ShadowBitmap.IsValid() && !m_bTransparent;
}

BOOL CUICard::HasTransparentRegion() const
{ 
	return m_bTransparent || DrawShadow();
}

void CUICard::OnBeforeMove(CSize MoveSize)
{
	InvalidateAssociatedElements(LINK_ELEMENT);
}

void CUICard::OnMoved(CSize MoveSize)
{
	m_EnclosingRect += MoveSize;
	m_CardRect += MoveSize;
	m_Center += MoveSize;

	m_CardRegion.OffsetRgn(MoveSize.cx, MoveSize.cy);

	if (m_bShadow && m_ShadowBitmap.IsValid())
	{
		if (m_ShadowRegion.GetSafeHandle())
			m_ShadowRegion.OffsetRgn(MoveSize.cx, MoveSize.cy);

		m_ShadowRect += MoveSize;
	}

	std::vector<CUIElement*> links;
	GetAssociatedElements(links, LINK_ELEMENT);

	for (size_t i = 0; i < links.size(); ++i)
		((CUILink*)links[i])->Refresh();

	InvalidateAssociatedElements(LINK_ELEMENT);

	/*
	CRect boundRect;
	if (GetBoundRgn()->GetSafeHandle())
		GetBoundRgn()->GetRgnBox(&boundRect);

	CRect cardRect;
	if (m_CardRegion.GetSafeHandle())
		m_CardRegion.GetRgnBox(&cardRect);

	CRect shadowRect;
	if (m_ShadowRegion.GetSafeHandle())
		m_ShadowRegion.GetRgnBox(&shadowRect);

	ATLTRACE(_T("%p: EnclosingRect(%d,%d,%d,%d); BoundRgn(%d,%d,%d,%d); CardRgn(%d,%d,%d,%d); ShadowRgn(%d,%d,%d,%d); ShadowRect(%d,%d,%d,%d)\n"),
		this,
		m_EnclosingRect.left, m_EnclosingRect.top, m_EnclosingRect.right, m_EnclosingRect.bottom,
		boundRect.left, boundRect.top, boundRect.right, boundRect.bottom,
		cardRect.left, cardRect.top, cardRect.right, cardRect.bottom,
		shadowRect.left, shadowRect.top, shadowRect.right, shadowRect.bottom,
		m_ShadowRect.left, m_ShadowRect.top, m_ShadowRect.right, m_ShadowRect.bottom
		);
	*/
}

CString CUICard::UpdateToolTipText(CPoint point)
{
	if (m_bShowingBack)
		return _T("");

	return m_strAllInfo;
}

void CUICard::Tap()
{
	Rotate(90.0f);
}

void CUICard::TapFlipped()
{
	Rotate(270.0f);
}

void CUICard::Untap()
{
	Rotate(0.0f);
}

void CUICard::UntapFlipped()
{
	Rotate(180.0f);
}

void CUICard::Flip()
{
	Rotate(180.0f);
}

void CUICard::FlipTapped()
{
	Rotate(270.0f);
}

void CUICard::UnFlip()
{
	Rotate(0.0f);
}

void CUICard::UnFlipTapped()
{
	Rotate(90.0f);
}

void CUICard::Rotate(float fAngle)
{
	if (m_fRotate == fAngle)
		return;

	m_fRotate = fAngle;
	InitializeBoundRegion();
}

void CUICard::FaceDown()
{
	if (m_bShowingBack)
		return;

	m_bShowingBack = TRUE;
	InitializeBoundRegion();
}

void CUICard::FaceUp()
{
	if (!m_bShowingBack)
		return;

	m_bShowingBack = FALSE;
	InitializeBoundRegion();
}

void CUICard::FaceSecond()
{
	if (m_bSecondFace)
		return;

	m_bSecondFace = TRUE;
	m_pCardEntry = CCardStore::GetInstance()->GetCard(m_cpCard->GetSecondPrintedCardName(),TRUE);
	InitializeBoundRegion();
}

void CUICard::FaceFirst()
{
	if (!m_bSecondFace)
		return;

	m_bSecondFace = FALSE;
	m_pCardEntry = CCardStore::GetInstance()->GetCard(m_cpCard->GetOriginalPrintedCardName(),TRUE);
	InitializeBoundRegion();
}

void CUICard::Morph()
{
	if (m_bMorph)
		return;

	m_bMorph = TRUE;
	m_pCardEntry = CCardStore::GetInstance()->GetCard(_T("Morph"),TRUE);
	InitializeBoundRegion();
}

void CUICard::UnMorph()
{
	if (!m_bMorph)
		return;

	m_bMorph = FALSE;
	m_pCardEntry = m_pOriginalCardEntry;
	InitializeBoundRegion();
}



BOOL CUICard::IsLargeSize() const
{
	return m_BitmapSize == Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight);
}

BOOL CUICard::IsSmallSize() const
{
	return m_BitmapSize == CCardStore::GetInstance()->GetSmallCardSize();
}

void CUICard::ToggleSize()
{
	if (IsLargeSize())
		SetToSmallSize();
	else
		SetToLargeSize();
}

void CUICard::SetToLargeSize()
{
	SetSize(Gdiplus::Size(CCardStore::LargeCardWidth, CCardStore::LargeCardHeight));
}

void CUICard::SetToSmallSize()
{
	SetSize(CCardStore::GetInstance()->GetSmallCardSize());
}

void CUICard::SetSize(Gdiplus::Size size)
{
	if (m_BitmapSize == size)
		return;

	bool bZoom = (size.Height > m_BitmapSize.Height);

	m_BitmapSize = size;

	InitializeBoundRegion();

	int nShadowOffset = m_bShadow ? int(float(SHADOW_OFFSET_Y_RATIO) / 100.0 * (float)size.Height) : 0;

	if (bZoom)
	{
		CRect visibleRect(GetVisibleRect());

		if (m_EnclosingRect.bottom - nShadowOffset > visibleRect.bottom)
			Move(CSize(0, visibleRect.bottom - m_EnclosingRect.bottom + nShadowOffset));
	}
	else
	{
		if (m_nPreviousTop != -1)
		{
			if (m_EnclosingRect.top < m_nPreviousTop)
			{
				CRect visibleRect(GetVisibleRect());

				int nDelta = MIN(m_nPreviousTop - m_EnclosingRect.top, visibleRect.bottom - m_EnclosingRect.bottom + nShadowOffset);
				Move(CSize(0, nDelta));

				if (IsSmallSize())
					m_nPreviousTop = -1;
			}
			else
			if (IsSmallSize())
			{
				Move(CSize(0, m_nPreviousTop - m_EnclosingRect.top));
				m_nPreviousTop = -1;
			}
		}
	}
}

void CUICard::DropShadow(BOOL bShadow)
{
	m_bShadow = bShadow;
	InitializeBoundRegion();
}

BOOL CUICard::PointInCardName(CPoint point) const
{
	Gdiplus::Rect rect = m_pCardEntry->GetItemRect(CCardEntry::CardName, m_BitmapSize, m_fRotate == 90.0f);
	rect.Offset(m_CardRect.TopLeft().x, m_CardRect.TopLeft().y);
	return rect.Contains(point.x, point.y);
}

void CUICard::DrawBorder(CDC* pDC, int nWidth, COLORREF Color)
{
	CPen Pen(PS_SOLID | PS_INSIDEFRAME, nWidth, Color);
	CBrush* pOldBrush = (CBrush*)pDC->SelectStockObject(NULL_BRUSH);
	CPen* pOldPen = pDC->SelectObject(&Pen);

	pDC->RoundRect(
		m_CardRect.left - 1, m_CardRect.top - 1,
		m_CardRect.right, m_CardRect.bottom,
		m_CardRect.Width() / ( CORNER_RATIO + 3 ), m_CardRect.Width() / ( CORNER_RATIO + 3 ));

	pDC->SelectObject(pOldPen);
	pDC->SelectObject(pOldBrush);
}

void CUICard::SetBorder(int nWidth, COLORREF Color)
{
	m_nBorderWidth = nWidth;
	m_BorderColor = Color;
}

void CUICard::RemoveBorder()
{
	m_nBorderWidth = 0;
}

BOOL CUICard::UpdateBorder()
{
	COLORREF OldColor = m_BorderColor;
	int nOldBorderWidth = m_nBorderWidth;
	const int nBorderWidth = 4;

	if (m_bHighlighted)
		SetBorder(nBorderWidth, RGB(128, 255, 255));
	else
		if (m_bHasMoves)
			SetBorder(nBorderWidth, RGB(128, 255, 128));
		else
			if (m_bAttacking)
				SetBorder(nBorderWidth, RGB(255, 128, 128));
			else
				if (m_bBlocking)
					SetBorder(nBorderWidth, RGB(0, 128, 255));
				else
					RemoveBorder();

	return OldColor != m_BorderColor || nOldBorderWidth != m_nBorderWidth;
}

BOOL CUICard::RefreshInfo()
{
	__int64 nPreviousSortKey = GetSortKey();

	//   6348 4732 3116 15 0
	// 0xffff 0000 0000 0000 - Ordered cards
	// 0x0000 f000 0000 0000 - Newly added creature cards = 1, player 1's cards = 2, player 2's cards = 4
	// 0x0000 0f00 0000 0000 - Land = 1, Non-creature artifacts = 2, global enchantments = 4, Creatures = 8
	// 0x0000 00ff 0000 0000 - Card color
	// 0x0000 0000 ffff 0000 - Card Instance ID
	// 0x0000 0000 0000 ffff - Element pointer hash

	DWORD dwSortKey = 0;
	USHORT uSortKeyOrdered = 0;

	const CCard* pCard = m_cpCard.GetPointer();

	int nViewArea = GetElementData();
	if (nViewArea <= CMagicWandView::VIEW_LAND1)
		dwSortKey |= 0x20000000;
	else
		dwSortKey |= 0x40000000;

	if (pCard && (nViewArea == CMagicWandView::VIEW_GRAVEYARD1 ||
		nViewArea == CMagicWandView::VIEW_GRAVEYARD2))
		uSortKeyOrdered = 0X8000 | (USHORT)(pCard->GetZone()->FindCardIndex(pCard));

	CString strNewPowTghText;
	CString strExtraInfo;
	BOOL bCanAttackInGeneral = FALSE;
	BOOL bInplay = FALSE;
	CardType cardType;

	if (!pCard)
		cardType = CardType(m_pCardEntry->GetCardType());
	else
		cardType = CardType(pCard->GetCardType());
	if ((cardType & CardType::_Land).Any() && !(cardType & CardType::Creature).Any())
	{
		dwSortKey |= 0x01000000;

		//if (pCard->GetOrientation()->IsUntapped())
		//	dwSortKey |= 0x80000000;
	}
	else
	{
		if ((cardType & CardType::Creature).Any())
		{
			dwSortKey |= 0x08000000;

			m_bCreature = TRUE;

			if (!pCard)
				strNewPowTghText = m_pCardEntry->GetPowerTough();
			else
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
				strNewPowTghText = pCreatureCard->GetPowerToughnessText(TRUE);

				bCanAttackInGeneral = pCreatureCard->CanAttackInGeneral();

				if (!bCanAttackInGeneral && IsNewVisible())
					dwSortKey |= 0x10000000;
			}
		}
		else

		{
			m_bCreature = FALSE;

			if ((cardType & CardType::Artifact).Any())
				dwSortKey |= 0x02000000;
			else
				dwSortKey |= 0x04000000;
		}
	}

	dwSortKey |= (((cardType & CardType::_ColorMask).Get() << 16) & 0x00ff0000);

	if (pCard)
	{
		bInplay = pCard->GetZoneId() == ZoneId::Battlefield;
		strExtraInfo = pCard->GetCounterContainer()->ToString();

		dwSortKey |= pCard->GetInstanceID() & 0x0000ffff;
	}

	SetSortKeyCustomPart(dwSortKey);
	SetSortKeyOrderedPart(uSortKeyOrdered);

	// Border

	BOOL bAttacking = FALSE;
	BOOL bBlocking = FALSE;
	BOOL bHasMoves = FALSE;

	if ((cardType & CardType::Creature).Any())
	{
		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
		if (pCreatureCard->IsAttacking())
			bAttacking = TRUE;
		else
			if (pCreatureCard->IsBlocking())
				bBlocking = TRUE;
	}

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
	CSelectionDialogBar* pSelectionBar = pMainWnd->GetSelectionDialogBar();

	if (pSelectionBar->HasMove(pCard, pSelectionBar->ShowTrick()))
		bHasMoves = TRUE;

	m_bAttacking = bAttacking;
	m_bBlocking = bBlocking;
	m_bHasMoves = bHasMoves;

	// Text info

	/*
	CCardEntry::ItemType itemType = m_pCardEntry->GetCardItem(m_bShowingLarge, m_bTapped, 
		Gdiplus::PointF((Gdiplus::REAL)point.x, (Gdiplus::REAL)point.y));

	switch(itemType)
	{
	case CCardEntry::CastingCost: return m_pCardEntry->GetCastCost();
	case CCardEntry::CardType_: return m_pCardEntry->GetCardType();
	case CCardEntry::Expansion: return m_pCardEntry->GetExpansionName();
	case CCardEntry::PowerTough: return m_strPowTghText;
	case CCardEntry::Description: 
		if (_tcslen(m_pCardEntry->GetCardText()))
			return m_pCardEntry->GetCardText();
	}

	if (!m_cpCard.GetPointer())
		return m_pCardEntry->GetCardName();

	return m_cpCard->GetCardName();
	*/

	BOOL bMTGSymbols = CCardStore::GetInstance()->GetShowMTGSymbols();

	CString strCardName = pCard ? pCard->GetCardName() : m_pCardEntry->GetCardName();
	CString strAllInfo = m_strCardName;

	CString str;
	
	if (!(cardType & CardType::Token).Any())
	{
		str = m_pCardEntry->GetCastCost(bMTGSymbols);
		if (!str.IsEmpty())
			strAllInfo += _T("\r\n") + str;
	}

	str = m_pCardEntry->GetCardTypeText();
	if (!str.IsEmpty())
		strAllInfo += _T("\r\n") + str;

	m_strAllInfo += _T("\r\n") + m_pCardEntry->GetExpansionName();
	if (!(cardType & CardType::Token).Any())
		strAllInfo += _T(" ") + m_pCardEntry->GetRarityText(true);

	str = m_pCardEntry->GetCardText(bMTGSymbols);
	if (!str.IsEmpty())
		strAllInfo += _T("\r\n") + str;

	if (!strNewPowTghText.IsEmpty())
		strAllInfo += _T("\r\n") + strNewPowTghText;

	if (!strExtraInfo.IsEmpty())
		strAllInfo += _T("\r\n") + strExtraInfo;

	BOOL bChanged = UpdateBorder() || 
		GetSortKey() != nPreviousSortKey ||
		m_strPowTghText != strNewPowTghText ||
		m_bInplay != bInplay ||
		m_bCanAttackInGeneral != bCanAttackInGeneral ||
		m_strExtraInfo != strExtraInfo ||
		m_strAllInfo != strAllInfo ||
		m_strCardName != strCardName;

	m_strPowTghText = strNewPowTghText;
	m_bInplay = bInplay;
	m_bCanAttackInGeneral = bCanAttackInGeneral;
	m_strExtraInfo = strExtraInfo;
	m_strCardName = strCardName;
	m_strAllInfo = strAllInfo;

	ATLTRACE(_T("Card %s Sort key = %0I64x\n"), m_strCardName, GetSortKey());

	return bChanged;
}

CRect CUICard::GetVisibleRect()
{
	CRect visibleRect;
	m_pView->GetClientRect(visibleRect);
	CPoint scrollPos(m_pView->GetScrollPosition());
	visibleRect.OffsetRect(scrollPos);

	return visibleRect;
}