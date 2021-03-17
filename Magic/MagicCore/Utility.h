#pragma once

class CManaCost;
class CManaPool;

//____________________________________________________________________________
//
// Game Core related functions
//
BOOL CORE_EXPORT Permutation(const int* bound,	// Maximum value for each entry generated in Result
							 int nSize,
							 int nCount,		// Number of entries required
							 int* result,		// Current Result
							 BOOL bIncreasing,	// Generate increasing entries
							 BOOL bUnique);		// Generate unique entries

BOOL CORE_EXPORT Permutation(const IntArray& bound,	// Maximum value for each entry generated in Result
				 int nCount,			// Number of entries required
				 IntArray& result,		// Current Result
				 BOOL bIncreasing,		// Generate increasing entries
				 BOOL bUnique);			// Generate unique entries

bool CORE_EXPORT CompareDWordArray(const DWordArray& array1, const DWordArray& array2);

DWORD CORE_EXPORT Lsb2dw(DWORD dwBitmap);

//____________________________________________________________________________
//
// String functions
//
void CORE_EXPORT PrepareTextWithSymbols(LPCTSTR strText, CString& strDrawManaText, CString& strDrawText);
void CORE_EXPORT PrepareTextWithSymbols2(LPCTSTR strText, CString& strDrawManaText, CString& strDrawText);

CString CORE_EXPORT EnglishToPastTense(LPCTSTR strSentence);

CString CORE_EXPORT TrimMid(LPCTSTR str, int nLength, TCHAR chTrim = _T('.'));
CString CORE_EXPORT ToFixedLength(LPCTSTR str, int nLength, TCHAR chTrim = _T('.'));

//____________________________________________________________________________
//
// Templates
//

#define DEFINE_CREATE_TO_CPTR_ONLY0		template<class C> friend counted_ptr<C> CreateObject();
#define DEFINE_CREATE_TO_CPTR_ONLY1		template<class C, typename P1> friend counted_ptr<C> CreateObject(P1);
#define DEFINE_CREATE_TO_CPTR_ONLY2		template<class C, typename P1, typename P2> friend counted_ptr<C> CreateObject(P1, P2);
#define DEFINE_CREATE_TO_CPTR_ONLY3		template<class C, typename P1, typename P2, typename P3> friend counted_ptr<C> CreateObject(P1, P2, P3);
#define DEFINE_CREATE_TO_CPTR_ONLY4		template<class C, typename P1, typename P2, typename P3, typename P4> friend counted_ptr<C> CreateObject(P1, P2, P3, P4);
#define DEFINE_CREATE_TO_CPTR_ONLY5		template<class C, typename P1, typename P2, typename P3, typename P4, typename P5> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5);
#define DEFINE_CREATE_TO_CPTR_ONLY6		template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6);
#define DEFINE_CREATE_TO_CPTR_ONLY7		template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7);
#define DEFINE_CREATE_TO_CPTR_ONLY8		template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7, P8);
#define DEFINE_CREATE_TO_CPTR_ONLY9		template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7, P8, P9);
#define DEFINE_CREATE_TO_CPTR_ONLY10	template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
#define DEFINE_CREATE_TO_CPTR_ONLY11	template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11);
#define DEFINE_CREATE_TO_CPTR_ONLY12	template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
#define DEFINE_CREATE_TO_CPTR_ONLY13	template<class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13> friend counted_ptr<C> CreateObject(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13);
#define DEFINE_CREATE_TO_CPTR_ONLY		DEFINE_CREATE_TO_CPTR_ONLY0 DEFINE_CREATE_TO_CPTR_ONLY1 DEFINE_CREATE_TO_CPTR_ONLY2 DEFINE_CREATE_TO_CPTR_ONLY3 DEFINE_CREATE_TO_CPTR_ONLY4 DEFINE_CREATE_TO_CPTR_ONLY5 DEFINE_CREATE_TO_CPTR_ONLY6 DEFINE_CREATE_TO_CPTR_ONLY7 DEFINE_CREATE_TO_CPTR_ONLY8 DEFINE_CREATE_TO_CPTR_ONLY9 DEFINE_CREATE_TO_CPTR_ONLY10 DEFINE_CREATE_TO_CPTR_ONLY11 DEFINE_CREATE_TO_CPTR_ONLY12 DEFINE_CREATE_TO_CPTR_ONLY13

#define DEFINE_COUNTED_CSTOR(CLASS)		DEFINE_CREATE_TO_CPTR_ONLY0; protected: CLASS() {};
#define DECLARE_COUNTED_CSTOR(CLASS)	DEFINE_CREATE_TO_CPTR_ONLY0; protected: CLASS();
#define DECLARE_CARD_CSTOR(CLASS)		public: CLASS(CGame* pGame, UINT uID);

template <class C>
counted_ptr<C> CreateObject()
{
	return counted_ptr<C>(new C);
}

template <class C, typename P1>
counted_ptr<C> CreateObject(P1 p1)
{
	return counted_ptr<C>(new C(p1));
}

template <class C, typename P1, typename P2>
counted_ptr<C> CreateObject(P1 p1, P2 p2)
{
	return counted_ptr<C>(new C(p1, p2));
}

template <class C, typename P1, typename P2, typename P3>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3)
{
	return counted_ptr<C>(new C(p1, p2, p3));
}

template <class C, typename P1, typename P2, typename P3, typename P4>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4)
{
	return counted_ptr<C>(new C(p1, p2, p3, p4));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7, p8));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7, p8, p9));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10 )
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10, P11 p11 )
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10, P11 p11, P12 p12 )
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12));
}

template <class C, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13>
counted_ptr<C> CreateObject(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10, P11 p11, P12 p12, P13 p13  )
{
	return counted_ptr<C>(new C(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13));
}