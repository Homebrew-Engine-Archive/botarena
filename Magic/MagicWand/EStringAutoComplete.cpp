#include "stdafx.h"
#include "EStringAutoComplete.h"

//_____________________________________________________________________________
//
CEStringAutoComplete::CEStringAutoComplete()
{
	m_nCurrentElement = 0;
	m_nRefCount = 1;
}

BOOL CEStringAutoComplete::Add(CString str)
{
	return m_List.Add(str);
}

ULONG STDMETHODCALLTYPE CEStringAutoComplete::AddRef()
{
	return InterlockedIncrement(reinterpret_cast<LONG*>(&m_nRefCount));
}

ULONG STDMETHODCALLTYPE CEStringAutoComplete::Release()
{
	if (m_nRefCount > 0)
		return	InterlockedDecrement(reinterpret_cast<LONG*>(&m_nRefCount));
	else delete this;
	return 0;
}

HRESULT STDMETHODCALLTYPE CEStringAutoComplete::QueryInterface(REFIID riid, void **ppvObject)
{
	if (ppvObject == NULL) return E_POINTER;
	*ppvObject = NULL;

	if (IID_IUnknown == riid)
		*ppvObject = static_cast<IUnknown*>(this);
	if (IID_IEnumString == riid)
		*ppvObject = static_cast<IEnumString*>(this);

	if (*ppvObject != NULL)
		((LPUNKNOWN)*ppvObject)->AddRef();
	else
		return E_NOINTERFACE;

	return S_OK;
}

HRESULT STDMETHODCALLTYPE CEStringAutoComplete::Reset()
{
	m_nCurrentElement = 0;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CEStringAutoComplete::Skip(ULONG celt)
{
	m_nCurrentElement += celt;
	if (m_nCurrentElement > (ULONG) m_List.GetSize())
		m_nCurrentElement = 0;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CEStringAutoComplete::Clone(IEnumString **ppenum)
{
	if (ppenum == NULL) return E_POINTER;
	
	CEStringAutoComplete *pnew = new CEStringAutoComplete;

	int nElements = m_List.GetSize();
	for (int i = 0; i < nElements; ++i)
		pnew->Add(m_List[i]);

	pnew->AddRef();
	*ppenum = pnew;

	return S_OK;
}

HRESULT STDMETHODCALLTYPE CEStringAutoComplete::Next(ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched)
{
	ULONG i;

	if (celt == 0) return S_FALSE;
	if (pceltFetched == NULL) return E_POINTER;

	for (i = 0; i < celt; i++)
	{
		if (m_nCurrentElement == m_List.GetSize()) break;

		rgelt[i] = (LPWSTR) CoTaskMemAlloc(sizeof(WCHAR) * (m_List[m_nCurrentElement].GetLength() + 1));
		lstrcpy(rgelt[i], m_List[m_nCurrentElement]);

		*pceltFetched++;
		m_nCurrentElement++;
	}
	if (i != celt) return E_UNEXPECTED;

	return S_OK;
}
