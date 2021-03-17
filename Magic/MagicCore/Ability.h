#pragma once

class CCard;
class CCardFilter;
class CAbilityAction;
class CActionContainer;
class CUsageAbility;
class CAbilityAction;

//____________________________________________________________________________
//
class CORE_EXPORT CAbility
	: public CReferenceCounted<SingleThreadedPolicy>
	, public CTraitContainer_
	, noncopyable
{
protected:
	CAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType);
	virtual ~CAbility();

public:
	// Event Sources

	ResolutionCompletedEventSource* GetResolutionCompletedEventSource() const	{ return m_cpResolutionCompletedEventSource.GetPointer(); }
	VIRTUAL(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);

	typedef FastDelegate< bool ( CAbilityAction* pAction ) > ResolutionStartedCallback;
	void SetResolutionStartedCallback(ResolutionStartedCallback callback)		{ m_ResolutionStartedCallback = callback; }

	// Identity

	CCard* GetCard() const								{ return m_pCard; }

	CString GetAbilityName() const						{ return m_strAbilityName; }
	void SetAbilityName(LPCTSTR strAbilityName);

	CPlayer* GetController() const;
	void SetController(CPlayer* pPlayer)				{ m_pController = pPlayer; }

	/*
		Unique child ability name - constructed from ability name but a unique number is appended to make the name unique among all abilities owned by a card
		Class ID (USHORT) - each ability class will has a unique number
		Card ability class ID (ULONG) - owning card's class ID + this ability's class ID
		Instance ID - unique among all abilities
	*/

	static void ResetInstanceID()						{ s_uNextInstanceID = 1; }

	CString GetUniqueChildAbilityName() const			{ return m_strUniqueChildAbilityName; }

	DECLARE_GAME_CLASS_ID
	ULONG GetCardAbilityClassID() const;
	USHORT GetInstanceID() const						{ return m_uInstanceID; }

	// General Properties

	CGame* GetGame() const								{ return m_pGame; }

	SourceColor GetSourceColor() const;

	AbilityType GetAbilityType() const					{ return m_AbilityType; }
	void SetAbilityType(AbilityType abilityType)		{ m_AbilityType = abilityType; }

	CString GetAbilityText() const						{ return m_strAbilityText; }
	void SetAbilityText(LPCTSTR strAbilityText)			{ m_strAbilityText = strAbilityText; }

	AbilityTag GetAbilityTag() const					{ return m_AbilityTag; }
	void AddAbilityTag(AbilityTag tag)					{ m_AbilityTag |= tag; }
	void RemoveAbilityTag(AbilityTag tag)				{ m_AbilityTag &= ~tag; }

	BOOL IsSpell() const;

	// Action Properties

	void SetActionValue(const ContextValue& value)		{ m_ActionValue = value; }
	const ContextValue& GetActionValue() const			{ return m_ActionValue; }

	void SetExtraActionValueVector()							{ m_ExtraActionValueVector = m_ValidExtraActionValueVector; }
	void SetExtraActionValueVector(const ContextValue& vector)	{ m_ExtraActionValueVector = vector * m_ValidExtraActionValueVector; }
	const ContextValue& GetExtraActionValueVector() const		{ return m_ExtraActionValueVector; }

	// Usages

	void SetInPlayOnly();
	BOOL GetInPlayOnly() const;

	void SetHandOnly();
	BOOL GetHandOnly() const;

	void SetGraveyardOnly();

	VIRTUAL(ZoneId, GetPlayableFrom)() const			{ return m_PlayableFrom; }
	void SetPlayableFrom(ZoneId playableFrom);

	void SetAddPlayableFromCommanderZone();
	void SetRemovePlayableFromCommanderZone();

	void SetUseInSpecificNode(NodeId nodeId,			// NodeId::Null = any (default)
							  BOOL bNotYourTurn = FALSE,
							  BOOL bNotOpponentsTurn = FALSE);

	NodeId GetUseInSpecificNode() const					{ return m_UseOnlyInNode; }
	BOOL GetUseInOpponentsTurnOnly() const				{ return m_bUseOnlyInOpponentsTurn; }
	BOOL GetUseInYourTurnOnly() const					{ return m_bUseOnlyInYourTurn; }

	void SetMaxTurnUsageCount(DWORD dwMaxTurnUsageCount){ m_dwMaxTurnUsageCount = dwMaxTurnUsageCount; }
	DWORD GetTurnUsageCount()							{ return m_dwTurnUsageCount; }
	void ResetTurnUsageCount()							{ m_dwTurnUsageCount = 0; }

	DWORD GetTurnResolveCount()                         { return m_dwTurnResolveCount; }
	void ResetTurnResolveCount()						{ m_dwTurnResolveCount = 0; }

	VIRTUAL(void, SetEnabled)(BOOL bEnabled)			{ m_bEnabled = bEnabled; }
	BOOL GetEnabled() const								{ return m_bEnabled; }

	void SetMorph()                                     {m_pMorph = TRUE;}
	BOOL IsMorph()										{return m_pMorph;}

	// Costs

	void AddTapCost();
	void AddUntapCost();
	void AddSacrificeCost();
	void AddExileCost();
	void AddDiscardCost();
	void AddPayLifeDeltaCost(Life nLifeDelta);			// Supports SpecialNumber

	CString GetStaticCostText() const					{ return m_strStaticCostText; }
	void SetStaticCostText(LPCTSTR strStaticCostText)	{ m_strStaticCostText = strStaticCostText; }

	const CCost_& GetCost() const						{ return m_Cost; }
	CCost_& GetCost()									{ return m_Cost; }

	void SetCost(CCost_& pCost)									{m_Cost = pCost;}

	// Resolutions

	CSubjectModifier& GetResolutionModifier()				{ return m_ResolutionModifier; }
	const CSubjectModifier& GetResolutionModifier() const	{ return m_ResolutionModifier; }

	BOOL Resolve(const CAbilityAction* pAction, BOOL bCountered = FALSE);

	// Public Overrides

	VIRTUAL(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	VIRTUAL(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	VIRTUAL(BOOL, ConfirmTargetAndPayCost)(const CAbilityAction* pAction);

	// Usage Pattern

	void SetUsage(CPlayer* pPlayer, CUsageAbility* pUsage);
	CUsageAbility* GetComputerUsage() const							{ return m_pComputerUsage; }
	CUsageAbility* GetPlayerUsage(const CPlayer* pPlayer) const;

	// Misc

	void SkipPlayableCheck()	{ m_bSkipPlayableCheck = TRUE; }

protected:
	typedef std::map<const CPlayer*, CUsageAbility*> PlayerUsageAbilityMap;

	static USHORT	s_uNextInstanceID;

	// Protected Overrides

	VIRTUAL(counted_ptr<CAbilityAction>, CreateAction)() const;
	VIRTUAL(BOOL, IsPlayableWithTrait)(BOOL bIncludeTricks) const;
	VIRTUAL(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void SetUniqueChildAbilityName();
	void LogIllegalResolution(LPCSTR strFunction, LPCSTR strFile, int nLine) const;

	void SetValidExtraActionValueVector(const ContextValue& validExtraValueVector)
	{
		m_ValidExtraActionValueVector = validExtraValueVector;
	}

	const ContextValue& GetValidExtraActionValueVector() const { return m_ValidExtraActionValueVector; }

	USHORT			m_uInstanceID;

	CGame*			m_pGame;

	CCost_			m_Cost;

	CCard*			m_pCard;

	CString			m_strAbilityName;
	CString			m_strAbilityText;
	AbilityTag		m_AbilityTag;
	CString			m_strStaticCostText;
	ZoneId			m_PlayableFrom;
	CString			m_strUniqueChildAbilityName;
	CStateSupportEnumType<AbilityType> m_AbilityType;

	PlayerUsageAbilityMap	m_Usages;
	CUsageAbility*			m_pComputerUsage;
	BOOL_					m_bEnabled;

	NodeId			m_UseOnlyInNode;
	BOOL			m_bUseOnlyInOpponentsTurn;
	BOOL			m_bUseOnlyInYourTurn;
	DWORD			m_dwMaxTurnUsageCount;

	CSubjectModifier							m_ResolutionModifier;
	ResolutionStartedCallback					m_ResolutionStartedCallback;
	counted_ptr<ResolutionCompletedEventSource>	m_cpResolutionCompletedEventSource;
	DWORD_										m_dwTurnUsageCount;
	DWORD_										m_dwTurnResolveCount;

	ContextValue	m_ActionValue;
	ContextValue	m_ExtraActionValueVector;

private:
	ContextValue	m_ValidExtraActionValueVector;
	BOOL			m_bSkipPlayableCheck;
	BOOL			m_pMorph;
	CPlayer*		m_pController;
};

//____________________________________________________________________________
//
class CAbilityContainer
	: public CCountedPtrContainer<CAbility>
{
public:
	CAbility* GetAbility(LPCTSTR strAbilityName) const;

	void RemoveAbility(LPCTSTR strAbilityName);
};

class CAbilityContainer_
	: public CCountedPtrContainer_<CAbility, CAbilityContainer>
{
};
