#include "stdafx.h"

#define new DEBUG_NEW

const CString TapCostBase<>::sText=_T("{T} %s");
const CString UntapCostBase<>::sText=_T("{Q} %s");
const CString RevealCostBase::sText=_T("Reveal %s");
const CString SacrificeCostBase::sText=_T("Sacrifice %s");
const CString ReturnCostBase::sText=_T("Return from the battlefield to your hand %s");
const CString ExileCostBase::sText=_T("Exile %s");
const CString DiscardCostBase::sText=_T("Discard %s");
const CString ExileHandCostBase::sText=_T("Exile %s");
const CString ExileGraveyardCostBase::sText=_T("Exile from Graveyard %s");
const CString ExileStackCostBase::sText=_T("Exile from Stack %s");
//____________________________________________________________________________
//
BOOL CBaseManaCostEntry::PayCost(CPlayer* pByPlayer) const
{
	BOOL bResult = TRUE;
	if (m_ManaPool.GetTotal())
	{
		CManaPool_& controllerPool = pByPlayer->GetManaPool();
		bResult = controllerPool.RemoveMana2(m_ManaPool, true);

#if 1	// 8/14/2001: To prevent leaving manas in mana pool after each mana consuming move
		if (pByPlayer->GetGame()->IsThinking() &&
			controllerPool.GetTotal())
		{
			pByPlayer->GetGame()->AddSearchBreak(SearchBreak::TooMuchMana);
		}
#endif

	}
	return bResult;
}

//____________________________________________________________________________
//
BOOL CPlayerLifeCostEntry::PayCost(CPlayer* pByPlayer) const
{
	if (m_pPlayerLifeToPay && m_PlayerLifeCost.GetLifeDelta() != Life(0))
		m_PlayerLifeCost.ApplyTo(m_pPlayerLifeToPay);
	return TRUE;
}

BOOL CPlayerLifeCost::IsPlayable
						(const CPlayer* pByPlayer,
						  const Life& nLife) const
{
	if (!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nDelta)) &&
				m_nDelta < Life(0) &&
				pByPlayer->GetLife() < -nLife)
		return FALSE;
	return !pByPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife);
}
bool CPlayerLifeCost::GetConfigurations
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const
{
#if 1	// 2/11/2005: Added support for variable amount of life cost
	if ((!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nDelta)) &&
		(m_nDelta < Life(0))) ||
		m_nDelta == Life(SpecialNumber::DivideBy2RoundUp) ||
		m_nDelta == Life(SpecialNumber::DivideBy2RoundDown))
	{
		if(configurations.empty())
			configurations.push_back(CCostConfigEntry());

		for (size_t i = start; i < configurations.size(); ++i)
		{
			CCostConfigEntry& costConfig = configurations[i];
			Life reduction=costConfig.GetPlayerLifeCost() + m_nDelta;
			if(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nDelta)) &&
				reduction!=Life(0))
			{
				if(pByPlayer->GetGame()->IsThinking() && 
					reduction>Life(3))	// Limit amount of life pay by computer to 3 max (multikicker)
					return false;
			}
			else
			{
				reduction-=m_nDelta;		//undo
				int playerLife=GET_INTEGER(pByPlayer->GetLife());
				if(m_nDelta == Life(SpecialNumber::DivideBy2RoundUp))
					playerLife++;
				playerLife/=2;
				reduction=Life(-playerLife)+reduction;
			}
			if(!IsPlayable(pByPlayer, reduction))
				return false;

			costConfig.GetCosts().pushBack(new OutType(m_pDecreaseSource,
				m_pDecreaseSource->GetController(),
				m_nDelta));

			if (bSetNames)
			{
				CString strCostName;

				if (m_nDelta == Life(SpecialNumber::DivideBy2RoundUp))
					strCostName = _T("Pay half your life, rounded up");
				else
					if (m_nDelta == Life(SpecialNumber::DivideBy2RoundDown))
						strCostName = _T("Pay half your life, rounded down");
					else
						strCostName.Format(_T("Pay %d life"), -m_nDelta);

				costConfig.GetCosts().back()->AppendToCostName(strCostName);
			}
		}
	}
	else
		// Unlimited amount of life
		if (m_nDelta == Life(SpecialNumber::Any))
		{
			CostConfigurationArray configurations2;

			Life nPlayerLife(pByPlayer->GetLife());

			if (pByPlayer->GetGame()->IsThinking())
				if (nPlayerLife > Life(3))
					nPlayerLife = Life(3);	// Limit amount of life pay by computer to 3 max

			OutType* pEntry;
			const size_t end=configurations.size();
			for (size_t i = start; i < end; ++i)
			{
				CCostConfigEntry* costConfig = &configurations[i];
				Life reduction=costConfig->GetPlayerLifeCost();

				for (int j=0; j <= GET_INTEGER(nPlayerLife); ++j,--reduction)
				{
					if(j==0)
					{
						pEntry=new OutType(m_pDecreaseSource,
							m_pDecreaseSource->GetController(),
							Life(-j));
						ATLASSERT(pEntry);
						costConfig->GetCosts().pushBack(pEntry);
						ATLASSERT(costConfig->GetExtraValue()==0);
						costConfig->SetExtraValue(j);
					}
					else 
					{
						configurations.push_back(*costConfig);
						costConfig=&configurations.back();
						pEntry=&costConfig->GetCosts().last().downcast<CPlayerLifeCostEntry>();
						(*pEntry)->m_PlayerLifeCost.SetLifeDelta(Life(-j));
						costConfig->SetExtraValue(j);
					}

					if (bSetNames)
					{
						CString strCostName;

						strCostName.Format(_T("Pay %d life (X=%d)"), j, j);

						(*pEntry)->ResetCostName(strCostName);
					}
				}
			}
		}
	return true;
