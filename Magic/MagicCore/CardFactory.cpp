#include "stdafx.h"

#define new DEBUG_NEW

/*
//____________________________________________________________________________
//
#ifdef _MY_DEBUG
//#define CARD_CREATION_TEST(C) { counted_ptr<CCard> cpCardTemp(new C(pGame, uID)); }
#define CARD_CREATION_TEST(C) {}
#else
#define CARD_CREATION_TEST(C) {}
#endif

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ CCardFactory::m_CardClassNames.push_back(_T(#C)); CARD_CREATION_TEST(C); }	\
	else	\
	if (!_tcsicmp(strCardName1, _T(#C)))	{ cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

#define DEFINE_TOKEN(T)	\
	if (!_tcslen(strTokenName))	\
	{ CCardFactory::m_TokenClassNames.push_back(_T(#T)); CARD_CREATION_TEST(T); }	\
	else	\
	if (!_tcsicmp(strTokenName1, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }
*/

//____________________________________________________________________________
//
CCardFactory::CCardFactory()
{
}

CCardFactory::~CCardFactory()
{
	m_CardClassNames.clear();

	for (std::list<CSubfactory*>::const_iterator i = m_Subfactories.begin(); i != m_Subfactories.end(); ++i)
		delete *i;
}

void CCardFactory::Initialize()
{
	HANDLE hFindFile;
	WIN32_FIND_DATA findData;
	if ((hFindFile = FindFirstFile(g_pCoreApp->GetCardModulePath() + _T("\\*.DLL"), &findData)) != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
			{
				LOG_INFORMATION(_T("Checking module %s for card factory..."), findData.cFileName);

				CSubfactory* pSubfactory = new CSubfactory(g_pCoreApp->GetCardModulePath() + _T("\\") + findData.cFileName);
				if (!pSubfactory->IsValid())
				{
					delete pSubfactory;
					LOG_INFORMATION(_T("Card factory NOT found in %s"), findData.cFileName);
				}
				else
				{
					m_Subfactories.push_back(pSubfactory);
					LOG_INFORMATION(_T("Found card factory in %s"), findData.cFileName);
				}
			}

		} while(FindNextFile(hFindFile, &findData));

		FindClose(hFindFile);
	}

	// Count distinct cards
	CreateCard(NULL, _T(""), -1);
}

void CCardFactory::Reset()
{
	m_CardNameMap.clear();
	m_GameClassNameMap.clear();
}

counted_ptr<CCard> CCardFactory::CreateCard(CGame* pGame, LPCTSTR strCardName, UINT uID, CString* pstrModulePath) const
{
	static bool bCardsDefined = false;

	if (pstrModulePath)
		pstrModulePath->Empty();

	if (!_tcslen(strCardName))
	{
		ATLASSERT(!bCardsDefined);
		bCardsDefined = true;
	}
	else
		if (!uID)
		{
			CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(strCardName, TRUE);
			if (!pCardEntry)
			{
				//ATLASSERT(false);
			}
			else
				uID = pCardEntry->GetID();
		}

	CString strCardName1(strCardName);
	
	if (!strCardName1.IsEmpty() && 
		((strCardName1[0] != _T('C')) || (_tcslen(strCardName1) < 6) || (strCardName1.Right(4) != _T("Card"))))
	{
		strCardName1 = (_T("C"));

		// Get rid of numbers at the end

		int nNewLength = -1;
		for (int i = _tcslen(strCardName) - 1; i >= 0; --i)
			if (_istdigit(strCardName[i]))
				nNewLength = i;
			else
				break;
				
		CString strTemp(strCardName);
		if (nNewLength != -1)
			strTemp = strTemp.Left(nNewLength);

		// Get rid of non-alpha-numeric characters

		for (int i = 0; i < strTemp.GetLength(); ++i)
			if(strTemp[i]==CString::XCHAR(L'â'))
				strCardName1 += _T("a");
			else if(strTemp[i]==CString::XCHAR(L'à'))
				strCardName1 += _T("a");
			else if(strTemp[i]==CString::XCHAR(L'á'))
				strCardName1 += _T("a");
			else if(strTemp[i]==CString::XCHAR(L'Æ'))
				strCardName1 += _T("AE");
			else if(strTemp[i]==CString::XCHAR(L'é'))
				strCardName1 += _T("e");
			else if(strTemp[i]==CString::XCHAR(L'ú'))
				strCardName1 += _T("u");
			else if(strTemp[i]==CString::XCHAR(L'û'))
				strCardName1 += _T("u");
			else if(strTemp[i]==CString::XCHAR(L':'))
				strCardName1 += _T("");
			else if (_istalnum(strTemp[i]))
				strCardName1 += strTemp[i];

		strCardName1 += _T("Card");
	}

	counted_ptr<CCard> cpCard;

	if (!_tcslen(strCardName))
	{ 
		for (std::list<CSubfactory*>::const_iterator i = m_Subfactories.begin(); i != m_Subfactories.end(); ++i)
			(*i)->CreateCard(pGame, strCardName, m_CardClassNames, uID);
	}
	else
	{
		for (std::list<CSubfactory*>::const_iterator i = m_Subfactories.begin(); i != m_Subfactories.end() && !cpCard; ++i)
		{
			cpCard = (*i)->CreateCard(pGame, strCardName1, m_CardClassNames, uID);
			if (cpCard.GetPointer())
			{
				if (pstrModulePath)
					*pstrModulePath = (*i)->GetModulePath();
				break;
			}
		}
	}

#ifdef _MY_DEBUG
	if (cpCard != NULL)
	{
		for (int j = 0; j < cpCard->GetAbilityCount(); ++j)
		{
			CAbility* pAbility = cpCard->GetAbility(j);

			ATLASSERT(pAbility->GetReferenceCount() == 1 || pAbility->GetReferenceCount() == 2); // 1 for the card and if the ability is an optimized ability, 2
		}
	}
#endif

	return cpCard;	
}

