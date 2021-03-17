#include "stdafx.h"

#define new DEBUG_NEW

const CScore CScore::s_Minimum(-1);
const CScore CScore::s_Maximum(1);

const int CScore::s_LifeScoreMappings[] = {
	-48,	// 0
	-39,	// 1
	-31,	// 2
	-24,	// 3
	-18,	// 4
	-13,	// 5
	-9,		// 6
	-6,		// 7
	-3,		// 8
	0,		// 9
	3,		// 10
	6,		// 11
	8,		// 12
	10,		// 13
	12,		// 14
	14		// 15
	};		

//____________________________________________________________________________
//
CString CScore::ToString(CGame* pGame) const
{
	if (!m_bValid)
		return _T("invalid");

	if (m_SubScores[Limits] != 0)
	{
		if (m_SubScores[Limits] < 0)
			return _T("minimum");
		
		return _T("maximum");
	}

	CString str;

	if (m_SubScores[Wins])
	{
		if (pGame->m_TP.m_bOverkill)
		{
			if (m_SubScores[Wins] < 0)
				str.Format(_T("lost%d(okill%daction%d)"), m_SubScores[Wins], m_SubScores[WinsOverkill], m_SubScores[WinsAction]);
			else
				str.Format(_T("won%d(okill%daction%d)"), m_SubScores[Wins], m_SubScores[WinsOverkill], m_SubScores[WinsAction]);
		}
		else
		{
			if (m_SubScores[Wins] < 0)
				str.Format(_T("lost%d"), m_SubScores[Wins]);
			else
				str.Format(_T("won%d"), m_SubScores[Wins]);
		}

		return str;
	}

	if (m_SubScores[Creatures])
		str.AppendFormat(_T("creat%d"), m_SubScores[Creatures]);

	if (m_SubScores[Life])
		str.AppendFormat(_T("life%d"), m_SubScores[Life]);

	if (m_SubScores[Library])
		str.AppendFormat(_T("library%d"), m_SubScores[Library]);

	if (m_SubScores[InPlayCards])
		str.AppendFormat(_T("inplay%d"), m_SubScores[InPlayCards]);

	if (m_SubScores[InHandCards])
		str.AppendFormat(_T("hand%d"), m_SubScores[InHandCards]);

	if (m_SubScores[Misc])
		str.AppendFormat(_T("misc%d"), m_SubScores[Misc]);

	if (str.IsEmpty())
		return _T("0");

	return str;
}

