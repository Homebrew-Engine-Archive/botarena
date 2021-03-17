#include "stdafx.h"
#include <Epoch.h>
#include <Graphics.h>

//____________________________________________________________________________
//
bool operator==(const Gdiplus::Size& lhs, const Gdiplus::Size& rhs)
{
	return lhs.Width == rhs.Width && lhs.Height == rhs.Height;
}

namespace Epoch {
namespace Graphics {

//____________________________________________________________________________
//
// CGdiplus
//

CString CGdiplus::GetBitmapID(LPCTSTR strModulePath, UINT uBitmap)
{
	CString strID;
	strID.Format(_T("%d,%s"), uBitmap, strModulePath);
	return strID;
}

CString CGdiplus::GetBitmapID(LPCTSTR strPath)
{
	return strPath;
}

CString CGdiplus::GetRotateFlipBitmapID(LPCTSTR strID, Gdiplus::RotateFlipType rotateFlip)
{
	CString strNewID(strID);
	strNewID.AppendFormat(_T("|%c%d"), s_chRotate, rotateFlip);

	NormalizeBitmapID(strNewID);

	return strNewID;
}

CString CGdiplus::GetStretchBitmapID(LPCTSTR strID, Gdiplus::Size targetSize)
{
	CString strThisOperation;
	strThisOperation.Format(_T("%c%d,%d"), s_chStretch, targetSize.Width, targetSize.Height);

	CString strParentID(strID);
	CString strLastOperation;
	ParseBitmapID(strParentID, strLastOperation);

	if (strLastOperation == strThisOperation)
		return strID;
	
	CString strNewID(strID);
	strNewID.AppendFormat(_T("|%s"), strThisOperation);
	return strNewID;
}

CString CGdiplus::GetFrameBitmapID(LPCTSTR strID, Gdiplus::Size targetSize, Gdiplus::Color frameColor)
{
	CString strNewID(strID);
	strNewID.AppendFormat(_T("|%c%d,%d,%d"), s_chFrame, targetSize.Width, targetSize.Height,
		frameColor.GetValue()); // DWORD
	return strNewID;
}

CString CGdiplus::GetCropBitmapID(LPCTSTR strID, int nCropLeft, int nCropRight, int nCropTop, int nCropBottom)
{
	CString strNewID(strID);
	strNewID.AppendFormat(_T("|%c%d,%d,%d,%d"), s_chCrop, nCropLeft, nCropRight, nCropTop, nCropBottom);
	return strNewID;
}

CString CGdiplus::GetTransparencyBitmapID(LPCTSTR strID, float fAlpha)
{
	CString strNewID(strID);
	strNewID.AppendFormat(_T("|%c%f"), s_chTransparency, fAlpha);
	return strNewID;
}

CString CGdiplus::GetFreeRotateBitmapID(LPCTSTR strID, float fAngle)
{
	CString strNewID(strID);
	strNewID.AppendFormat(_T("|%c%f"), s_chFreeRotate, fAngle);
	return strNewID;
}

void CGdiplus::ParseBitmapID(CString& strID, CString& strLastOperation)
{
	int nIndex = strID.ReverseFind(_T('|'));
	if (nIndex == -1)
	{
		strLastOperation.Empty();
		return;
	}

	strLastOperation = strID.Mid(nIndex + 1);
	strID = strID.Left(nIndex);
}

bool CGdiplus::IsBaseBitmapID(const CString& strID)
{
	return strID.Find(_T('|')) == -1;
}

void CGdiplus::NormalizeBitmapID(CString& strID)
{
	static StringArray s_Reductions;
	if (!s_Reductions.size())
	{
		CString strTemp;
		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::Rotate90FlipNone, s_chRotate, Gdiplus::Rotate270FlipNone);
		s_Reductions.push_back(strTemp);

		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::Rotate270FlipNone, s_chRotate, Gdiplus::Rotate90FlipNone);
		s_Reductions.push_back(strTemp);

		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::Rotate180FlipNone, s_chRotate, Gdiplus::Rotate180FlipNone);
		s_Reductions.push_back(strTemp);

		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::RotateNoneFlipX, s_chRotate, Gdiplus::RotateNoneFlipX);
		s_Reductions.push_back(strTemp);

		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::RotateNoneFlipY, s_chRotate, Gdiplus::RotateNoneFlipY);
		s_Reductions.push_back(strTemp);

		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::RotateNoneFlipXY, s_chRotate, Gdiplus::RotateNoneFlipXY);
		s_Reductions.push_back(strTemp);

		strTemp.Format(_T("|%c%d|%c%d"), s_chRotate, Gdiplus::RotateNoneFlipY, s_chRotate, Gdiplus::RotateNoneFlipY);
		s_Reductions.push_back(strTemp);
	}

	for (size_t i = 0; i < s_Reductions.size(); ++i)
	{
		strID.Replace(s_Reductions[i], _T(""));
	}
}

