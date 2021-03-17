#pragma once

class CManaProductionAbility;

class CORE_EXPORT CManaProductionHint
{
public:
	CManaProductionHint();

	void SetFromCard(CCard* pCard);

	bool HasHint() const { return GetSize() > 0; }

	int   GetSize() const;
	const CAbility*  GetAbilityAt(int nIndex)  const;
	const CManaPool& GetManaPoolAt(int nIndex) const;
	const CManaCost& GetManaCostAt(int nIndex) const;

protected:
	void Add(const CAbility* pAbility, const CManaPool& manaPool, const CManaCost* pManaCost = NULL);
	void RemoveAll();

	void SetFromCardAdd(CManaProductionAbility* pManaProductionAbility, const CManaCost* pCost = NULL);

	CValueContainer_<const CAbility*> m_Abilities;
	CManaPoolContainer_	m_ManaPools;
	CManaCostContainer_ m_ManaCosts;
};