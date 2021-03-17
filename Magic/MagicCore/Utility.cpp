#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
BOOL Permutation(const IntArray& bound,	// Maximum value for each entry generated in Result
				 int nCount,			// Number of entries required
				 IntArray& result,		// Current Result
				 BOOL bIncreasing,		// Generate increasing entries
				 BOOL bUnique)			// Generate unique entries
{
	if (result.size() < (size_t)nCount)
		result.resize(nCount);

	return Permutation(&bound[0],
				 bound.size(),
				 nCount,
				 &result[0],
				 bIncreasing,
				 bUnique);
}

BOOL Permutation(const int* bound,	// Maximum value for each entry generated in result
				 int nSize,
				 int nCount,			// Number of entries required
				 int* result,		// Current result
				 BOOL bIncreasing,		// Generate increasing entries
				 BOOL bUnique)			// Generate unique entries
{
	if (nCount <= 0)
		return FALSE;

	ATLASSERT(nSize >= nCount);

	if (!bIncreasing)
	{
		if (!bUnique)
		{
			// All combinations
			int nCurrent = nCount - 1;
			do
			{
				++result[nCurrent];
				if (result[nCurrent] > bound[nCurrent])
				{
					if (nCurrent)
						--nCurrent;
					else
						return FALSE;
				}
				else
				{
					for (int i = nCurrent + 1; i < nCount; ++i)
						result[i] = 0;
					return TRUE;
				}
			} while (true);
		}
		else	
		{
			// All combinations but unique
			int nCurrent = nCount - 1;
			do
			{
LABEL_RETRY:
				++result[nCurrent];

LABEL_TEST:
				if (result[nCurrent] > bound[nCurrent])
				{
					if (nCurrent)
						--nCurrent;
					else
						return FALSE;
				}
				else
				{
					for (int i = 0; i < nCurrent; ++i)
						for (int j = i + 1; j <= nCurrent; ++j)
							if (result[i] == result[j])
								goto LABEL_RETRY;

					for (int i = nCurrent + 1; i < nCount; ++i)
						result[i] = 0;

					++nCurrent;

					if (nCurrent == nCount)
						return TRUE;

					goto LABEL_TEST;
				}
			} while (true);
		}
	}

	// Increasing (which implies unique)
	int nCurrent = nCount - 1;
	do
	{
		++result[nCurrent];
		if (result[nCurrent] > (bound[nCurrent] - (nCount - nCurrent) + 1))
		{
			if (nCurrent)
				--nCurrent;
			else
				return FALSE;
		}
		else
		{
			for (int i = nCurrent + 1; i < nCount; ++i)
				result[i] = result[i - 1] + 1;
			return TRUE;
		}
	} while (true);
		
	return FALSE;
}

