#include "stdafx.h"
#include <Mathematic.h>
#include <Exception.h>

namespace Epoch {
namespace Mathematic {

static HRESULT EnsureAcquire(
	CCryptProv& prov,
	LPCTSTR pszContainer = NULL,
	LPCTSTR pszProvider = MS_DEF_PROV,
	DWORD dwProvType = PROV_RSA_FULL,
	DWORD dwFlags = CRYPT_VERIFYCONTEXT | CRYPT_SILENT)
{
	HRESULT hr = prov.Initialize(dwProvType, pszContainer, pszProvider, dwFlags);

	if (hr == NTE_KEYSET_NOT_DEF)
		hr = prov.Initialize(dwProvType, pszContainer, pszProvider, dwFlags | CRYPT_NEWKEYSET);

	return hr;
}

CRandom::CRandom()
{
	HRESULT hr = EnsureAcquire(m_CryptProvider);
	if (FAILED(hr))
		THROW_HR(hr);
}

int CRandom::Next()
{
	if (!m_CryptProvider.GetHandle())
		THROW_LAST_WIN32();

	int nRandom = 0;
	HRESULT hr = m_CryptProvider.GenRandom(sizeof(int), reinterpret_cast<LPBYTE>(&nRandom));
	if (FAILED(hr))
		THROW_HR(hr);

	return abs(nRandom);
}

int CRandom::Next(int nMaxValue)
{
	if (nMaxValue < 0)
		THROW_HR(E_INVALIDARG);
		
	return Next() % nMaxValue;
}

int CRandom::Next(int nMinValue, int nMaxValue)
{
	if ((nMaxValue < 0) || (nMinValue < 0) || (nMinValue > nMaxValue))
		THROW_HR(E_INVALIDARG);
		
	return (Next() % (nMaxValue - nMinValue)) + nMinValue;
}

void CRandom::NextBytes(ULONG ulSize, LPBYTE pBuffer)
{
	if (!m_CryptProvider.GetHandle())
		THROW_LAST_WIN32();

	HRESULT hr = m_CryptProvider.GenRandom(ulSize, pBuffer);
	if (FAILED(hr))
		THROW_HR(hr);
}

}	// namespace Mathematic
}	// namespace Epoch