#pragma once

namespace Epoch {
namespace Exception {

#define THROW_LAST_SOCK(s)		throw Epoch::Exception::CSocketException(WSAGetLastError(), s, __FILE__, __FUNCTION__, __LINE__)

class EPOCH_EXPORT CSocketException : public Exception::CRecoverableException
{
public:
	static CAtlString GetErrorMessage(int nErrorCode);

	CSocketException(
		int nErrorCode,
		SOCKET socket = NULL,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CRecoverableException(E_FAIL, strFile, strFunction, nLine)
		, m_nErrorCode(nErrorCode)
	{
		if (socket)
			m_strMessage.Format(_T("%s (%d)(%08x)."), GetErrorMessage(m_nErrorCode), m_nErrorCode, socket);
		else
			m_strMessage.Format(_T("%s (%d)."), GetErrorMessage(m_nErrorCode), m_nErrorCode);
	}

	int GetErrorCode()	{ return m_nErrorCode; }

protected:
	int m_nErrorCode;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CSerializationException : public Exception::CRecoverableException
{
public:
	CSerializationException(
		void* pLocation,
		unsigned uSize,
		unsigned uExpectedSize,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CRecoverableException(E_FAIL, strFile, strFunction, nLine)
		, m_pLocation(pLocation)
		, m_uSize(uSize)
		, m_uExpectedSize(uExpectedSize)
	{
		m_strMessage.Format(_T("Serialization is expecting %u bytes but %u bytes are located at 0x%08x."),
			m_uExpectedSize,
			m_uSize,
			m_pLocation);
	}

	void* GetLocation()			{ return m_pLocation; }
	unsigned GetSize()			{ return m_uSize; }
	unsigned GetExpectedSize()	{ return m_uExpectedSize; }

protected:
	void*		m_pLocation;
	unsigned	m_uSize;
	unsigned	m_uExpectedSize;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CInvalidMessageException : public Exception::CRecoverableException
{
public:
	CInvalidMessageException(
		GUID guidMessage,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0);

	GUID GetMessageGuid()		{ return m_guidMessage; }

protected:
	GUID	m_guidMessage;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CUPnPException : public Exception::CRecoverableException
{
public:
	static CAtlString GetErrorMessage(HRESULT hr);

	CUPnPException(
		HRESULT hr,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CRecoverableException(hr, strFile, strFunction, nLine, GetErrorMessage(hr))
	{
	}
};

}	// namespace Exception
}	// namespace Epoch