CGdiplus::CGdiplus()
	: m_GDIPToken(0)
	, m_dwBitmapHits(0)
	, m_dwBitmapMisses(0)
	, m_dwLastBitmapFlush(0)
{
}

CGdiplus::~CGdiplus()
{
	for (std::map<CString, BitmapEntry>::const_iterator i = m_Bitmaps.begin(); i != m_Bitmaps.end(); ++i)
		delete i->second.pBitmap;

	if (m_GDIPToken)
		Gdiplus::GdiplusShutdown(m_GDIPToken);
}

bool CGdiplus::Initialize()
{
	Gdiplus::GdiplusStartupInput GDIPStartupInput;
	return Gdiplus::GdiplusStartup(&m_GDIPToken, &GDIPStartupInput, NULL) == Gdiplus::Ok;
}

Gdiplus::Bitmap* CGdiplus::BitmapLookup(LPCTSTR strID)
{
	std::map<CString, BitmapEntry>::iterator i = m_Bitmaps.find(strID);
	if (i == m_Bitmaps.end())
	{
		++m_dwBitmapMisses;
		return NULL;
	}

	++m_dwBitmapHits;

	++(i->second.dwHits);
	i->second.dwTimeLastHit = GetTickCount();

	m_OldBitmaps.erase(strID);

	return i->second.pBitmap;
}

void CGdiplus::CacheBitmap(LPCTSTR strID, Gdiplus::Bitmap* pBitmap)
{
	ATLASSERT(_tcslen(strID));
	ATLASSERT(m_Bitmaps.find(strID) == m_Bitmaps.end());

	BitmapEntry bitmapEntry;
	bitmapEntry.dwHits = 1;
	bitmapEntry.dwTimeCreated = GetTickCount();
	bitmapEntry.dwTimeLastHit = bitmapEntry.dwTimeCreated;
	bitmapEntry.pBitmap = pBitmap;
	bitmapEntry.strID = strID;

	m_Bitmaps[strID] = bitmapEntry;

	FlushBitmaps();
}

void CGdiplus::FlushBitmaps()
{
	if (m_Bitmaps.size() <= s_dwMaxCachedBitmaps)
		return;

	DWORD dwTime = GetTickCount();
	if (dwTime <= m_dwLastBitmapFlush + s_dwBitmapKeepAliveTime)
		return;

	m_dwLastBitmapFlush = dwTime;

	if (m_OldBitmaps.size())
	{
		std::vector<std::pair<float, CString>> oldBitmaps;
		for (std::set<CString>::const_iterator i = m_OldBitmaps.begin(); i != m_OldBitmaps.end(); ++i)
		{
			std::map<CString, BitmapEntry>::const_iterator j = m_Bitmaps.find(*i);
			if (j == m_Bitmaps.end())
				continue;

			float fRate = (float)j->second.dwHits / float(j->second.dwTimeLastHit - j->second.dwTimeCreated);
			oldBitmaps.push_back(std::make_pair(fRate, *i));
		}

		std::sort(oldBitmaps.begin(), oldBitmaps.end());

		for (int i = (int)oldBitmaps.size() - 1; i >= 0 && m_Bitmaps.size() > s_dwMaxCachedBitmaps; --i)
		{
			std::map<CString, BitmapEntry>::iterator j = m_Bitmaps.find(oldBitmaps[i].second);
			if (j != m_Bitmaps.end())
			{
				ATLTRACE(_T("Free bitmap %s\n"), j->second.strID);
				delete j->second.pBitmap;
				m_Bitmaps.erase(j);
			}
		}
	}

	m_OldBitmaps.clear();
	for (std::map<CString, BitmapEntry>::const_iterator i = m_Bitmaps.begin(); i != m_Bitmaps.end(); ++i)
		if (i->second.dwTimeLastHit - i->second.dwTimeCreated >= s_dwBitmapKeepAliveTime)
			m_OldBitmaps.insert(i->first);
}

