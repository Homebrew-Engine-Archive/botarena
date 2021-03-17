#pragma once

//____________________________________________________________________________
//
	// Used in optimization:
	// Required transient actions are removed until only one transient action
	// with the same transient action identifier is left.
	//
	// Example:
	// Action_A and Action_B are transient actions iff
	// Perform(Action_A) ->then-> Perform(Action_B) ==
	// Perform(Action_B) ->then-> Perform(Action_A)
	//
	// and both Action_A and Action_B are *mandatory* which means even though
	// one of the action is removed in an early round, it will appear again in
	// a later consecutive round
	// 
	/*
	11/2/2003:

	Differences between Transient actions and No-State-Non-Stack actions:

	Transient actions are a more aggressive way to remove actions than NSNS actions. If multiple actions
	are of the same Transient ID, only one will be visible to the Minimax loop. In other words,
	Transient actions are artifically serialized to be visible to the Minimax loop one after another.
	This way, the ordering of performing these actions are artifically fixed and the computer will
	not spend time on deciding which one to perform first (e.g. in untaps). Consider the following:

		if both untap_A and untap_B are the available actions, untap_B will be removed and untap_A
		is the only action visible to minimax.

	By doing this, there will be only one sequeuce of transient actions need to be considered while
	NSNS actions may contribute to multiple minimax branches until hitting an already considered 
	sequenece before aborting.

	NSNS actions will not be removed from the Minimax loop unless there are multiple of these which
	are from the same Ability class. However, the thinking process will keep track of previously
	performed NSNS action groups during non-stack only sequences. Any previously performed combination
	will not be considered again, e.g. 

		action_Class_A_Ability_B -> action_Class_C_Ability_D -> action_Class_E_Ability_F ==
		action_Class_E_Ability_F -> action_Class_A_Ability_B -> action_Class_C_Ability_D

	Transient actions should never create multiple action sequences consisting of the same set of actions.

	1/1/2006:
	I think I would rename the NSNS actions to Basic Non-stack Actions. State has nothing to do with
	this class of actions. I think as long as the action has no side effects, e.g. performing action_A
	first will prevent action_B to be available but performing action_B first will not be the case.
	So no side-effect is 


	Basic Non-stack:
		* Mana producing ability of basic lands
		* Attack ability
		* Play land
		* Some kind of mana filter ability

	Transients:
		* Some untaps
		*

	*/

class CUndoAction;