#else
	/*
	for (int i = 0; i < configurations.GetSize(); ++i)
	{
		CCostConfigEntry& costConfig = configurations[i];

		costConfig.AddDecreasePlayerLifeCost(m_pDecreaseSource,
												m_pDecreaseSource->GetController(),
												m_nDecreasePlayerLifeCost);

		if (bSetNames)
		{
			CString strCostName;
			strCostName.Format(_T("Pay %d life"), m_nDecreasePlayerLifeCost);
			costConfig.AppendToCostName(strCostName);
		}
	}
	*/
#endif
}

//____________________________________________________________________________
//
	BOOL RevealCostBase::PayCost(CCard*const& pCard, const CPlayer* pByPlayer)
	{
		CString strMessage;
		CZone* pZone = pByPlayer->GetZoneById(ZoneId::Hand);
		CPlayer* pController=pCard->GetController();
		CGame* pGame=pController->GetGame();
		if (!pGame->IsThinking())
		{
			strMessage.Format(_T("%s reveals %s in %s's %s"), 
				pController->GetPlayerName(), pCard->GetCardName(),
				pController->GetPlayerName(),
				pZone->GetZoneName());
			pGame->Message(
				strMessage, 
				pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
				MessageImportance::High
				);	

			for (int j = 0; j < pGame->GetPlayerCount(); ++j)
			{
				//if (pGame->GetPlayer(j)->IsComputer())
				//	pGame->GetPlayer(j)->RemoveStrategy(StrategyRemovalReason::RevealLibrary);

				pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}
		return TRUE;
	}

//____________________________________________________________________________
//
	bool CounterCostBase::IsPlayable(const CCard* pCard, const CPlayer* pByPlayer) const
	{
		const Counter* pCounter = pCard->GetCounterContainer()->GetCounter(m_pCounterName);
		
		if (!pCounter) return false;

		if (m_nCounterCost>0)
		{
			if (pCard->GetCardKeyword()->HasCantGetCounters())
				return false;

			const BOOL stopped = pCounter->IsStopped();

			if (stopped == FALSE) return true;
			else return false;
		}

		return pCounter && (pCounter->GetCount() + m_nCounterCost >=0);
	}
	BOOL CounterCostBase::PayCost(CCard*const& pCard, const CPlayer* pByPlayer) const
	{
		Counter* pCounter = pCard->GetCounterContainer()->GetCounter(m_pCounterName);
		int nCount = pCounter->GetCount();
		int old = nCount;
		nCount += m_nCounterCost;
		if(nCount < 0)
		{
			pCounter->SetCount(0);
			return FALSE;
		}
		pCounter->SetCount(nCount);
		const_cast<CCard*>(pCard)->CounterMoved(pCard, m_pCounterName, old, nCount);
		return TRUE;
	}

//____________________________________________________________________________
//
	BOOL CThisCounterCostEntry::PayCost(CPlayer* pByPlayer) const
	{
		BOOL bResult=TRUE;
		int nCount = m_pCounter->GetCount();
		int old = nCount;
		nCount += m_nCounterCost;
		if (nCount < 0)
		{
			nCount = 0;
			bResult = FALSE;
		}
		if (nCount == 0 && m_pCounter->GetName() == LOYALTY_COUNTER)
				pByPlayer->GetGame()->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);

		m_pCounter->SetCount(nCount);
		
		m_pCounterCard->CounterMoved(m_pCounterCard, m_pCounter->GetName(), old, nCount);
		return bResult;
	}

	CThisCounterCost::CThisCounterCost(Counter* c,int n)
		: m_pCounterCard(const_cast<CounterContainer*>(c->GetContainer())->GetCard())
		, m_pCounter(c)
		, m_nCounterCost(n)
	{}

	BOOL CThisCounterCost::IsPlayable
						(const CPlayer* pByPlayer,
						  BOOL bIncludeTricks,
						  BOOL bAssumeSufficientMana) const
		{
			if ((m_nCounterCost == SpecialNumber::AnyNegative) || (m_nCounterCost == SpecialNumber::All))
			{
				if (!m_pCounter->GetCount()) return FALSE;
			}
			else if (m_nCounterCost < 0)
			{
				if (m_pCounter->GetCount() + m_nCounterCost < 0) return FALSE;
			}
			else if (m_pCounter->IsStopped()) return FALSE;
			else if (m_pCounterCard->GetCardKeyword()->HasCantGetCounters()) return FALSE;
			return TRUE;
		}

	bool CThisCounterCost::GetConfigurations
						(const CPlayer* pByPlayer, 
						  BOOL bIncludeTricks, BOOL bSetNames,
						  CostConfigurationArray& configurations,
						  size_t start) const
		{
	typedef CounterCostBase::EntryType Other;	//can't be target of AnyCardCounterCost!
			if (!configurations.size())
				configurations.push_back(CCostConfigEntry());

			size_t end=configurations.size();

			int nMinCounters;
			int nMaxCounters;
			if (m_nCounterCost == SpecialNumber::AnyNegative)
			{
				nMinCounters = -m_pCounter->GetCount();
				nMaxCounters = -1;  // zero minimum not currently supported
			}
			else if (m_nCounterCost == SpecialNumber::All)
			{
				nMinCounters = -m_pCounter->GetCount();
				nMaxCounters = -m_pCounter->GetCount();
			}
			else
			{
				nMinCounters = m_nCounterCost;
				nMaxCounters = m_nCounterCost;
			}

			OutType* pEntry;
			for (size_t i = start; i < end; ++i)
			{
				CCostConfigEntry* costConfig = &configurations[i];
				ATLASSERT(!costConfig->GetCosts().findid<Other>());

				for (int j = nMinCounters; j <= nMaxCounters; ++j)
				{
					if(j==nMinCounters)
					{
						pEntry=new OutType(m_pCounterCard,m_pCounter,j);
						ATLASSERT(pEntry);
						costConfig->GetCosts().pushBack(pEntry);
						if(SpecialNumber::IsSpecialNumber(m_nCounterCost))
							costConfig->SetExtraValue(j);
					}
					else 
					{
						configurations.push_back(*costConfig);
						costConfig=&configurations.back();
						pEntry=&costConfig->GetCosts().last().downcast<CThisCounterCostEntry>();
						(*pEntry)->m_nCounterCost=j;
						if(SpecialNumber::IsSpecialNumber(m_nCounterCost))
							costConfig->SetExtraValue(j);
					}

					if (bSetNames)
					{
						CString strCostName;

						if (m_nCounterCost > 0)
							strCostName.Format(_T("+%d"), j);
						else
							strCostName.Format(_T("%d"), j);
						if (m_pCounter->GetName() != LOYALTY_COUNTER)
								strCostName+=_T(" ")+m_pCounter->GetName();

						(*pEntry)->ResetCostName(strCostName);
					}
				}
			}
			return true;
		}

