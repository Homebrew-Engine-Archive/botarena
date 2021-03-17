#include "stdafx.h"
#include <Epoch.h>

namespace Epoch {

CAtlString ToString(const CAtlString& str)
{
	return str;
}

CAtlString ToString(int n)
{
	CAtlString str;
	str.Format(_T("%d"), n);
	return str;
}

CAtlString ToString(__int64 n)
{
	CAtlString str;
	str.Format(_T("%I64d"), n);
	return str;
}

CAtlString ToString(unsigned int n)
{
	CAtlString str;
	str.Format(_T("%u"), n);
	return str;
}

CAtlString ToString(unsigned __int64 n)
{
	CAtlString str;
	str.Format(_T("%I64u"), n);
	return str;
}

CAtlString ToString(DWORD dw)
{
	CAtlString str;
	str.Format(_T("%08x"), dw);
	return str;
}

CAtlString ToString(void* pVoid)
{
	CAtlString str;
	str.Format(_T("%p"), pVoid);
	return str;
}

CAtlString AbbreviateFunctionName(LPCTSTR strFullFunctionName)
{
	// From: Epoch::Networking::CWinsock::Finalize()
	// To:   CWinsock::Finalize()

	CAtlString str = strFullFunctionName;
	int nIndex = -1;
	for (int i = 0; i < 3; ++i)
	{
		nIndex = str.ReverseFind(_T(':'));
		if (nIndex == -1)
			return strFullFunctionName;

		str = str.Left(nIndex);
	}

	return strFullFunctionName + nIndex + 1;
}

int SplitString(LPCTSTR strDelimited,
							 LPCTSTR strDelimiter,
							 StringArray& subStrings,
							 LPCTSTR strQuotation,
							 bool bTrim,
							 bool bAddEmpty)
{
	subStrings.clear();
	if (!_tcslen(strDelimited))
		return 0;

	BOOL bInQuote = FALSE;
	CAtlString strCurrent(strDelimited);
	CAtlString strFound;
	BOOL bLastDelimiter = FALSE;
	while (!strCurrent.IsEmpty())
	{
		CAtlString strChar(strCurrent.Left(1));
		strCurrent = strCurrent.Mid(1);

		if (!bInQuote && !strChar.FindOneOf(strDelimiter))
		{
			if (bTrim)
			{
				strFound.Trim();
				strFound.Trim(strQuotation);
				strFound.Trim();
			}

			if (bAddEmpty || !strFound.IsEmpty())
			{
				subStrings.push_back(strFound);
				strFound.Empty();
			}

			bLastDelimiter = TRUE;
		}
		else
		{
			if (!strChar.FindOneOf(strQuotation))
				bInQuote = !bInQuote;
			strFound += strChar;

			bLastDelimiter = FALSE;
		}
	}

	if (bLastDelimiter || !strFound.IsEmpty())
	{
		if (bTrim)
		{
			strFound.Trim();
			strFound.Trim(strQuotation);
			strFound.Trim();
		}

		if (bAddEmpty || !strFound.IsEmpty())
			subStrings.push_back(strFound);
	}

	return static_cast<int>(subStrings.size());
}

}	// namespace Epoch