class CORE_EXPORT CAction
	: public CReferenceCounted<SingleThreadedPolicy>
{
	friend class CActionContainer;
	friend class CActionContainerBase;
	friend class CGame;

	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	VIRTUAL(void, Copy)(const CAction* pAction);
	VIRTUAL(counted_ptr<CAction>, Clone)() const;	// 8/13/2001: Changed from Copy()
	VIRTUAL(bool, Equals)(const CAction* pAction) const;

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	VIRTUAL(void, ReleaseResources)() {}		// Release any referenced resources (needed in strategies)

	CGame* GetGame() const { return m_pGame; }

	// Action names

	int GetActionID() const	{ return m_nActionID; }

	void AppendToActionName(LPCTSTR strActionName);
	CString GetActionName() const;				// No cost information: "Action description"
	void SetActionName(LPCTSTR strActionName);

	void AppendToCostName(LPCTSTR strActionName);
	CString GetCostName() const;				// "{GGG}"
	void SetCostName(LPCTSTR strActionName);

	CString GetActionText() const;				// Includes cost information: "{GGG}: Action description"
	//DWORD GetActionType() const { return m_ActionType.Get(); }

	// Action types

	void SetDefaultAction();						// There can be only one default action in a single action container
	BOOL IsDefaultAction() const;

	void SetNodeAction();
	BOOL IsNodeAction() const;

	void SetStackPassAction();
	BOOL IsStackPassAction() const;

	void SetManaProducing();
	BOOL IsManaProducing() const;

	void SetFlashback();
	BOOL IsFlashback() const;

	void SetManaConsuming();
	BOOL IsManaConsuming() const;

	void SetManaFiltering();
	BOOL IsManaFiltering() const;

	void SetTrick(BOOL bTrick = TRUE);
	BOOL IsTrick() const;

	void SetUntapAction();
	BOOL IsUntapAction() const;

	void SetTapAction();
	BOOL IsTapAction() const;

	void SetBeginningCombat();
	BOOL IsBeginningCombat() const;

	void SetTargeting();
	BOOL IsTargeting() const;

	void SetDoubleTargeting();
	BOOL IsDoubleTargeting() const;

	void SetNonStackAction();
	BOOL IsNonStackAction() const;

	void SetBasicNonStackAction();				// No side-effects
	BOOL IsBasicNonStackAction() const;

	void SetAttack();
	BOOL IsAttack() const;

	void SetBlock();
	BOOL IsBlock() const;

	void SetPlayLand();
	BOOL IsPlayLand() const;

	void SetHideInConcise();
	BOOL IsHideInConcise() const;

	void SetAnnounce(BOOL bAnnouce = TRUE);
	BOOL IsAnnounce() const;

	void SetUndoable();
	BOOL IsUndoable() const;
	VIRTUAL(counted_ptr<CUndoAction>, CreateUndoAction)() const;

	void SetUndo();
	BOOL IsUndo() const;

	void SetSelectionIndex(int nIndex) { m_nSelectionIndex = nIndex; }

#ifdef M10_COMBAT
	void SetDamageAssignmentOrder();
	BOOL IsDamageAssignmentOrder() const;
#endif

	void SetCombatDamageAssignment();
	BOOL IsCombatDamageAssignment() const;

	void SetRequiredTransientActionId(ActionTransientId nTransientId);
	ActionTransientId GetRequiredTransientActionId() const;			// ActionTransientId::NotSupported (default) -> Not a transient action

	void SetTriggered();
	BOOL IsTriggered() const;

	// Associations

	CCard* GetOriginatingCard() const;				// Originating card is the card from which this action is produced. Not all actions have originating cards.
	void SetOriginatingCard(CCard* pOriginatingCard);

	void SetAssociatedCard(CCard* pAssociatedCard);
	VIRTUAL(CCard*, GetAssociatedCard)() const;		// Associated card is the card which may be affected by this action.

													// Actions derived from CTargetActionCommon:
													// Only actions with a single target will return a non-null value
													// if this is a targeting action. This function is currently only
													// used for UI purposes.

	void SetAssociatedPlayer(CPlayer* pAssociatedPlayer);
	VIRTUAL(CPlayer*, GetAssociatedPlayer)() const;	// Associated player is the player which may be affected by this action.

													// Actions derived from CTargetActionCommon:
													// Only actions with a single target will return a non-null value
													// if this is a targeting action. This function is currently only
													// used for UI purposes.


	// Opaque contexts

	void SetValue(const ContextValue& value);
	const ContextValue& GetValue() const;

	void SetScore(ActionScore score);
	ActionScore GetScore() const;

	BOOL PerformAction() const;

protected:
	static int s_nNextActionId;

	struct ActionType
	{
		enum Enum : DWORD
		{
			Null = 0,
			Default					= 0x00000001,
			ManaProducing			= 0x00000002,
			ManaConsuming			= 0x00000004,
			ManaFiltering			= 0x00000008,
			Nonstack				= 0x00000010,
			Trick					= 0x00000020,
			UntapAction				= 0x00000040,
			TapAction				= 0x00000080,
			BeginningCombat			= 0x00000100,
			Targeting				= 0x00000200,
			BasicNonstack			= 0x00000400,	// No side-effects, non-stack actions (See comments above)
			Attack					= 0x00000800,
			Block					= 0x00001000,
			PlayLand				= 0x00002000,
			Undo					= 0x00004000,
			Node					= 0x00008000,
			StackPass				= 0x00010000,
			CombatDamageAssignment	= 0x00020000,
#ifdef M10_COMBAT
			DamageAssignmentOrder	= 0x00040000,
#endif
			Triggered				= 0x00100000,
			DoubleTargeting			= 0x00200000,
			TripleTargeting			= 0x00400000,
			Flashback				= 0x00800000,
			Undoable				= 0x20000000,
			HideInConcise			= 0x40000000,
			Announce				= 0x80000000
		};

		DEFINE_BITFLAG_ENUM_OPS(ActionType, DWORD);
	};

	CAction(CGame* pGame);

	VIRTUAL(BOOL, PerformActionImpl)() const { return TRUE; }
	VIRTUAL(void, OnActionNotPerformed)() const {};		// Called by CActionContainer::PerformAction();
	CCard* GetAssociatedCardImpl() const;
	CPlayer* GetAssociatedPlayerImpl() const;

	CGame*			m_pGame;

	int				m_nActionID;

	ActionType		m_ActionType;
	ActionTransientId	m_TransientId;
	ActionScore		m_Score;

	CString			m_strCostName;
	CString			m_strActionName;

	ContextValue	m_Value;

	CCard*			m_pOriginatingCard;
	CCard*			m_pAssociatedCard;
	CPlayer*		m_pAssociatedPlayer;

	int				m_nSelectionIndex;
};