counted_ptr<CCard> CCardFactory::CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID, CString* pstrModulePath) const
{
	if (pstrModulePath)
		pstrModulePath->Empty();

	CString strTokenName1(strTokenName);
	
	if (!strTokenName1.IsEmpty() && 
		((strTokenName1[0] != _T('C')) || (strTokenName1.Find(_T("Token")) == -1)))
	{
		strTokenName1 = (_T("C"));

		UINT nLength = _tcslen(strTokenName);
		for (UINT i = 0; i < nLength; ++i)
			if(strTokenName[i]==CString::XCHAR(_T("â")))
				strTokenName1 += _T("a");
			else if(strTokenName[i]==CString::XCHAR(_T("à")))
				strTokenName1 += _T("a");
			else if(strTokenName[i]==CString::XCHAR(_T("á")))
				strTokenName1 += _T("a");
			else if(strTokenName[i]==CString::XCHAR(_T("Æ")))
				strTokenName1 += _T("AE");
			else if(strTokenName[i]==CString::XCHAR(_T("é")))
				strTokenName1 += _T("e");
			else if(strTokenName[i]==CString::XCHAR(_T("ú")))
				strTokenName1 += _T("u");
			else if(strTokenName[i]==CString::XCHAR(_T("û")))
				strTokenName1 += _T("u");
			else if(strTokenName[i]==CString::XCHAR(_T(":")))
				strTokenName1 += _T("");
			else if (_istalpha(strTokenName[i]))
				strTokenName1 += strTokenName[i];

		if (strTokenName1.Right(5) != _T("Token"))
			strTokenName1 += _T("Token");
	}

	if (!uID)
	{
		CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(strTokenName, TRUE);
		if (!pCardEntry)
		{
			// Okay in DeckBot
			//ATLASSERT(false);
		}
		else
			uID = pCardEntry->GetID();
	}

	counted_ptr<CCard> cpCard;
	for (std::list<CSubfactory*>::const_iterator i = m_Subfactories.begin(); i != m_Subfactories.end() && !cpCard; ++i)
	{
		cpCard = (*i)->CreateToken(pGame, strTokenName1, uID);
		if (cpCard.GetPointer())
		{
			if (pstrModulePath)
				*pstrModulePath = (*i)->GetModulePath();
			break;
		}
	}

#ifdef _MY_DEBUG
	if (cpCard != NULL)
	{
		for (int j = 0; j < cpCard->GetAbilityCount(); ++j)
		{
			CAbility* pAbility = cpCard->GetAbility(j);

			ATLASSERT(pAbility->GetReferenceCount() == 1);
		}
	}
#endif

	return cpCard;	
}