void CGdiplus::ClearBitmapCache()
{
	m_dwLastBitmapFlush = 0;

	for (std::map<CString, BitmapEntry>::const_iterator i = m_Bitmaps.begin(); i != m_Bitmaps.end(); ++i)
		delete i->second.pBitmap;

	m_Bitmaps.clear();
	m_OldBitmaps.clear();
}

Gdiplus::Bitmap* CGdiplus::LoadBitmap(LPCTSTR strID, Gdiplus::Size* pSize)
{
	if (pSize)
	{
		pSize->Width = 0;
		pSize->Height = 0;
	}

	if (!_tcslen(strID))
		return NULL;

	Gdiplus::Bitmap* pBitmap = BitmapLookup(strID);
	if (pBitmap)
	{
		if (pSize)
		{
			pSize->Width = pBitmap->GetWidth();
			pSize->Height = pBitmap->GetHeight();
		}

		return pBitmap;
	}

	if (!_tcslen(strID))
		return NULL;

	// Try to reuse 'parent' bitmap if possible
	CString strLastOperation;
	CString strParentID(strID);
	ParseBitmapID(strParentID, strLastOperation);
	if (!strLastOperation.IsEmpty())
	{
		pBitmap = LoadBitmap(strParentID, pSize);
		if (!pBitmap)
			return NULL;

		Gdiplus::Bitmap* pTransformed = TransformBitmap(pBitmap, strLastOperation, pSize);
		if (!pTransformed)
			return NULL;

		CacheBitmap(strID, pTransformed);

		return pTransformed;
	}

	// Base bitmap, try to load from somewhere

	if (isdigit(strID[0]))
	{
		CString strModulePath(strID);

		int nIndex = strModulePath.Find(_T(','));
		if (nIndex == -1)
			return NULL;

		UINT uBitmap = _ttoi(strModulePath.Left(nIndex));
		strModulePath = strModulePath.Mid(nIndex + 1);

		HMODULE hModule = LoadLibrary(strModulePath);
		if (!hModule)
			return NULL;

		pBitmap = Gdiplus::Bitmap::FromResource(hModule, (LPCTSTR)MAKEINTRESOURCE(uBitmap));
		ATLTRACE(_T("Loaded bitmap %s\n"), strID);

		FreeLibrary(hModule);
	}
	else
		if (strID[0] == _T('*'))
			return NULL;
		else
		{
			pBitmap = Gdiplus::Bitmap::FromFile(T2CW(strID));
			ATLTRACE(_T("Loaded bitmap %s\n"), strID);
		}

	if (!pBitmap)
		return NULL;

	if (!pBitmap->GetWidth() || !pBitmap->GetHeight())
	{
		delete pBitmap;
		return NULL;
	}

	if (pSize)
	{
		pSize->Width = pBitmap->GetWidth();
		pSize->Height = pBitmap->GetHeight();
	}

	CacheBitmap(strID, pBitmap);

	return pBitmap;
}

bool CGdiplus::UnloadBitmap(LPCTSTR strID)
{
	std::map<CString, BitmapEntry>::iterator i = m_Bitmaps.find(strID);
	if (i == m_Bitmaps.end())
		return false;

	delete i->second.pBitmap;
	m_Bitmaps.erase(i);

	return true;
}

