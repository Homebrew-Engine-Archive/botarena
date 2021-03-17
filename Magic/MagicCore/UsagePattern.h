#pragma once

class CUsageCard;
class CUsageEntry;
class CGame;
class CNode;

//____________________________________________________________________________
//
// CUsageAbility
//

class CORE_EXPORT CUsageAbility
{
public:
	typedef std::vector<CUsageEntry*> UsageEntryArray;

	static BOOL HasPredefinedUsage(const CAbility* pAbility);
	static BOOL CreatePredefinedUsage(const CAbility* pAbility, CUsageAbility& usageAbility);

	CUsageAbility(CUsageCard* pUsageCard);
	virtual ~CUsageAbility();

	void SetAbilityID(LPCTSTR strAbilityID);
	CString GetUniqueChildAbilityName() const;

	UsageEntryArray::size_type GetEntryCount() const;
	CUsageEntry* GetEntry(UsageEntryArray::size_type nIndex) const;

	void AddEntry(CUsageEntry* pUsageEntry);
	BOOL MoveEntry(const CUsageEntry* pUsage, BOOL bMoveUp);
	BOOL RemoveEntry(const CUsageEntry* pUsage);
	void RemoveAllEntries();

	CUsageCard* GetUsageCard() const;

	void Copy(const CUsageAbility& UsageAbility);
	CUsageAbility* Clone() const;

	BOOL IsAbilityUsable(const CAbility* pAbility) const;
	BOOL IsAbilityUsableOnCard(const CAbility* pAbility, const CCard* pOnCard) const;		// Used by targeting abilites to check individual targeted card usage
	BOOL IsAbilityUsableOnPlayer(const CAbility* pAbility, const CPlayer* pOnPlayer) const;	// Used by targeting abilites to check individual targeted player

	void SetDefaultUsage(BOOL bUsable);
	BOOL GetDefaultUsage() const;

	const CAbility* GetCardAbility() const;
	BOOL SetPredefinedUsage(const CAbility* pAbility);

	BOOL GetOverrideThisInNonEmptyStack() const;
	void SetOverrideThisInNonEmptyStack(BOOL bOverride);

protected:
	BOOL CardMayLeaveInPlay(const CCard* pCard) const;
	BOOL CardMayBeDiscarded(const CCard* pCard) const;
	BOOL CreatureLifeMayDecrease(const CCreatureCard* pCreature) const;
	BOOL PlayerLifeMayDecrease(const CPlayer* pPlayer) const;
	BOOL CreatureLifeMayIncrease(const CCreatureCard* pCreature) const;
	BOOL PlayerLifeMayIncrease(const CPlayer* pPlayer) const;

	CString			m_strUniqueChildAbilityName;
	UsageEntryArray	m_Entries;
	CUsageCard*		m_pUsageCard;
	BOOL			m_bDefaultUsage;			// If nothing matches, return this
	BOOL			m_bOverrideThisUPInStack;	// Default is TRUE

	mutable counted_ptr<CCard> m_cpCard;
};

//____________________________________________________________________________
//
// CUsageCard
//

class CORE_EXPORT CUsageCard
{
public:
	typedef std::vector<CUsageAbility*> UsageAbilityArray;

	CUsageCard();
	virtual ~CUsageCard();

	void SetCardName(LPCTSTR strCardName);
	const CString& GetCardName() const;
	CString GetTrCardName() const;

	UsageAbilityArray::size_type GetAbilityCount() const;
	CUsageAbility* GetAbility(UsageAbilityArray::size_type nIndex) const;

	CUsageAbility* AddAbility(LPCTSTR strAbilityID);

	BOOL IsEnabled() const;
	void SetEnable(BOOL bEnabled);

	void Copy(const CUsageCard& UsageCard);
	CUsageCard* Clone() const;

	BOOL CreateAbilities();

	CardType GetCardType() const;

	BOOL HasEntries() const;

protected:
	BOOL				m_bEnabled;
	CString				m_strCardName;
	UsageAbilityArray	m_Abilities;
	CardType			m_CardType;
};

//____________________________________________________________________________
//
// CUsagePattern
//

class CORE_EXPORT CUsagePattern
{
	DECLARE_SINGLETON(CUsagePattern);

public:
	typedef std::vector<CUsageCard*> UsageCardArray;
	typedef std::vector<UsagePatternItem> UsagePatternItemArray;

	static NodeId MapUsagePatternItem(UsagePatternItem item);

	void RemoveAllPatterns();
	void RemoveComputerPatterns();
	void RemoveHumanPatterns();

	BOOL WriteProfile() const;
	BOOL GetProfile();

	UsageCardArray::size_type GetCardCount(BOOL bForComputer) const;
	CUsageCard* GetCard(BOOL bForComputer, UsageCardArray::size_type nIndex) const;

	CUsageCard* AddCard(BOOL bForComputer, LPCTSTR strCardName);
	CUsageCard* GetCard(BOOL bForComputer, LPCTSTR strCardName) const;
	BOOL RemoveCard(const CUsageCard* pUsageCard);

	void UpdateAll(CGame* pGame);
	void UpdateCard(const CCard* pCard);
	void UpdateAbility(CAbility* pAbility);

	void SetOverrides(const UsagePatternItemArray& overrides);
	BOOL IsOverriden(const CNode* pNode) const;

protected:
	const CUsageAbility* FindUsageAbility(BOOL bForComputer, LPCTSTR strCardName, LPCTSTR strAbilityID) const;
	CUsageAbility* FindUsageAbility(BOOL bForComputer, LPCTSTR strCardName, LPCTSTR strAbilityID);

	UsageCardArray			m_HumanCards;
	UsageCardArray			m_ComputerCards;
	UsagePatternItemArray	m_Overrides;
};

//____________________________________________________________________________
//
// CUsageEntry
//

class CORE_EXPORT CUsageEntry
{
public:
	CUsageEntry()
		: m_bUsable(FALSE)
		, m_nCount(0)
	{}

	CUsageEntry(BOOL bUsable, 
				UsagePatternItem item0,
				UsagePatternItem item1 = UsagePatternItem::Null)
				: m_bUsable(bUsable)
	{
		ATLASSERT(item0 != UsagePatternItem::Null);

		m_Items[0] = item0;

		if (item1 != UsagePatternItem::Null)
		{
			m_Items[1] = item1;
			m_nCount = 2;
		}
		else
			m_nCount = 1;
	}

	CUsageEntry(const CUsageEntry& entry)
	{
		m_nCount = entry.m_nCount;
		m_bUsable = entry.m_bUsable;
		m_Items[0] = entry.m_Items[0];
		m_Items[1] = entry.m_Items[1];
	}

	UsagePatternItem	m_Items[2];
	int					m_nCount;
	BOOL				m_bUsable;
};
