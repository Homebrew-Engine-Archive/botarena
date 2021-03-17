#pragma once

//____________________________________________________________________________
//
// GDI functions
//

namespace Gdiplus
{

class CORE_EXPORT ImageList
{
public:
	ImageList()
	{}

	~ImageList()
	{
		for (size_t i = 0; i < m_Images.size(); ++i)
			delete m_Images[i];
	}

	int Add(Gdiplus::Image* pImage) 
	{ 
		m_Images.push_back(pImage); 
		return static_cast<int>(m_Images.size() - 1); 
	}

	Gdiplus::Image* Get(int nIndex) const 
	{
		if (static_cast<size_t>(nIndex) >= m_Images.size())
		{
			ATLASSERT(false);
			return NULL;
		}

		return m_Images[nIndex];
	}

private:
	std::vector<Gdiplus::Image*> m_Images;
};

}

CORE_EXPORT COLORREF AverageColor(COLORREF Color1, COLORREF Color2, int TotalSteps, int Step);

CORE_EXPORT Gdiplus::Bitmap* StretchBitmap(Gdiplus::Bitmap* pBitmap, const Gdiplus::Size& targetSize);

CORE_EXPORT Gdiplus::Bitmap* CreateTextShadow(LPCTSTR strText, const Gdiplus::SizeF& boundingRect, 
								  const Gdiplus::Font& font,
								  BYTE nAlpha, // 0 (light) - 255 (dark)
								  Gdiplus::REAL fDistance); // 0.1 (blurry) - 1.0 (sharp)

// Multi-line and calc rect support
CORE_EXPORT void DrawMagicText(Gdiplus::Graphics& graphics,
				   COLORREF textColor,
				   const Gdiplus::Font& textFont,
				   const CMTGSymbol& symbols,
				   LPCTSTR str,
				   Gdiplus::RectF& rect,	// No line wrap when width is 0
				   const Gdiplus::SizeF& margin,
				   BOOL bCalcRect = FALSE,	
				   const Gdiplus::ImageAttributes* pImageAttributes = NULL,
				   BOOL bAntialias = FALSE,
				   Gdiplus::StringAlignment horizontalAlign = Gdiplus::StringAlignmentNear,
				   Gdiplus::StringAlignment verticalAlign = Gdiplus::StringAlignmentNear);

// Single line and calc rect not supported (for theme)
CORE_EXPORT void DrawMagicText(HTHEME hTheme,
				   HDC hdc,
				   int iPartId,
				   int iStateId,
				   const CMTGSymbol& symbols,
				   LPCTSTR str,
				   const CRect& rect);

struct CORE_EXPORT DPoint
{
	double x;
	double y;
};

struct CORE_EXPORT DXForm
{
	double eM11; 
	double eM12; 
	double eM21; 
	double eM22; 
	double eDx; 
	double eDy; 
};

CORE_EXPORT void TransformPoint(DPoint& Point, const DXForm* pXForm);
CORE_EXPORT void TransformRectangle(const DPoint RPoints[2], DPoint XPoints[4], const DXForm* pXForm);
CORE_EXPORT void ConvertLineToPolygon(CPoint FromPoint, CPoint ToPoint, int nWidth, CPoint Points[4]);

CORE_EXPORT Gdiplus::RectF ToRectF(const RECT& rect);
CORE_EXPORT Gdiplus::Rect ToRect(const RECT& rect);
CORE_EXPORT Gdiplus::Rect ToRect(const CRect& rect);
CORE_EXPORT RECT ToRect(const Gdiplus::RectF& rectF);
CORE_EXPORT Gdiplus::Font* ResizeFont(const Gdiplus::Font& font, int nSizeDelta);

CORE_EXPORT int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);

//____________________________________________________________________________
//
// Algorithms
//
typedef std::pair<int, int> AdjacencyPair;
typedef std::vector<AdjacencyPair> AdjacencyEntry;
typedef std::vector<AdjacencyEntry> AdjacencyList;

CORE_EXPORT void Dijkstra(AdjacencyList& AdjList,
			  int s,
			  std::vector<int>& p,
			  std::vector<int>& d);
CORE_EXPORT double Distance(CPoint Point1, CPoint Point2);
CORE_EXPORT double CrossProduct(CPoint p1, CPoint p2);
CORE_EXPORT BOOL Intersect(CPoint p1, CPoint p2, CPoint p3, CPoint p4);
CORE_EXPORT BOOL IsHorizontal(CPoint p1, CPoint p2);
CORE_EXPORT BOOL IsVertical(CPoint p1, CPoint p2);
CORE_EXPORT BOOL ManhattanIntersectionPoint(CPoint p1, CPoint p2, CPoint p3, CPoint p4, CPoint& Intersect);
CORE_EXPORT int FindShortestPath(CRect Rect1, CSize BufferSize1,
					 CRect Rect2, CSize BufferSize2,
					 CSize ViewSize,
					 std::vector<CPoint>& Waypoints,
					 BOOL bPerpendicularLinesOnly);