Gdiplus::Bitmap* CGdiplus::TransformBitmap(Gdiplus::Bitmap* pBitmap, LPCTSTR strOperation, Gdiplus::Size* pSize)
{
	switch(strOperation[0])
	{
	case s_chRotate:
		{
			Gdiplus::RotateFlipType rotateFlip = (Gdiplus::RotateFlipType)_ttoi(strOperation + 1);
			return RotateBitmap(pBitmap, rotateFlip, pSize);
		}

	case s_chStretch:
		{
			Gdiplus::Size targetSize;
			_stscanf_s(strOperation + 1, _T("%d,%d"), &targetSize.Width, &targetSize.Height);
			Gdiplus::Bitmap* pStretched = StretchBitmap(pBitmap, targetSize);
			if (pStretched && pSize)
				*pSize = targetSize;

			return pStretched;
		}
	case s_chFrame:
		{
			Gdiplus::Size targetSize;
			Gdiplus::ARGB frameColor;
			_stscanf_s(strOperation + 1, _T("%d,%d,%d"), &targetSize.Width, &targetSize.Height, &frameColor);
			Gdiplus::Bitmap* pFramed = FrameBitmap(pBitmap, targetSize, frameColor);
			if (pFramed && pSize)
				*pSize = targetSize;

			return pFramed;
		}
	case s_chCrop:
		{
			int nCropLeft;
			int nCropRight;
			int nCropTop;
			int nCropBottom;
			_stscanf_s(strOperation + 1, _T("%d,%d,%d,%d"), &nCropLeft, &nCropRight, &nCropTop, &nCropBottom);
			return CropBitmap(pBitmap, nCropLeft, nCropRight, nCropTop, nCropBottom, pSize);
		}
	case s_chTransparency:
		{
			float fAlpha;
			_stscanf_s(strOperation + 1, _T("%f"), &fAlpha);
			return ChangeBitmapTransparency(pBitmap, fAlpha);
		}
	case s_chFreeRotate:
		{
			float fAngle;
			_stscanf_s(strOperation + 1, _T("%f"), &fAngle);
			return FreeRotateBitmap(pBitmap, fAngle, pSize);
		}
	}

	return NULL;
}

Gdiplus::Bitmap* CGdiplus::RotateBitmap(Gdiplus::Bitmap* pBitmap, Gdiplus::RotateFlipType rotateFlip, Gdiplus::Size* pSize)
{
	if (pSize)
	{
		pSize->Width = 0;
		pSize->Height = 0;
	}

	Gdiplus::Bitmap* pRotated = pBitmap->Clone(0, 0, pBitmap->GetWidth(), pBitmap->GetHeight(), pBitmap->GetPixelFormat());
	if (!pRotated)
		return NULL;

	Gdiplus::Status status = pRotated->RotateFlip(rotateFlip);
	if (status != Gdiplus::Ok)
		return NULL;

	if (pSize)
	{
		pSize->Width = pRotated->GetWidth();
		pSize->Height = pRotated->GetHeight();
	}

	return pRotated;
}

Gdiplus::Bitmap* CGdiplus::StretchBitmap(Gdiplus::Bitmap* pBitmap, Gdiplus::Size targetSize)
{
	if (pBitmap->GetWidth() == targetSize.Width &&
		pBitmap->GetHeight() == targetSize.Height)
	{
		return pBitmap->Clone(0, 0, targetSize.Width, targetSize.Height, pBitmap->GetPixelFormat()); 
	}

	Gdiplus::Bitmap* pStretched = new Gdiplus::Bitmap(targetSize.Width, targetSize.Height, pBitmap->GetPixelFormat()); 
	if (!pStretched)
		return NULL;
	
	{
		std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pStretched)); 
		if (!apGraphics.get())
		{
			delete pStretched;
			return NULL;
		}

		if (apGraphics->SetInterpolationMode(Gdiplus::InterpolationModeHighQuality) != Gdiplus::Ok)
		{
			delete pStretched;
			return NULL;
		}

		if (apGraphics->DrawImage(pBitmap, 0, 0, targetSize.Width, targetSize.Height) != Gdiplus::Ok)
		{
			delete pStretched;
			return NULL;
		}
	}

	ATLASSERT(pStretched->GetWidth() == targetSize.Width &&
		pStretched->GetHeight() == targetSize.Height);

	return pStretched;
}

