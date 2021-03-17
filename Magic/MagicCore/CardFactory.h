#pragma once

class CCard;

class CORE_EXPORT CCardFactory
{
	DECLARE_SINGLETON(CCardFactory);

public:
	void Initialize();
	void Reset();

	counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, UINT uID = 0, CString* pstrModulePath = NULL) const;
	counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokename, UINT uID, CString* pstrModulePath = NULL) const;

	USHORT GetGameClassID(LPCTSTR strClassName) const;

	void SetUniqueCardName(CCard* pCard) const;

	void GetAbilityNames(LPCTSTR strCardName, StringArray& abilityNames) const;
	void GetAllAbilityNames(std::map<CString, StringArray>& allAbilityNames) const;		// Map from ability names to card names
	void GetCardsUsed(LPCTSTR strDeckPath, StringArray& cardNames) const;
	void GetAllCardsUsedInPath(LPCTSTR strDeckDir, StringArray& allCardNames) const;

	const StringArray& GetCardClassNames() const { return m_CardClassNames; }

protected:
	class CSubfactory
	{
		typedef counted_ptr<CCard> (*CreateCardFunc)(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);
		typedef counted_ptr<CCard> (*CreateTokenFunc)(CGame* pGame, LPCTSTR strTokenName, UINT uID);

	public:
		CSubfactory(LPCTSTR strFilePath)
			: m_strFilePath(strFilePath)
			, m_hModule(LoadLibrary(strFilePath))
			, m_pCreateCardFunc(NULL)
			, m_pCreateTokenFunc(NULL)
		{
			if (m_hModule)
			{
				m_pCreateCardFunc = (CreateCardFunc)GetProcAddress(m_hModule, 
					"?CreateCard@@YA?AV?$counted_ptr@VCCard@@@Epoch@@PAVCGame@@PB_WAAV?$vector@V?$CStringT@_WV?$StrTraitATL@_WV?$ChTraitsCRT@_W@ATL@@@ATL@@@ATL@@V?$allocator@V?$CStringT@_WV?$StrTraitATL@_WV?$ChTraitsCRT@_W@ATL@@@ATL@@@ATL@@@std@@@std@@I@Z");

				m_pCreateTokenFunc = (CreateTokenFunc)GetProcAddress(m_hModule, 
					"?CreateToken@@YA?AV?$counted_ptr@VCCard@@@Epoch@@PAVCGame@@PB_WI@Z");
			}
		}

		~CSubfactory()
		{
			if (m_hModule)
				FreeLibrary(m_hModule);
		}

		bool IsValid() const
		{
			return m_pCreateCardFunc != NULL || m_pCreateTokenFunc != NULL;
		}

		LPCTSTR GetModulePath() const { return m_strFilePath; }

		counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
		{
			if (!m_pCreateCardFunc)
				return NULL;

			return m_pCreateCardFunc(pGame, strCardName, cardClassNames, uID);
		}

		counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
		{
			if (!m_pCreateTokenFunc)
				return NULL;

			return m_pCreateTokenFunc(pGame, strTokenName, uID);
		}

	protected:
		CString m_strFilePath;
		HMODULE m_hModule;
		CreateCardFunc m_pCreateCardFunc;
		CreateTokenFunc m_pCreateTokenFunc;
	};

	typedef std::map<CString, UINT>	CardNameMap;
	mutable CardNameMap	m_CardNameMap;	// Card name map: used for patching up card names to get an unique name during game play, e.g. Swamp, Swamp1, Swamp2

	typedef std::map<CString, USHORT> GameClassNameMap;
	mutable GameClassNameMap	m_GameClassNameMap;	// C++ class name map: c++ class name -> ushort ID, more efficient way to compare classes

	mutable StringArray m_CardClassNames;

	std::list<CSubfactory*> m_Subfactories;
};

#define DECLARE_GAME_CLASS_ID	\
	USHORT GetGameClassID() const { return m_uGameClassID; }	\
	USHORT m_uGameClassID;	\
	void DefineGameClassID() { USES_CONVERSION; m_uGameClassID = CCardFactory::GetInstance()->GetGameClassID(A2CT(typeid(*this).name())); }
