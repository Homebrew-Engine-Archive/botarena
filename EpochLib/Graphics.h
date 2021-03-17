#pragma once

//_____________________________________________________________________________
//
bool EPOCH_EXPORT operator==(const Gdiplus::Size& lhs, const Gdiplus::Size& rhs);

//_____________________________________________________________________________
//
namespace Epoch {
namespace Graphics {

//_____________________________________________________________________________
//
// CGdiPlus
//

class EPOCH_EXPORT CGdipBitmap;

class EPOCH_EXPORT CGdiplus
{
	DECLARE_SINGLETON(CGdiplus);

	friend class CGdipBitmap;

public:
	bool Initialize();

	void ClearBitmapCache();

protected:
	struct BitmapEntry
	{
		CString strID;
		Gdiplus::Bitmap* pBitmap;
		DWORD dwTimeCreated;
		DWORD dwTimeLastHit;
		DWORD dwHits;
	};

	// ID

	static CString GetBitmapID(LPCTSTR strModulePath, UINT uBitmap);	
	static CString GetBitmapID(LPCTSTR strPath);	

	static CString GetRotateFlipBitmapID(LPCTSTR strID, Gdiplus::RotateFlipType rotateFlip);
	static CString GetStretchBitmapID(LPCTSTR strID, Gdiplus::Size targetSize);
	static CString GetFrameBitmapID(LPCTSTR strID, Gdiplus::Size targetSize, Gdiplus::Color frameColor);
	static CString GetCropBitmapID(LPCTSTR strID, int nCropLeft, int nCropRight, int nCropTop, int nCropBottom);
	static CString GetTransparencyBitmapID(LPCTSTR strID, float fAlpha);
	static CString GetFreeRotateBitmapID(LPCTSTR strID, float fAngle);

	static void ParseBitmapID(CString& strID, CString& strLastOperation);
	static bool IsBaseBitmapID(const CString& strID);
	static void NormalizeBitmapID(CString& strID);

	// Constants

	static const DWORD s_dwMaxCachedBitmaps = 256;
	static const DWORD s_dwBitmapKeepAliveTime = 10 * 1000;

	static const TCHAR s_chRotate = _T('R');
	static const TCHAR s_chStretch = _T('S');
	static const TCHAR s_chFrame = _T('F');
	static const TCHAR s_chCrop = _T('C');
	static const TCHAR s_chTransparency = _T('T');
	static const TCHAR s_chFreeRotate = _T('O');

	// Bitmaps

	Gdiplus::Bitmap* LoadBitmap(LPCTSTR strID, Gdiplus::Size* pSize = NULL);
	bool UnloadBitmap(LPCTSTR strID);

	Gdiplus::Bitmap* BitmapLookup(LPCTSTR strID);
	void CacheBitmap(LPCTSTR strID, Gdiplus::Bitmap* pBitmap);
	void FlushBitmaps();

	Gdiplus::Bitmap* TransformBitmap(Gdiplus::Bitmap* pBitmap, LPCTSTR strOperation, Gdiplus::Size* pSize = NULL);
	Gdiplus::Bitmap* RotateBitmap(Gdiplus::Bitmap* pBitmap, Gdiplus::RotateFlipType rotateFlip, Gdiplus::Size* pSize = NULL);
	Gdiplus::Bitmap* StretchBitmap(Gdiplus::Bitmap* pBitmap, Gdiplus::Size targetSize);
	Gdiplus::Bitmap* FrameBitmap(Gdiplus::Bitmap* pBitmap, Gdiplus::Size insideSize, Gdiplus::Color frameColor);
	Gdiplus::Bitmap* CropBitmap(Gdiplus::Bitmap* pBitmap, int nCropLeft, int nCropRight, int nCropTop, int nCropBottom, Gdiplus::Size* pSize = NULL);
	Gdiplus::Bitmap* ChangeBitmapTransparency(Gdiplus::Bitmap* pBitmap, float fAlpha);
	Gdiplus::Bitmap* FreeRotateBitmap(Gdiplus::Bitmap* pBitmap, float fAngle, Gdiplus::Size* pSize);

	CString SetBitmapModified(LPCTSTR strID);

	//

	ULONG_PTR	m_GDIPToken;

	std::map<CString, BitmapEntry> m_Bitmaps;
	std::set<CString> m_OldBitmaps;
	DWORD m_dwLastBitmapFlush;

	mutable int m_dwBitmapHits;
	mutable int m_dwBitmapMisses;
};

//_____________________________________________________________________________
//
// CGdipBitmap
//

class EPOCH_EXPORT CGdipBitmap
{
public:
	CGdipBitmap();
	CGdipBitmap(LPCTSTR strModulePath, UINT uBitmap);
	CGdipBitmap(LPCTSTR strPath);
	CGdipBitmap(const CGdipBitmap& bitmap);
	~CGdipBitmap();

	CGdipBitmap& operator=(const CGdipBitmap& rhs);

	bool operator==(const CGdipBitmap& rhs) const;
	bool operator!=(const CGdipBitmap& rhs) const;

	void Load(LPCTSTR strModulePath, UINT uBitmap);
	void Load(LPCTSTR strPath);
	void Refresh();

	void Reset();

	bool IsValid() const;
	operator Gdiplus::Bitmap*() const;
	HBITMAP GetHBITMAP() const;
	Gdiplus::Size Size() const;

	// Transforms

	void RotateFlip(Gdiplus::RotateFlipType rotateFlip);
	void Stretch(Gdiplus::Size targetSize);
	void Frame(Gdiplus::Size targetSize, Gdiplus::Color frameColor);
	void Crop(int nCropLeft, int nCropRight, int nCropTop, int nCropBottom);
	void ChangeTransparency(float fAlpha);
	void FreeRotate(float fAngle);

	// Unmanaged changes

	void SetModified();

protected:
	mutable CString m_strID;
	mutable Gdiplus::Size m_Size;
	bool m_bModified;
};

}	// namespace Graphics
}	// namespace Epoch