Gdiplus::Bitmap* CGdiplus::FrameBitmap(Gdiplus::Bitmap* pBitmap, Gdiplus::Size targetSize, Gdiplus::Color frameColor)
{
	Gdiplus::Bitmap* pFramed = new Gdiplus::Bitmap(targetSize.Width, targetSize.Height, pBitmap->GetPixelFormat());
	if (!pFramed)
		return NULL;

	std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pFramed)); 
	if (!apGraphics.get())
	{
		delete pFramed;
		return NULL;
	}

	apGraphics->Clear(frameColor);

	ATLASSERT(pBitmap->GetWidth() <= (UINT)targetSize.Width &&
		pBitmap->GetHeight() <= (UINT)targetSize.Height);

	if (apGraphics->DrawImage(pBitmap,
		INT((targetSize.Width - pBitmap->GetWidth()) / 2),
		INT((targetSize.Height - pBitmap->GetHeight()) / 2)) != Gdiplus::Ok)
	{
		delete pFramed;
		return NULL;
	}

	return pFramed;
}

Gdiplus::Bitmap* CGdiplus::CropBitmap(Gdiplus::Bitmap* pBitmap, int nCropLeft, int nCropRight, int nCropTop, int nCropBottom, Gdiplus::Size* pSize)
{
	if (pSize)
	{
		pSize->Width = 0;
		pSize->Height = 0;
	}

	Gdiplus::Size targetSize(pBitmap->GetWidth(), pBitmap->GetHeight());

	targetSize.Width -= nCropLeft + nCropRight;
	targetSize.Height -= nCropTop + nCropBottom;

	if (targetSize.Width <= 0 || targetSize.Height <= 0)
		return NULL;

	Gdiplus::Bitmap* pCropped = new Gdiplus::Bitmap(targetSize.Width, targetSize.Height, pBitmap->GetPixelFormat());
	if (!pCropped)
		return NULL;

	std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pCropped)); 
	if (!apGraphics.get())
	{
		delete pCropped;
		return NULL;
	}

	if (apGraphics->DrawImage(pBitmap, -nCropLeft, -nCropTop) != Gdiplus::Ok)
	{
		delete pCropped;
		return NULL;
	}

	if (pSize)
	{
		pSize->Width = pCropped->GetWidth();
		pSize->Height = pCropped->GetHeight();
	}

	return pCropped;
}

Gdiplus::Bitmap* CGdiplus::ChangeBitmapTransparency(Gdiplus::Bitmap* pBitmap, float fAlpha)
{
	static Gdiplus::ColorMatrix colorMatrix =         { 
				1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f, 1.0f
	};

	Gdiplus::Bitmap* pTransparent = new Gdiplus::Bitmap(pBitmap->GetWidth(), pBitmap->GetHeight()); 
	if (!pTransparent)
		return NULL;
	
	{
		std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pTransparent)); 
		if (!apGraphics.get())
		{
			delete pTransparent;
			return NULL;
		}

		colorMatrix.m[3][3] = fAlpha;

		Gdiplus::ImageAttributes imageAttribute;
		imageAttribute.SetColorMatrix(&colorMatrix, Gdiplus::ColorMatrixFlagsDefault, 
                        Gdiplus::ColorAdjustTypeBitmap);

		if (apGraphics->DrawImage(pBitmap, 
			Gdiplus::Rect(0, 0, pBitmap->GetWidth(), pBitmap->GetHeight()),
			0, 0, pBitmap->GetWidth(), pBitmap->GetHeight(), Gdiplus::UnitPixel, &imageAttribute) != Gdiplus::Ok)
		{
			delete pTransparent;
			return NULL;
		}
	}

	return pTransparent;
}

