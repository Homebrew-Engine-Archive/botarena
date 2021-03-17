#pragma once

class CPlaneswalkerCard;

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureCard : public CInPlaySpellCard
{
protected:
	CCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
				  LPCTSTR strCostText, Power nPower, Life nToughness,
				  AbilityType abilityType = AbilityType::Creature);
	virtual ~CCreatureCard();

public:
	// Event Sources

	AttackedPlayerEventSource* GetAttackedPlayerEventSource() const			{ return m_cpAttackedPlayerEventSource.GetPointer(); }

	BlockedByCreatureEventSource* GetBlockedByCreatureEventSource() const	{ return m_cpBlockedByCreatureEventSource.GetPointer(); }
	BlockedCreatureEventSource* GetBlockedCreatureEventSource() const		{ return m_cpBlockedCreatureEventSource.GetPointer(); }

	// OnCreatureTypeChanged(CCard* pCard)
	CreatureTypeEventSource* GetCreatureTypeEventSource() const			{ return m_cpCreatureTypeEventSource.GetPointer(); }

	CCreatureKeyword* GetCreatureKeyword() const							{ return m_cpCreatureKeyword.GetPointer(); }
	CCreatureFlag* GetCreatureFlag() const									{ return m_cpCreatureFlag.GetPointer(); }

	// Life

	Life GetPrintedToughness() const;
	void SetPrintedToughness(Life nLife);

	Life GetLife() const;
	Life GetToughness() const;
	Life GetDamage() const;
	Life GetPermanentLifeModifier() const                                  { return m_nPermanentLifeModifier; }
	void SetDamage(Life nLife);
	void SetLife(const CCard* pSourceCard, Life nLife );	// Set to base
	void ChangeLife(Damage damage, BOOL bToBase);

	Life GetPermanentLife() const;
	void SetPermanentLife(Life nToughness, BOOL bToBase);
	void DecreasePermanentLife(Life nToughness, BOOL bToBase);
	void IncreasePermanentLife(Life nToughness, BOOL bToBase);

	Life GetLastKnownToughness() const; // return last known toughness before leaving battlefield (if in battlefield or never in battlefield, same as GetLife())

	//  Power

	Power GetPrintedPower() const;
	void SetPrintedPower(Power nPower);

	Power GetPower() const;
	Power GetDisplayPower() const
	{
		return (GetCreatureKeyword()->SwitchedPT() ?
			Power(GET_INTEGER(m_nTurnLifeModifier + m_nTurnLifeBase))
			: m_nPowerModifier + m_nPowerBase);
	}
	void SetPower(Power nPower, BOOL bToBase);
	void DecreasePower(Power nPower, BOOL bToBase);
	void IncreasePower(Power nPower, BOOL bToBase);

	Power GetPermanentPower() const;
	void SetPermanentPower(Power nPower, BOOL bToBase);
	void DecreasePermanentPower(Power nPower, BOOL bToBase);
	void IncreasePermanentPower(Power nPower, BOOL bToBase);

	Power GetLastKnownPower() const; // return last known power before leaving battlefield (if in battlefied or never in battlefied, same as GetPower())


	const CDamagePrevention_& GetDamagePrevention() const;
	CDamagePrevention_& GetDamagePrevention();

	const CDamageRedirection_& GetDamageRedirection() const;
	CDamageRedirection_& GetDamageRedirection();

	void AddRegenerationShield();
	int GetRegenerationShields() const;
	BOOL Regenerate();
	BOOL TotemArmor();
	int GetRegenerationsThisTurn() { return m_nRegenerationsThisTurn; }
	
	void ResetCreatureAttributesToPrinted();
	void RemoveFromCombat(BOOL bAdjustOthers);
	int GetBlazingEffigyDamage()	{ return m_nBlazingEffigyDamage; }
	int GetDamageTakenThisTurn()	{ return m_nDamageTakenThisTurn; }
	void ZeroCounts(bool TurnClearOnly);

	CString GetPowerToughnessText(BOOL bIncludeDetails) const;
	CString GetCreatureName(BOOL bIncludeDetails) const;

	bool IsAttacking() const;
	bool IsAttacking(const CCreatureCard* pBlocker) const;
	bool AttackedThisTurn()	const	{ return m_cpCreatureFlag->HasAttacked(); }
	bool AttackedLastTurn(CPlayer* pPlayer) const {return m_pAttackedLastTurn.FindIndex(pPlayer) != -1; }

	CPlayer* GetAttackedPlayer() const;
	CPlaneswalkerCard* GetAttackedPlaneswalker() const;
	void Attack(CPlayer* pPlayer);
	void Attack(CPlaneswalkerCard* pPlaneswalker);
	CAttackAbility* GetAttackAbility() {return m_pAttackAbility;}

	void AddBlockedBy(CCreatureCard* pBlocker);
	void RemoveBlockedBy(CCreatureCard* pBlocker);
	const CCountedCardContainer_& GetBlockedBy() const;
	int GetBlockedByCount() const;
	void RemoveAllBlockedBy(BOOL bUpdateBlockers);
	bool IsBlocked() const			{ return m_cpCreatureFlag->IsBlocked(); }

	BOOL CanAttackInGeneral() const;									// For display purpose
	BOOL CanBlockInGeneral(const CCreatureCard* pCreatureCard) const;	// To use with the Lure creature attribute

	bool IsBlocking() const;
	bool IsBlocking(const CCreatureCard* pAttacker) const;
	int GetBlockingCount() const;
	int GetMaxBlockingCount() const;
	void SetMaxBlockingCount(int nMaxBlockingCount);
	const CCountedCardContainer_& GetBlocking() const;
	void AddBlocking(CCreatureCard* pAttacker);	
	void RemoveBlocking(CCreatureCard* pAttacker, BOOL bAdjustAttacker);
	void RemoveAllBlocking(BOOL bAdjustAttacker);

	void AssignUnblockedCombatDamage();
	void AssignSimpleCombatDamage();
	BOOL RequireCombatDamageAssignment() const;
	BOOL HasLethalDamage(Life nConsiderThisDamageToo = Life(0)) const;
