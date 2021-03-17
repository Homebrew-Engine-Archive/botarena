#include "stdafx.h"
#include <Epoch.h>
#include <Exception.h>

namespace Epoch {

std::set<const void*> CHeapTracked::s_HeapAddresses;
CHeapTracked::CCriticalSectionLocal CHeapTracked::s_CS;

#pragma push_macro("new")
#ifdef new
#undef new
#endif

void* CHeapTracked::operator new(size_t nSize)
{
	void* p = ::operator new(nSize, _NORMAL_BLOCK, __FILE__, __LINE__);
	
	EnterCriticalSection(&s_CS.m_CS);

	s_HeapAddresses.insert(p);

	LeaveCriticalSection(&s_CS.m_CS);

	return p;
}

#ifdef _DEBUG
void* CHeapTracked::operator new(size_t nSize, const char* strFile, int nLine)
{
#ifdef _AFX
	void* p = ::operator new(nSize, strFile, nLine);
#else
	void* p = ::operator new(nSize, _NORMAL_BLOCK, strFile, nLine);
#endif

	EnterCriticalSection(&s_CS.m_CS);

	s_HeapAddresses.insert(p);

	LeaveCriticalSection(&s_CS.m_CS);

	return p;
}

void* CHeapTracked::operator new(size_t nSize, int nBlock, const char* strFile, int nLine)
{
#ifdef _AFX
	void* p = ::operator new(nSize, strFile, nLine);
#else
	void* p = ::operator new(nSize, nBlock, strFile, nLine);
#endif

	EnterCriticalSection(&s_CS.m_CS);

	s_HeapAddresses.insert(p);

	LeaveCriticalSection(&s_CS.m_CS);

	return p;
}
#endif

#pragma pop_macro("new")

void CHeapTracked::operator delete(void* p)
{
	EnterCriticalSection(&s_CS.m_CS);

	std::set<const void*>::iterator it = std::find(s_HeapAddresses.begin(), s_HeapAddresses.end(), p);
	if (it != s_HeapAddresses.end())
	{
		s_HeapAddresses.erase(it);

		LeaveCriticalSection(&s_CS.m_CS);

		::operator delete(p);
	}
	else
	{
		LeaveCriticalSection(&s_CS.m_CS);
		throw Exception::CInvalidDeleteException(p);
	}
}

bool CHeapTracked::IsOnHeap() const
{
	const void* p = dynamic_cast<const void*>(this);

	EnterCriticalSection(&s_CS.m_CS);

	bool bResult = s_HeapAddresses.count(p) > 0;

	LeaveCriticalSection(&s_CS.m_CS);

	return bResult;
}

}	// namespace Epoch