//____________________________________________________________________________
//
class CActionContainer
	: public CCountedPtrContainer<CAction>
{
public:
	void AddClones(const CActionContainer& actionContainer)
	{
		int nActionCount = actionContainer.GetSize();
		if (!nActionCount)
			return;

		for (int i = 0; i < nActionCount; ++i)
			__super::Add(actionContainer.GetAt(i)->Clone().GetPointer());
	}

	void Sort(BOOL bAscending = FALSE);		// Sort actions by Action Score, default is descending order

	BOOL PerformAction(int nIndex) const;

	void RemoveByID(int nActionID)
	{
		int nActionCount = GetSize();
		if (!nActionCount)
			return;

		for (int i = 0; i < nActionCount; ++i)
			if (GetAt(i)->GetActionID() == nActionID)
			{
				__super::RemoveAt(i);
				return;
			}
	}
};

//____________________________________________________________________________
//
class CActionContainer_
	: protected CCountedPtrContainer_<CAction, CActionContainer>
{
};

//____________________________________________________________________________
//
class CTriggeredAction;

class CORE_EXPORT CTriggeredActionContainer
	: protected CActionContainer_
{
public:
	void Add(CTriggeredAction* pTriggeredAction);

	counted_ptr<CTriggeredAction> GetActionAt(int nIndex) const	
	{ 
		return counted_ptr<CTriggeredAction>((CTriggeredAction*)__super::GetAt(nIndex).GetPointer()); 
	}

	void SetActionAt(int nIndex, CTriggeredAction* pAction);
	void RemoveAll()										{ __super::RemoveAll(); }

	int GetSize() const										{ return __super::GetSize(); }

	void RemoveByID(int nActionID)							{ __super::RemoveByID(nActionID); }

	operator const CActionContainer&()						{ return *this; }
};

//____________________________________________________________________________
//
class CStrategy
	: protected CActionContainer
{
public:
	void Add(CAction* pAction)				
	{ 
		pAction->ReleaseResources();
		__super::Add(pAction); 
	}

	void Add(const CStrategy& strategy)			{ __super::Add(strategy); }

	counted_ptr<CAction> GetFirstAction()			{ return __super::GetAt(0); }

	void RemoveFirstAction()						{ __super::RemoveAt(0); }
	void RemoveAll()							{ __super::RemoveAll(); }

	int GetSize() const							{ return __super::GetSize(); }

	counted_ptr<CAction> GetActionAt(int nIndex) const	
	{ 
		return __super::GetAt(nIndex); 
	}
};