Gdiplus::Bitmap* CGdiplus::FreeRotateBitmap(Gdiplus::Bitmap* pBitmap, float fAngle, Gdiplus::Size* pSize)
{
	static const float pi = 3.141592653f;
	static const float pi2 = pi*2;

	struct Helper
	{
		static void GetBoundingBoxDimensions(int oldWidth, 
								  int oldHeight, 
								  float theta, 
								  int& iBoxWidth, 
								  int& iBoxHeight)
		{
			float adjacentTop, oppositeTop;
			float adjacentBottom, oppositeBottom;

			if( (theta >= 0.0 && theta < pi2) ||
				(theta >= pi && theta < (pi + pi2) ) )
			{
				adjacentTop = abs(cos(theta)) * oldWidth;
				oppositeTop = abs(sin(theta)) * oldWidth;

				adjacentBottom = abs(cos(theta)) * oldHeight;
				oppositeBottom = abs(sin(theta)) * oldHeight;
			}
			else
			{
				adjacentTop = abs(sin(theta)) * oldHeight;
				oppositeTop = abs(cos(theta)) * oldHeight;

				adjacentBottom = abs(sin(theta)) * oldWidth;
				oppositeBottom = abs(cos(theta)) * oldWidth;
			}

			float newWidth = adjacentTop + oppositeBottom;
			float newHeight = adjacentBottom + oppositeTop;

			iBoxWidth = (int) ceil(newWidth);
			iBoxHeight = (int) ceil(newHeight);
		}
	};

	if (pSize)
	{
		pSize->Width = 0;
		pSize->Height = 0;
	}

	int w = pBitmap->GetWidth();
	int h = pBitmap->GetHeight();

	int wbox;
	int hbox;
	Helper::GetBoundingBoxDimensions(w, h, (fAngle*pi/180.0f), wbox, hbox);

	Gdiplus::Bitmap* pRotated = new Gdiplus::Bitmap(wbox, hbox);
	if (!pRotated)
		return NULL;

	std::auto_ptr<Gdiplus::Graphics> apGraphics(Gdiplus::Graphics::FromImage(pRotated)); 
	if (!apGraphics.get())
	{
		delete pRotated;
		return NULL;
	}

	if (apGraphics->SetInterpolationMode(Gdiplus::InterpolationModeHighQuality) != Gdiplus::Ok)
	{
		delete pRotated;
		return NULL;
	}

	apGraphics->TranslateTransform(float(wbox/2), float(hbox/2));
	apGraphics->RotateTransform(fAngle);
	apGraphics->TranslateTransform(-float(w/2), -float(h/2));

	Gdiplus::Rect rc(0, 0, w, h);

	apGraphics->DrawImage(pBitmap, rc, 0, 0, w, h, Gdiplus::UnitPixel);

	if (pSize)
	{
		pSize->Width = wbox;
		pSize->Height = hbox;
	}

	return pRotated;
}

CString CGdiplus::SetBitmapModified(LPCTSTR strID)
{
	std::map<CString, BitmapEntry>::iterator i = m_Bitmaps.find(strID);
	if (i == m_Bitmaps.end())
	{
		ATLASSERT(false);
		return _T("");
	}

	CString strNewID;
	strNewID.Format(_T("*%p%s"), i->second.pBitmap, strID);

	BitmapEntry newEntry = i->second;
	newEntry.strID = strNewID;

	m_Bitmaps.erase(i);
	m_OldBitmaps.erase(strID);

	m_Bitmaps[strNewID] = newEntry;

	return strNewID;
}

//____________________________________________________________________________
//
// CGdipBitmap
//

CGdipBitmap::CGdipBitmap()
	: m_bModified(false)
{
}

CGdipBitmap::CGdipBitmap(LPCTSTR strModulePath, UINT uBitmap)
	: m_strID(CGdiplus::GetBitmapID(strModulePath, uBitmap))
	, m_bModified(false)
{
}

CGdipBitmap::CGdipBitmap(LPCTSTR strPath)
	: m_strID(CGdiplus::GetBitmapID(strPath))
	, m_bModified(false)
{
}