//____________________________________________________________________________
//
CCostConfigEntry::CCostConfigEntry()
	: m_CostEntryList()
	, m_OptionalCosts(NULL)
	, m_nExtraValue(0)
{
}

CCostConfigEntry::CCostConfigEntry(const CCostConfigEntry& CostConfigEntry)
	: m_CostEntryList()
	, m_OptionalCosts(NULL)
	, m_nExtraValue(0)
{
	operator=(CostConfigEntry);
}

bool CCostConfigEntry::HasOptionalManaCost(const CManaCost& manaCost) const
{
	for (size_t i = 0; i != m_OptionalCosts.size(); ++i)
		if (m_OptionalCosts[i]->m_ManaCost == manaCost)
			return true;

	return false;
}

//bool CCostConfigEntry::HasOptionalCost(const CManaCost& manaCost) const
//{
//	for (ArrayConstIterator i = m_OptionalCosts.begin(); i ; ++i)
//		if ((*i)->m_ManaCost == manaCost)
//			return true;
//
//	return false;
//}

void CCostConfigEntry::AppendToCostName(LPCTSTR strCostName)
{
	if (_tcslen(m_strCostName))
		m_strCostName += _T(", ");
	m_strCostName += strCostName;
}

CString CCostConfigEntry::GetCostName() const
{
	CString out;
	for(ConstIterator i=m_CostEntryList.begin();i;++i)
		if(_tcslen(out+=i->GetCostName()))
			out+=_T(", ");
	for(size_t i=0; i<m_OptionalCosts.size();++i)
		for(ConstIterator j=++(m_OptionalCosts[i].begin()); j; ++j)
			if(_tcslen(out+=j->GetCostName()))
				out+=_T(", ");
	if(_tcslen(out) && !_tcslen(m_strCostName))
		out.Truncate(out.GetLength()-2);
	else if(!_tcslen(out))
	{
		if(m_nExtraValue)
			out.Format(_T("{0}, (X=%d)"),m_nExtraValue);
		else
			out=_T("{0}");
		if(_tcslen(m_strCostName))
			out+=", ";
	}
	return out+m_strCostName;
}

