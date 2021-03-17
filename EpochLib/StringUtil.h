#pragma once

namespace Epoch {

EPOCH_EXPORT CAtlString ToString(const CAtlString& str);
EPOCH_EXPORT CAtlString ToString(int n);
EPOCH_EXPORT CAtlString ToString(__int64 n);
EPOCH_EXPORT CAtlString ToString(unsigned int n);
EPOCH_EXPORT CAtlString ToString(unsigned __int64 n);
EPOCH_EXPORT CAtlString ToString(DWORD dw);
EPOCH_EXPORT CAtlString ToString(void* pVoid);

EPOCH_EXPORT CAtlString AbbreviateFunctionName(LPCTSTR strFullFunctionName);

EPOCH_EXPORT int SplitString(LPCTSTR strDelimited,
						 LPCTSTR strDelimiter,
						 StringArray& subStrings,
						 LPCTSTR strQuotation = _T(""),
						 bool bTrim = FALSE,
						 bool bAddEmpty = TRUE);

struct EPOCH_EXPORT iless
	: public std::binary_function<LPCTSTR, LPCTSTR, bool>
{
	bool operator()(const LPCTSTR& _Left, const LPCTSTR& _Right) const
	{
		return _tcsicmp(_Left, _Right) < 0;
	}
};

}	// namespace Epoch