CGdipBitmap::CGdipBitmap(const CGdipBitmap& bitmap)
	: m_strID(bitmap.m_strID)
	, m_Size(bitmap.m_Size)
	, m_bModified(false)
{
}

CGdipBitmap::~CGdipBitmap()
{
}

CGdipBitmap& CGdipBitmap::operator=(const CGdipBitmap& rhs)
{
	if (this == &rhs)
		return *this;

	m_strID = rhs.m_strID;
	m_Size = rhs.m_Size;
	return *this;
}

bool CGdipBitmap::operator==(const CGdipBitmap& rhs) const
{
	return m_strID == rhs.m_strID;
}

bool CGdipBitmap::operator!=(const CGdipBitmap& rhs) const
{
	return !operator==(rhs);
}

void CGdipBitmap::Load(LPCTSTR strModulePath, UINT uBitmap)
{
	m_strID = CGdiplus::GetBitmapID(strModulePath, uBitmap);
}

void CGdipBitmap::Load(LPCTSTR strPath)
{
	m_strID = CGdiplus::GetBitmapID(strPath);
}

void CGdipBitmap::Refresh()
{
	if (m_strID.IsEmpty())
		return;

	CGdiplus::GetInstance()->UnloadBitmap(m_strID);

	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::Reset()
{
	m_strID.Empty();
	m_Size.Width = 0;
	m_Size.Height = 0;
}

bool CGdipBitmap::IsValid() const
{
	if (m_strID.IsEmpty())
		return false;

	if (m_bModified || (!m_Size.Width && !m_Size.Height))
		CGdiplus::GetInstance()->LoadBitmap(m_strID, &m_Size);

	return m_Size.Width && m_Size.Height; 
}

CGdipBitmap::operator Gdiplus::Bitmap*() const
{
	return CGdiplus::GetInstance()->LoadBitmap(m_strID, &m_Size);
}

HBITMAP CGdipBitmap::GetHBITMAP() const
{
	Gdiplus::Bitmap* pBitmap = CGdiplus::GetInstance()->LoadBitmap(m_strID, &m_Size);
	if (!pBitmap)
		return NULL;
	
	HBITMAP hBitmap;
	pBitmap->GetHBITMAP(Gdiplus::Color(255, 0, 0, 0), &hBitmap);
	return hBitmap;
}

Gdiplus::Size CGdipBitmap::Size() const
{ 
	if (!m_Size.Width && !m_Size.Height && !m_strID.IsEmpty())
		CGdiplus::GetInstance()->LoadBitmap(m_strID, &m_Size);

	return m_Size; 
}

void CGdipBitmap::RotateFlip(Gdiplus::RotateFlipType rotateFlip)
{
	m_strID = CGdiplus::GetRotateFlipBitmapID(m_strID, rotateFlip);
	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::Stretch(Gdiplus::Size targetSize)
{
	m_strID = CGdiplus::GetStretchBitmapID(m_strID, targetSize);
	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::Frame(Gdiplus::Size targetSize, Gdiplus::Color frameColor)
{
	m_strID = CGdiplus::GetFrameBitmapID(m_strID, targetSize, frameColor);
	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::Crop(int nCropLeft, int nCropRight, int nCropTop, int nCropBottom)
{
	m_strID = CGdiplus::GetCropBitmapID(m_strID, nCropLeft, nCropRight, nCropTop, nCropBottom);
	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::ChangeTransparency(float fAlpha)
{
	m_strID = CGdiplus::GetTransparencyBitmapID(m_strID, fAlpha);
	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::FreeRotate(float fAngle)
{
	m_strID = CGdiplus::GetFreeRotateBitmapID(m_strID, fAngle);
	m_Size.Width = 0;
	m_Size.Height = 0;
}

void CGdipBitmap::SetModified()
{
	m_strID = CGdiplus::GetInstance()->SetBitmapModified(m_strID);
	m_bModified = true;
}

}	// namespace Graphics
}	// namespace Epoch