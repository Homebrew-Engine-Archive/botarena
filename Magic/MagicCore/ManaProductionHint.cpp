#include "stdafx.h"

#define new DEBUG_NEW

CManaProductionHint::CManaProductionHint()
{
}

void CManaProductionHint::Add(const CAbility* pAbility, 
							  const CManaPool& manaPool, const CManaCost* pManaCost)
{
	if (pManaCost)
	{
		if (manaPool.GetMana(CManaPool::Color::Black)	  == pManaCost->GetCost(CManaCost::Color::Black) &&
			manaPool.GetMana(CManaPool::Color::Blue)	  == pManaCost->GetCost(CManaCost::Color::Blue)  &&
			manaPool.GetMana(CManaPool::Color::Green)	  == pManaCost->GetCost(CManaCost::Color::Green) &&
			manaPool.GetMana(CManaPool::Color::Red)		  == pManaCost->GetCost(CManaCost::Color::Red)	 &&
			manaPool.GetMana(CManaPool::Color::White)	  == pManaCost->GetCost(CManaCost::Color::White) &&
			manaPool.GetMana(CManaPool::Color::Colorless) == pManaCost->GetCost(CManaCost::Color::Generic))
			return;

		m_ManaCosts.Add(*pManaCost);
	}
	else
	{
		m_ManaCosts.Add(CManaCost());
	}

	m_ManaPools.Add(manaPool);
	m_Abilities.Add(pAbility);
}

void CManaProductionHint::RemoveAll()
{
	m_Abilities.RemoveAll();
	m_ManaPools.RemoveAll();
	m_ManaCosts.RemoveAll();
}

int CManaProductionHint::GetSize() const
{
	return m_Abilities.GetSize();
}

const CAbility* CManaProductionHint::GetAbilityAt(int nIndex) const
{
	return m_Abilities.GetAt(nIndex);
}

const CManaPool& CManaProductionHint::GetManaPoolAt(int nIndex) const
{
	return m_ManaPools.GetAt(nIndex);
}

const CManaCost& CManaProductionHint::GetManaCostAt(int nIndex) const
{
	return m_ManaCosts.GetAt(nIndex);
}

void CManaProductionHint::SetFromCardAdd(CManaProductionAbility* pManaProductionAbility, const CManaCost* pCost)
{
	Add(pManaProductionAbility, pManaProductionAbility->GetManaPool(), pCost);
}

void CManaProductionHint::SetFromCard(CCard* pCard)
{
	RemoveAll();

	for (int i = 0; i < pCard->GetAbilityCount(); ++i)
	{
		CAbility* pAbility = pCard->GetAbility(i);
		CManaFilterAbility* pManaFilterAbility = dynamic_cast<CManaFilterAbility*>(pAbility);
		if (pManaFilterAbility && pManaFilterAbility->GetEnabled())
		{
			CManaCost cost(pManaFilterAbility->GetCost().GetManaCost());

			DWORD dwGenericCost = cost.GetCost(CManaCost::Color::Generic);
			if (!dwGenericCost)
			{
				SetFromCardAdd(pManaFilterAbility, &cost);
				continue;
			}

			// Expand generic cost into specific usage scenarios

			CManaCost colorCost(cost);
			colorCost.SetCost(CManaCost::Color::Generic, 0);

			static const CManaCost::Color costColors[] = {
				CManaCost::Color::Black,
				CManaCost::Color::Blue,
				CManaCost::Color::Green,
				CManaCost::Color::Red,
				CManaCost::Color::White,
				CManaCost::Color::Generic
			};
			
			IntArray bound;
			IntArray current;

			bound.resize(dwGenericCost);
			current.resize(dwGenericCost);

			for (DWORD i = 0; i < dwGenericCost; ++i)
			{
				bound[i]   = ARRAY_SIZE(costColors) - 1;	// Generates 0..5
				current[i] = 0;
			}

			std::set< CString > allCosts;
			do
			{
				CManaCost cost(colorCost);

				for (DWORD i = 0; i < dwGenericCost; ++i)
					cost.AddCost(costColors[current[i]], 1);

				if (!allCosts.count(cost.ToString()))
				{
					SetFromCardAdd(pManaFilterAbility, &cost);
					allCosts.insert(cost.ToString());
				}

			} while (Permutation(bound, dwGenericCost, current, FALSE, FALSE));

			continue;
		}

		CManaFilterSpell* pManaFilterSpell = dynamic_cast<CManaFilterSpell*>(pAbility);
		if (pManaFilterSpell)
		{
			CManaCost cost(pManaFilterSpell->GetCost().GetManaCost());

			DWORD dwGenericCost = cost.GetCost(CManaCost::Color::Generic);
			if (!dwGenericCost)
			{
				Add(pManaFilterSpell, pManaFilterSpell->GetManaPool(), &cost);
				continue;
			}

			// Expand generic cost into specific usage scenarios

			CManaCost colorCost(cost);
			colorCost.SetCost(CManaCost::Color::Generic, 0);

			static const CManaCost::Color costColors[] = {
				CManaCost::Color::Black,
				CManaCost::Color::Blue,
				CManaCost::Color::Green,
				CManaCost::Color::Red,
				CManaCost::Color::White,
				CManaCost::Color::Generic
			};
			
			IntArray bound;
			IntArray current;

			bound.resize(dwGenericCost);
			current.resize(dwGenericCost);

			for (DWORD i = 0; i < dwGenericCost; ++i)
			{
				bound[i]   = ARRAY_SIZE(costColors) - 1;	// Generates 0..5
				current[i] = 0;
			}

			std::set< CString > allCosts;
			do
			{
				CManaCost cost(colorCost);

				for (DWORD i = 0; i < dwGenericCost; ++i)
					cost.AddCost(costColors[current[i]], 1);


				if (!allCosts.count(cost.ToString()))
				{
					Add(pManaFilterSpell, pManaFilterSpell->GetManaPool(), &cost);
					allCosts.insert(cost.ToString());
				}

			} while (Permutation(bound, dwGenericCost, current, FALSE, FALSE));

			continue;
		}

		CManaProductionAbility* pManaProductionAbility = dynamic_cast<CManaProductionAbility*>(pAbility);
		if (pManaProductionAbility)
			SetFromCardAdd(pManaProductionAbility);
	}

	if (GetSize() <= 1)
	{
		if (!GetSize())
			return;

		if (!m_ManaCosts.GetAt(0).GetTotal())
		{
			RemoveAll();
			return;
		}
	}

#ifdef _MY_DEBUG
	ATLTRACE(_T("Mana production hint for card: %s (%d)\n"), pCard->GetCardName(), m_Abilities.GetSize());
	for (int i = 0; i < m_Abilities.GetSize(); ++i)
	{
		ATLTRACE(_T("\tAbility: %s (%08x), Cost: %s, Pool: %s\n"),
			m_Abilities[i]->GetAbilityName(),
			m_Abilities[i],
			m_ManaCosts[i].ToString(),
			m_ManaPools[i].ToString());
	}
#endif
}