CCostConfigEntry& CCostConfigEntry::operator=(const CCostConfigEntry& CostConfigEntry)
{
	if (this == &CostConfigEntry)
		return *this;

	m_CostEntryList = CostConfigEntry.m_CostEntryList;
	m_OptionalCosts = CostConfigEntry.m_OptionalCosts;
	m_nExtraValue = CostConfigEntry.m_nExtraValue;

	m_strCostName = CostConfigEntry.m_strCostName;

	return *this;
}

bool CCostConfigEntry::operator==(const CCostConfigEntry& CostConfigEntry) const
{
	if (m_OptionalCosts.size() != CostConfigEntry.m_OptionalCosts.size())
		return false;

	OptCostEntryArray temp(CostConfigEntry.m_OptionalCosts);
	for (size_t i = 0; i != m_OptionalCosts.size(); ++i)
	{
		bool bFound = false;
		for (OptCostEntryArray::iterator j = temp.begin(); j != temp.end(); ++j)
			if (*j == m_OptionalCosts[i])//assuming each optional cost has at most 2 sub-costs
			{
				temp.erase(j);
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	if (temp.size())
		return false;

	return (m_CostEntryList == CostConfigEntry.m_CostEntryList) &&
			(m_nExtraValue == CostConfigEntry.m_nExtraValue);
}

BOOL CCostConfigEntry::PayCost(CPlayer* pByPlayer) const
{
	BOOL bResult = TRUE;
	for(ConstIterator i=m_CostEntryList.begin(); i; ++i)
		bResult&=i->PayCost(pByPlayer);
	for(size_t j=0; j<m_OptionalCosts.size(); j++)
		for(ConstIterator i=++m_OptionalCosts[j].begin(); i; ++i)
			bResult&=i->PayCost(pByPlayer);//assuming overlapping movecosts are only here

	return bResult;
}
