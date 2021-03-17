// UIAvatar.h : header file
//

#pragma once

#include "UIImage.h"

//____________________________________________________________________________
//
// CUIAvatar
//

class CUIAvatar : public CUIImage
{
public:
	CUIAvatar(CPlayer* pPlayer, const CGdipBitmap& bitmap, CPoint point = CPoint())
		: CUIImage(point, bitmap, AVATAR_ELEMENT)
		, m_pPlayer(pPlayer)
	{}

	virtual BOOL CanBeDragged(CPoint point)		{ return FALSE; }

	CPlayer* GetPlayer() const					{ return m_pPlayer; }

protected:
	CPlayer* m_pPlayer;
};