USHORT CCardFactory::GetGameClassID(LPCTSTR strClassName) const
{
	GameClassNameMap::const_iterator it = m_GameClassNameMap.find(strClassName);
	if (it != m_GameClassNameMap.end())
		return it->second;

	USHORT uGameClassID = static_cast<USHORT>(m_GameClassNameMap.size() + 1);	// first ID -> 1
	m_GameClassNameMap.insert(std::make_pair(strClassName, uGameClassID));

#ifdef _MY_DEBUG
	//ATLTRACE(_T("Class: %s ID: %d\n"), strClassName, uGameClassID);
#endif

	return uGameClassID;
}

void CCardFactory::GetAbilityNames(LPCTSTR strCardName, StringArray& abilityNames) const
{
	if (!_tcslen(strCardName))
		return;

	counted_ptr<CCard> cpCard(CreateCard(NULL, strCardName, -1));
	
	if (cpCard.GetPointer() != NULL)
	{
		for (int j = 0; j < cpCard->GetAbilityCount(); ++j)
		{
			CAbility* pAbility = cpCard->GetAbility(j);
			CAtlString strAbilityName = CAtlString(typeid(*pAbility).name());
			bool bFound = false;
			for (unsigned k = 0; k < abilityNames.size(); ++k)
				if (!abilityNames[k].CompareNoCase(strAbilityName))
				{
					bFound = true;
					break;
				}

			if (!bFound)
				abilityNames.push_back(strAbilityName);
		}
	}
}

void CCardFactory::GetAllAbilityNames(std::map<CString, StringArray>& allAbilityNames) const
{
	for (StringArray::size_type i = 0; i < m_CardClassNames.size(); ++i)
	{
		StringArray abilityNames;
		GetAbilityNames(m_CardClassNames[i], abilityNames);
		
		for (StringArray::size_type j = 0; j < abilityNames.size(); ++j)
		{
			std::map<CString, StringArray>::iterator it = allAbilityNames.find(abilityNames[j]);
			if (it != allAbilityNames.end())
				it->second.push_back(m_CardClassNames[i]);
			else
			{
				StringArray cardNames;
				cardNames.push_back(m_CardClassNames[i]);
				allAbilityNames[abilityNames[j]] = cardNames;
			}
		}
	}
}

void CCardFactory::GetCardsUsed(LPCTSTR strDeckPath, StringArray& cardNames) const
{
	CStdioFile Deck;
	if (!Deck.Open(strDeckPath, CFile::modeRead | CFile::typeText))
		return;

	CString strLine;
	while (Deck.ReadString(strLine))
	{
		strLine.Trim();
		if ((strLine.Left(1) == _T("#")) || (strLine.Left(2) == _T("//")))
			continue;

		bool bFound = false;
		for (unsigned i = 0; i < cardNames.size(); ++i)
			if (!cardNames[i].CompareNoCase(strLine))
			{
				bFound = true;
				break;
			}

		if (!bFound)
			cardNames.push_back(strLine);
	}
}

void CCardFactory::GetAllCardsUsedInPath(LPCTSTR strDeckDir, StringArray& allCardNames) const
{
	HANDLE hFindFile;
	WIN32_FIND_DATA findData;
	if ((hFindFile = FindFirstFile(CString(strDeckDir) + _T("\\*.TXT"), &findData)) == INVALID_HANDLE_VALUE)
		return;

	do
	{
		if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
			GetCardsUsed(CString(strDeckDir) + _T("\\") + findData.cFileName, allCardNames);

	} while(FindNextFile(hFindFile, &findData));

	FindClose(hFindFile);
}

void CCardFactory::SetUniqueCardName(CCard* pCard) const
{
	CardNameMap::iterator it = m_CardNameMap.find(pCard->GetCardName());
	if (it != m_CardNameMap.end())
	{
		++it->second;
		CString strTemp;
		strTemp.Format(_T("%d"), it->second);
		pCard->AppendToCardName(strTemp);
	}
	else
		m_CardNameMap.insert(std::make_pair(pCard->GetCardName(), 1));
}