#ifdef M10_COMBAT
	BOOL IsDamageAssignmentOrdered(); // may change m_bDamageAssignmentOrdered for simple orders
	void OrderDamageAssignment(const CSubjectGroup& creatures);
#endif

	const CreatureType_& GetCreatureType() const;
	CreatureType_& GetCreatureType();

	BOOL IsLandWalkOkay(const CPlayer* pPlayer) const;
	BOOL IsUnblockableWalkOkay(const CPlayer* pPlayer) const;

/*	5/30/2002 moved to CCleanUpNode2::OnAfterEntry()
	static void OnCurrentNodeChanged(PVOID pContext, CGameEvent* pGameEvent);
*/

	OVERRIDE(int, GetScore)() const;

	OVERRIDE(void, ResetTurnProperties)();
	OVERRIDE(void, ResetProperties)();

	//void SetSuspend(BOOL bSuspend);
	
	BOOL CheckDying(BOOL bCheckOnly);
	void Die();

	OVERRIDE(void, Move)(CZone* pToZone,
						 const CPlayer* pByPlayer,		// Card moved by this player (NULL if not applicable)
						 MoveType moveType,
						 CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	void ChangeLifeImpl(Damage damage, BOOL bToBase);
	void OnDamageRedirectionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnDamageReplacementSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void ResetCreatureAttributes(BOOL bClearTurnEffectsAlso);

	CreatureType_					m_CreatureType;
	const CreatureType				m_PrintedCreatureType; // Non state safe, as it should never change.
	counted_ptr<CCreatureKeyword>	m_cpCreatureKeyword;
	counted_ptr<CCreatureFlag>		m_cpCreatureFlag;

	//BOOL_							m_bSuspend;		// Currently only suspend dying check

	// Combat

	CAttackAbility*							m_pAttackAbility;
	CBlockAbility*							m_pBlockAbility;
	CCombatDamageAssignmentAbility*			m_pCombatDamageAssignmentAbility;

	CStateSupportPtrType<CPlayer>			m_pAttackedPlayer;
	CStateSupportPtrType<CPlaneswalkerCard>	m_pAttackedPlaneswalker;
	CCountedCardContainer_					m_BlockedBy;
	int_									m_nMaxBlockedCount;
	CCountedCardContainer_					m_BlockedAttackers;
#ifdef M10_COMBAT
	BOOL_									m_bDamageAssignmentOrdered;
#endif

	// Combat Events

	counted_ptr<AttackedPlayerEventSource>		m_cpAttackedPlayerEventSource;
	counted_ptr<BlockedByCreatureEventSource>	m_cpBlockedByCreatureEventSource;
	counted_ptr<BlockedCreatureEventSource>		m_cpBlockedCreatureEventSource;

	// Power

	Power_				m_nPrintedPower;
	Power_				m_nPermanentPowerModifier;
	Power_				m_nPermanentPowerBase;		// Base value reference:
													// Nightmare - power and toughness are linked to no. of swamps controlled
													// by the player. The 'link' will only modify the 'base' values. It will
													// not affect the 'modifier' part of the power/toughness if there are other
													// enchant(ment)s or spells giving the creature +x/+x or -x/-x.
	Power_				m_nTurnPowerModifier;		// For effect which set the creature's power to a certain value but only for this turn
	Power_				m_nTurnPowerBase;
	Power_				m_nPowerModifier;
	Power_				m_nPowerBase;

	Power_				m_nLastKnownPower;

	// Toughness & Life

	Life_				m_nPrintedToughness;
	Life_				m_nPermanentLifeModifier;	// Resets to Printed values when leaves in-play
	Life_				m_nPermanentLifeBase;
	Life_				m_nTurnLifeModifier;		// For effect which set the creature's power to a certain value but only for this turn. Resets to Permanent values at end of turn
	Life_				m_nTurnLifeBase;
	Life_				m_nLifeModifier;			// Resets to Turn values when regenerated
	Life_				m_nLifeBase;

	Life_				m_nLastKnownToughness;

	int_				m_nRegenerationCount;
	int_				m_nRegenerationsThisTurn;
	int_                m_nDamageTakenThisTurn;
	int_                m_nBlazingEffigyDamage;
	CPlayerContainer	m_pAttackedLastTurn;

	CDamagePrevention_	m_DamagePrevention;
	CDamageRedirection_	m_DamageRedirection;
	CSelectionSupport	m_DamageRedirectionSelection;
	CSelectionSupport	m_DamageReplacementSelection;

	void OnRegenerationSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_RegenerationSelection;

	counted_ptr<CreatureTypeEventSource>				m_cpCreatureTypeEventSource;

};

//____________________________________________________________________________
//