//#define TRACE_CARD_SCORES
void CScore::Calculate(const CPlayer* pPlayer)
{
#ifdef TRACE_CARD_SCORES
	ATLTRACE(_T("\n***** Calculating Score\n"));
#endif

	CGame* pGame = pPlayer->GetGame();

	Clear();

	int nPlayerCount = pGame->GetPlayerCount();
	for (int i = 0; i < nPlayerCount; ++i)
		if (pGame->GetPlayer(i)->GetManaPool().GetTotal())
			return;	// Not valid to calculate score when mana pools are not empty

	m_bValid = true;

	int nLife = GET_INTEGER(pPlayer->GetLife());

	if (pPlayer->GetLost())
	{
		if (pGame->m_TP.m_bOverkill)
		{
			// Wins: turn score
			m_SubScores[Wins] = std::numeric_limits<int>::min() +
				 (pGame->m_nGameTurnNumber - pGame->m_TD.m_nTurnStartedThinking);

			// Wins: overkill score
			m_SubScores[WinsOverkill] = nLife;

			// Wins: action score
			m_SubScores[WinsAction] = pGame->m_nActionNumber - pGame->m_TD.m_nActionStartedThinking;
		}
		else
		{
			m_SubScores[Wins] = std::numeric_limits<int>::min() +
				pGame->m_nActionNumber - pGame->m_TD.m_nActionStartedThinking;
		}

		return;
	}

	bool bHasWins = false;

	if (nLife < 0)
		nLife = 0;
	m_SubScores[Life] = (nLife >= ARRAY_SIZE(s_LifeScoreMappings) ? nLife : s_LifeScoreMappings[nLife]);

	for (int i = 0; i < nPlayerCount; ++i)
	{
		CPlayer* pPlayer1 = pGame->GetPlayer(i);
		int nPlayerLife = GET_INTEGER(pPlayer1->GetLife());

		if (pPlayer1 != pPlayer)
		{
			if (pPlayer1->GetLost())
			{
				if (!bHasWins)
				{
					m_SubScores[Wins] = std::numeric_limits<int>::max();
					bHasWins = true;
				}

				if (pGame->m_TP.m_bOverkill)
				{
					m_SubScores[Wins] -= pGame->m_nGameTurnNumber - pGame->m_TD.m_nTurnStartedThinking;

					m_SubScores[WinsOverkill] += -nPlayerLife;

					m_SubScores[WinsAction] -= pGame->m_nActionNumber - pGame->m_TD.m_nActionStartedThinking;
				}
				else
				{
					m_SubScores[Wins] -= pGame->m_nActionNumber - pGame->m_TD.m_nActionStartedThinking;
				}
			}

			if (nPlayerLife < 0)
				nPlayerLife = 0;
			m_SubScores[Life] -= (nPlayerLife >= ARRAY_SIZE(s_LifeScoreMappings) ? nPlayerLife : s_LifeScoreMappings[nPlayerLife]);
		}
		else
			if (nPlayerLife < 0)
				nPlayerLife = 0;

		int nSign = (pPlayer == pPlayer1) ? 1 : -1;

		std::map<CardType, int> basicLandCounts;
		/*
			Each basic land type = +7
			1 of a kind = -3
			2 of a kind = -1
			3 or more   = -0

			mountain 7-3=4

			mountain mountain 6
			island island 6
			mountain island 14-3-3=8

			mountain mountain mountain 7
			mountain mountain island 14-1-3=10
			island island mountain 10
			island swamp mountain 21-3-3-3=12

			mountain mountain mountain mountain 7
			island mountain mountain mountain 14-3=11
			island island mountain mountain 14-1-1=12
			mountain mountain island swamp 21-1-3-3=14
			island mountain swamp plains 28-3-3-3-3=16


			AAAAA 7
			ABBBB 14-3=11
			AABBB 14-1=13
			ABCCC 21-3-3=15
			ABBCC 21-3-1-1=16
			ABBCD 28-3-1-3-3=18
			ABCDE 35


			AAAAAA 7
			ABBBBB 14-3=11
			AABBBB 14-1=13
			AAABBB 14
			ABCCCC 21-3-3=15
			ABBCCC 21-3-1=17
			AABBCC 21-3=18
			ABCDDD 28-3-3-3=19
			ABCCDD 28-3-3-1-1=20
			ABCDEE 35-3-3-3-3-1=22
		*/

		CZone* pInplay = pPlayer1->GetZoneById(ZoneId::Battlefield); 
		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CCard* pCard = pInplay->GetAt(j);
			int nCardScore = pCard->GetScore();

#ifdef TRACE_CARD_SCORES
			ATLTRACE(_T("*** [PLAY] Card %s Base Score %d\n"), pCard->GetCardName(), nCardScore);
#endif

			m_SubScores[InPlayCards] += nCardScore * nSign;
			m_SubScores[Misc] -= pCard->GetOrientation()->GetTapCount() * nSign;
			m_SubScores[Misc] += pCard->GetOrientation()->GetUntapCount() * nSign;

			// Disabled to see if it will still work
			//if (!pCard->IsModified() && !pCard->IsEnchanted() &&
			//	(pCard->GetCardType() & CardType::BasicLand).Any())
			{
				++basicLandCounts[pCard->GetCardType()];
			}

			if (!pGame->m_TP.m_bConservative)
				if (nPlayerLife >= 6 && (pCard->GetCardType().IsCreature() || pCard->GetCardType().IsPlaneswalker())) //20-01-2010 changed to 6 the life value when the AI became conservative
				{
					const CManaCost& cost = pCard->GetSpells().GetAt(0)->GetCost().GetManaCost(); // only consider the first spell
					m_SubScores[Creatures] += 
						(cost.GetTotalColorCost() * 3 + cost.GetCost(CManaCost::Color::Generic) * 2) * nSign;
					if (pCard->GetCardType().IsPlaneswalker())
						m_SubScores[Creatures] += cost.GetTotal() * 10 * nSign; 
				}
		}

		for (std::map<CardType, int>::const_iterator it = basicLandCounts.begin();
			it != basicLandCounts.end();
			++it)
		{
			if (it->second == 1)
				m_SubScores[InPlayCards] += 4;
			else
				if (it->second == 2)
					m_SubScores[InPlayCards] += 6;
				else
					m_SubScores[InPlayCards] += 7;
		}

		CZone* pHand = pPlayer1->GetZoneById(ZoneId::Hand);
		for (int j = 0; j < pHand->GetSize(); ++j)
		{
			CCard* pCard = pHand->GetAt(j);
			int nCardScore = pCard->GetScore();

#ifdef TRACE_CARD_SCORES
			ATLTRACE(_T("*** [HAND] Card %s Base Score %d\n"), pCard->GetCardName(), nCardScore);
#endif

			m_SubScores[InHandCards] += pCard->GetScore() * nSign;
		}

		m_SubScores[InPlayCards] += pPlayer1->GetInPlayBonus() * nSign;
		m_SubScores[InHandCards] += pPlayer1->GetInHandBonus() * nSign;
		m_SubScores[Misc] += pPlayer1->GetMiscBonus() * nSign;

		int nLibrarySize = pPlayer1->GetZoneById(ZoneId::Library)->GetSize();
		if (nLibrarySize < 10)
			m_SubScores[Library] -= (10 - nLibrarySize) * nSign;
	}

	if (!m_SubScores[Wins] &&
		(pGame->GetCurrentNode()->GetNodeId() & NodeId::_CombatPhase).Any())
		return;	// Scores calculated within an incomplete combat phase are not valid.
		
	m_SubScores[Misc] += pGame->m_TD.m_nActionStartedThinking - pGame->m_nActionNumber;

#ifdef TRACE_CARD_SCORES
	ATLTRACE(_T("***** Score = %s\n\n"), ToString());
#endif
}