//____________________________________________________________________________
//
bool CompareDWordArray(const DWordArray& array1, const DWordArray& array2)
{
	DWordArray::size_type nSize = array1.size();

	if (nSize != array2.size())
		return false;

	if (!nSize)
		return true;

	DWordArray array2Temp(array2);

	for (DWordArray::size_type i = 0; i < nSize; ++i)
	{
		DWORD dwValue1 = array1[i]; 
		if (!dwValue1)	// added to support CBlockAction::GetCutID()
			return false;

		bool bFound = false;
		for (DWordArray::size_type j = 0; j < nSize; ++j)
			if (array2Temp[j] == dwValue1)
			{
				array2Temp[j] = 0;
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
DWORD Lsb2dw(DWORD dwBitmap)
{
	for (DWORD i = 0; i < 32; ++i)
		if ((dwBitmap >> i) & 0x00000001)
			return i;

	VERIFY(FALSE);

	return 0xffffffff;
}

//____________________________________________________________________________
//
void PrepareTextWithSymbols(LPCTSTR strText, CString& strDrawManaText, CString& strDrawText)
{
	strDrawText.Empty(); 
	strDrawManaText.Empty();
	
	CString tempStr = strText;

	int idx;
	while ((idx = tempStr.Find(_T('\r'))) != -1)
		tempStr.SetAt(idx, _T('\n'));

	strDrawManaText = tempStr;

	while ((idx = tempStr.Find(_T('{'))) != -1) 
	{
		if (idx)
			strDrawText += tempStr.Left(idx);
			
		int idx1 = tempStr.Find(_T('}'));
		if (idx1 == -1)
			idx1 = tempStr.GetLength() - 1;

		if (idx1 - idx > 1)
		{
			CString tempStr1 = tempStr.Mid(idx + 1, idx1 - idx - 1);
			strDrawText += tempStr1;
		}

		if (idx1 + 1 < tempStr.GetLength())
			tempStr = tempStr.Mid(idx1 + 1);
		else
			tempStr = _T("");
	}

	strDrawText += tempStr;
}

/* Deprecated, old code to deal with MTG symbol font
void PrepareTextWithSymbols(LPCTSTR strText, CString& strDrawManaText, CString& strDrawText)
{
	strDrawText.Empty(); 
	strDrawManaText.Empty();
	
	CString tempStr = strText;

	int idx;
	while ((idx = tempStr.Find(_T('\r'))) != -1)
		tempStr.SetAt(idx, _T('\n'));

	while ((idx = tempStr.Find(_T('{'))) != -1) 
	{
		if (idx)
		{
			strDrawText += tempStr.Left(idx);
			strDrawManaText += tempStr.Left(idx);
		}
			
		int idx1 = tempStr.Find(_T('}'));
		if (idx1 == -1)
			idx1 = tempStr.GetLength() - 1;

		if (idx1 - idx > 1)
		{
			CString tempStr1 = tempStr.Mid(idx + 1, idx1 - idx - 1);
			strDrawText += tempStr1;

			strDrawManaText += _T("{");
			for (int i = 0; i < tempStr1.GetLength(); i++)
				switch (tempStr1.GetAt(i))
				{
				case BLACK_MANA_CHAR : strDrawManaText += _T("@bo@k") BLACK_MANA_TEXT; break;
				case GREEN_MANA_CHAR : strDrawManaText += _T("@go@k") GREEN_MANA_TEXT; break;
				case RED_MANA_CHAR : strDrawManaText += _T("@ro@k") RED_MANA_TEXT; break;
				case BLUE_MANA_CHAR : strDrawManaText += _T("@uo@k") BLUE_MANA_TEXT; break;
				case WHITE_MANA_CHAR : strDrawManaText += _T("@wo@k") WHITE_MANA_TEXT; break;
				case 'T' : strDrawManaText += _T("@ao@kc@wt"); break;
				default : strDrawManaText += _T("@ao@k") + tempStr1.Mid(i, 1); break;
				}
			strDrawManaText += _T("}");
		}

		if (idx1 + 1 < tempStr.GetLength())
			tempStr = tempStr.Mid(idx1 + 1);
		else
			tempStr = _T("");
	}
	strDrawText += tempStr;
	strDrawManaText += tempStr;
}
*/

CString EnglishToPastTense(LPCTSTR strSentence)
{
	static std::pair<LPCTSTR, LPCTSTR> verbs[] =
	{
		std::make_pair(_T(" activates "), _T(" activated ")),
		std::make_pair(_T(" adds "), _T(" added ")),
		std::make_pair(_T(" attacks "), _T(" attacked ")),
		std::make_pair(_T(" assigns"), _T(" assigned")),
		std::make_pair(_T(" blocks "), _T(" blocked ")),
		std::make_pair(_T(" casts "), _T(" cast ")),
		std::make_pair(_T(" changes "), _T(" changed ")),
		std::make_pair(_T(" counters "), _T(" countered ")),
		std::make_pair(_T(" deals "), _T(" dealt ")),
		std::make_pair(_T("destroys "), _T("destroyed ")),
		std::make_pair(_T(" discards "), _T(" discarded ")),
		std::make_pair(_T(" draws "), _T(" drew ")),
		std::make_pair(_T(" enchants "), _T(" enchanted ")),
		std::make_pair(_T(" ends "), _T(" ended ")),
		std::make_pair(_T(" equips "), _T(" equipped ")),
		std::make_pair(_T(" finishes "), _T(" finished ")),
		std::make_pair(_T("gains "), _T("gained ")),
		std::make_pair(_T(" gets "), _T(" got ")),
		std::make_pair(_T(" gives "), _T(" gave ")),
		std::make_pair(_T(" has "), _T(" had ")),
		std::make_pair(_T(" ignores "), _T(" ignored ")),
		std::make_pair(_T(" is "), _T(" was ")),
		std::make_pair(_T(" keeps "), _T(" kept ")),
		std::make_pair(_T("loses "), _T("lost ")),
		std::make_pair(_T(" moves "), _T(" moved ")),
		std::make_pair(_T(" orders"), _T(" ordered")),
		std::make_pair(_T(" passes"), _T(" passed")),
		std::make_pair(_T(" pays "), _T(" paid ")),
		std::make_pair(_T(" plays "), _T(" played ")),
		std::make_pair(_T(" prevents "), _T(" prevented ")),
		std::make_pair(_T(" proceeds "), _T(" proceeded ")),
		std::make_pair(_T(" puts "), _T(" put ")),
		std::make_pair(_T(" redirects "), _T(" redirected ")),
		std::make_pair(_T("removes "), _T("removed ")),
		std::make_pair(_T(" regenerates "), _T(" regenerated ")),
		std::make_pair(_T(" resolves "), _T(" resolved ")),
		std::make_pair(_T(" reveals "), _T(" revealed ")),
		std::make_pair(_T(" sacrifices "), _T(" sacrificed ")),
		std::make_pair(_T(" selects "), _T(" selected ")),
		std::make_pair(_T(" shuffles "), _T(" shuffled ")),
		std::make_pair(_T(" taps "), _T(" tapped ")),
		std::make_pair(_T(" takes "), _T(" took ")),
		std::make_pair(_T(" targets "), _T(" targeted ")),
		std::make_pair(_T("triggers "), _T("triggered ")),
		std::make_pair(_T(" untaps "), _T(" untapped ")),
		std::make_pair(_T(" uses "), _T(" used ")),
		std::make_pair(_T(" undoes "), _T(" undid ")),
	};

	CString strOut(strSentence);

	for (int i = 0; i < ARRAY_SIZE(verbs); ++i)
		strOut.Replace(verbs[i].first, verbs[i].second);

	return strOut;
}

//____________________________________________________________________________
//
CString TrimMid(LPCTSTR str, int nLength, TCHAR chTrim)
{
	int nOldLength = _tcslen(str);
	if (nOldLength <= nLength)
		return str;
	
	if (nLength <= 3)
		return CString(chTrim, nLength);

	// 0123456789012 = 13
	// xxxxx...xxxxx

	// 01234567890123 = 14
	// xxxxx...xxxxxx

	CString strTemp(str);
	CString strTemp2(strTemp.Left((nLength - 3) / 2));
	strTemp2 += CString(chTrim, 3);
	strTemp2 += (strTemp.Right((nLength - 2) / 2));

	return strTemp2;
}

//____________________________________________________________________________
//
CString ToFixedLength(LPCTSTR str, int nLength, TCHAR chTrim)
{
	int nOldLength = _tcslen(str);
	if (nOldLength < nLength)
	{
		CString strTemp(str);
		for (int i = 0; i < nLength - nOldLength; ++i)
			strTemp += _T(" ");

		return strTemp;
	}

	return TrimMid(str, nLength, chTrim);
}