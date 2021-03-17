#pragma once

//_____________________________________________________________________________
//
class CEStringAutoComplete : public IEnumString
{
private:
	CSimpleArray<CString> m_List;
	ULONG m_nCurrentElement;
	ULONG m_nRefCount;

public:
	CEStringAutoComplete();
	BOOL Add(CString str);
	// IUnknown methods
	ULONG STDMETHODCALLTYPE AddRef();
	ULONG STDMETHODCALLTYPE Release();
	HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObject);
	// IEnumString methods
	HRESULT STDMETHODCALLTYPE Clone(IEnumString **ppenum);
	HRESULT STDMETHODCALLTYPE Next(ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched);
	HRESULT STDMETHODCALLTYPE Reset();
	HRESULT STDMETHODCALLTYPE Skip(ULONG celt);
};