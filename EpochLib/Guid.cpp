#include "stdafx.h"
#include <Epoch.h>

namespace Epoch {

GUID Guid::Parse(LPCTSTR strGuid)
{
	CAtlString strGuid2(strGuid);
	strGuid2.Trim();
	strGuid2.MakeLower();

	LPCTSTR strFormat;

	/*
	dddddddddddddddddddddddddddddddd 
	dddddddd-dddd-dddd-dddd-dddddddddddd 
	{dddddddd-dddd-dddd-dddd-dddddddddddd} 

	0123456789012345678901234567890123456789
				1         2         3
	*/

	if (strGuid2.GetLength() == 32)
		strFormat = _T("%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x");
	else
		if (strGuid2.GetLength() == 36)
			strFormat = _T("%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x");
		else
			if (strGuid2.GetLength() == 38)
				strFormat = _T("{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}");
			else
				throw Exception::CArgumentException(_T("strGuid"), __FILE__, __FUNCTION__, __LINE__);

	DWORD dwData[11];

	if (_stscanf_s(strGuid2, strFormat,
		&dwData[0],
		&dwData[1],
		&dwData[2],
		&dwData[3],
		&dwData[4],
		&dwData[5],
		&dwData[6],
		&dwData[7],
		&dwData[8],
		&dwData[9],
		&dwData[10]) < 11)
		throw Exception::CArgumentException(_T("strGuid"), __FILE__, __FUNCTION__, __LINE__);

	GUID guid;
	guid.Data1		= dwData[0];
	guid.Data2		= static_cast<WORD>(dwData[1]);
	guid.Data3		= static_cast<WORD>(dwData[2]);
	guid.Data4[0]	= static_cast<BYTE>(dwData[3]);
	guid.Data4[1]	= static_cast<BYTE>(dwData[4]);
	guid.Data4[2]	= static_cast<BYTE>(dwData[5]);
	guid.Data4[3]	= static_cast<BYTE>(dwData[6]);
	guid.Data4[4]	= static_cast<BYTE>(dwData[7]);
	guid.Data4[5]	= static_cast<BYTE>(dwData[8]);
	guid.Data4[6]	= static_cast<BYTE>(dwData[9]);
	guid.Data4[7]	= static_cast<BYTE>(dwData[10]);
	return guid;
}

GUID Guid::Create()
{
	GUID guid;
	CoCreateGuid(&guid);
	return guid;
}

CAtlString Guid::ToString(GUID guid, bool bToUpper, bool bWithBraces, bool bWithDashes)
{
	static const LPCTSTR c_strUpperDashesFormat =		_T("%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X");
	static const LPCTSTR c_strLowerDashesFormat =		_T("%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x");
	static const LPCTSTR c_strUpperBracesDashesFormat =	_T("{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}");
	static const LPCTSTR c_strLowerBracesDashesFormat =	_T("{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}");
	static const LPCTSTR c_strUpperFormat =				_T("%08X%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X");
	static const LPCTSTR c_strLowerFormat =				_T("%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x");
	static const LPCTSTR c_strUpperBracesFormat =		_T("{%08X%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X}");
	static const LPCTSTR c_strLowerBracesFormat =		_T("{%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x}");

	LPCTSTR strFormat;

	if (bToUpper)
	{
		if (bWithBraces)
		{
			if (bWithDashes)
				strFormat = c_strUpperBracesDashesFormat;
			else
				strFormat = c_strUpperBracesFormat;
		}
		else
			if (bWithDashes)
				strFormat = c_strUpperDashesFormat;
			else
				strFormat = c_strUpperFormat;
	}
	else
		if (bWithBraces)
		{
			if (bWithDashes)
				strFormat = c_strLowerBracesDashesFormat;
			else
				strFormat = c_strLowerBracesFormat;
		}
		else
			if (bWithDashes)
				strFormat = c_strLowerDashesFormat;
			else
				strFormat = c_strLowerFormat;

	CAtlString strGuid;
	strGuid.Format(strFormat,
				   guid.Data1,
				   guid.Data2,
				   guid.Data3,
				   guid.Data4[0],
				   guid.Data4[1],
				   guid.Data4[2],
				   guid.Data4[3],
				   guid.Data4[4],
				   guid.Data4[5],
				   guid.Data4[6],
				   guid.Data4[7]);	

	return strGuid;
}

}	// namespace Epoch