#include "stdafx.h"

#define new DEBUG_NEW

struct Sorting 
{
	static bool ByName(const CDeck::DeckCard& a,const CDeck::DeckCard& b) 
	{ 
		return a.strCardName.CompareNoCase(b.strCardName) < 0;
	}
};

//____________________________________________________________________________
//

CDeck::CDeck(LPCTSTR strDeckPath, bool bRemoveExtraCopies)
{
	ImportDeck(strDeckPath, bRemoveExtraCopies);
}

void CDeck::ClearStatus()
{
	m_Status = DeckStatus::Empty;
	m_CardsWithExtraCopiesRemoved.clear();
	m_UnsupportedCards.clear();	
}

void CDeck::ClearStatistics()
{
	m_nLandCount		   = 0;
	m_nPlaneswalkerCount   = 0;
	m_nCreatureCount	   = 0;
	m_nArtifactCount	   = 0;
	m_nSorceryCount		   = 0;
	m_nInstantCount		   = 0;
	m_nEnchantmentCount	   = 0;

	m_nTotalReferenceScore = 0;
	m_nReferenceScore	   = 0;
	m_CreatureTypes.clear();
	m_ProminentManaColorByCard = CManaPool::Color::Null;
	m_ManaColorCountByCard.clear();
	m_ProminentManaColor	   = CManaPool::Color::Null;
	m_ManaColorCount.clear();
	m_CardNames.clear();
}

void CDeck::Clear()
{
	ClearStatus();
	ClearStatistics();

	m_DeckLines.clear();
	m_SideboardLines.clear();
	m_StartBattlefieldLines.clear();
	m_StartEmblemsLines.clear();
	m_HeaderLines.clear();
	m_Deck.clear();
	m_Sideboard.clear();
	m_StartBattlefield.clear();
	m_StartEmblems.clear();

	m_bNoShuffle	  = false;
	m_nStartingLife	  = 20;
	m_bPreconstructed = false;
	m_bReadOnly		  = false;
	m_bSealed		  = false;
	m_bNoCardLimit	  = false;
}

void CDeck::UpdateCardStatistics(const CCard* pCard)
{
	std::map<CString, int>::iterator i = m_CardNames.find(pCard->GetPrintedCardName());
	if (i == m_CardNames.end())
		m_CardNames.insert(std::make_pair(pCard->GetPrintedCardName(), 1));
	else
		++i->second;

	if ((pCard->GetCardType() & CardType::Planeswalker).Any())
		++m_nPlaneswalkerCount;
	else
	if (pCard->GetCardType().IsCreature())
	{
		++m_nCreatureCount;

		const CreatureType_& creatureType = ((CCreatureCard*)pCard)->GetCreatureType();

		ATLASSERT(creatureType.GetSize() || 
			(pCard->GetCardType() & CardType::_ArtifactCreature).Any() /* e.g. Ornithopter */);

		for (CreatureType_::Iterator j = creatureType.Begin(); j != creatureType.End(); ++j)
		{
			m_CreatureTypes.insert(*j);
		}
	}
	else
	if ((pCard->GetCardType() & CardType::_Land).Any())
		++m_nLandCount;
	else
	if ((pCard->GetCardType() & CardType::Artifact).Any())
		++m_nArtifactCount;
	else
	if ((pCard->GetCardType() & CardType::Sorcery).Any())
		++m_nSorceryCount;
	else
	if ((pCard->GetCardType() & CardType::Instant).Any())
		++m_nInstantCount;
	else
	if ((pCard->GetCardType() & CardType::_Enchantment).Any())
		++m_nEnchantmentCount;
}

void CDeck::ImportDeck(LPCTSTR strDeckPath, bool bRemoveExtraCopies)
{
	Clear();

	CStdioFile deck;
	if (!deck.Open(strDeckPath, CFile::modeRead | CFile::typeText))
	{
		m_Status = DeckStatus::ParseError;
		return;
	}

	StringArray lines;

	CString strLine;
	while (deck.ReadString(strLine))
		lines.push_back(strLine);

	ImportDeck(lines, bRemoveExtraCopies);

	CFileStatus fileStatus;
	deck.GetStatus(fileStatus);
	if (fileStatus.m_attribute & CFile::readOnly)
		m_bReadOnly = true;
}


typedef std::pair<UINT, COleDateTime> tCandidate;

bool sort_tCandidate(const tCandidate& one, const tCandidate& two)
{
	return one.second < two.second;
}

void CDeck::ImportDeck(const StringArray& lines, bool bRemoveExtraCopies)
{
	Clear();

	DeckCard fillEntry;
	counted_ptr<CCard> cpFillCard;

	CCountedCardContainer cards;

	bool bKeepHeader	   = true;
	bool bSideboard		   = false;
	bool bStartBattlefield = false;
	bool bStartEmblems	   = false;
	bool bAge			   = false;
	COleDateTime dtAge;

	for (size_t i = 0; i < lines.size(); ++i)
	{
		CString strLine(lines[i]);
		strLine.Trim();
		if (strLine.IsEmpty())
		{
			if (bKeepHeader)
				m_HeaderLines.push_back(_T("\n"));
			continue;
		}

		if (!_tcsicmp(strLine.Left(10), _T("#NOSHUFFLE")))
		{
			m_bNoShuffle = true;
			continue;
		}

		if (!_tcsicmp(strLine.Left(14), _T("#NO_CARD_LIMIT")))
		{
			m_bNoCardLimit = true;
			continue;
		}

		if (!_tcsicmp(strLine.Left(5), _T("#SEAL")))
		{
			m_bSealed = true;

			/*
			#SEAL_CHECKSUM {GUID}
			#SEAL_COMPUTER NAME {GUID}
			#SEAL_MODIFY_DATE YYYY-MM-DD HH:MM:SS
			#SEAL_CREATE_DATE YYYY-MM-DD HH:MM:SS
			#SEAL_SEED SEED
			*/

			if (!_tcsicmp(strLine.Left(14), _T("#SEAL_CHECKSUM")))
			{
				CString strChecksum(strLine.Mid(15));
				strChecksum.Trim();
				m_SealChecksum = Guid(strChecksum);
			}
			else
			if (!_tcsicmp(strLine.Left(14), _T("#SEAL_COMPUTER")))
			{
				CString strComputer(strLine.Mid(15));
				strComputer.Trim();

				int nIndex = strComputer.ReverseFind(_T('{'));
				if (nIndex != -1)
				{
					if (nIndex > 1)
					{
						m_strSealComputerName = strComputer.Left(nIndex - 1);
						m_strSealComputerName.Trim();
					}

					m_SealComputerId = Guid(strComputer.Mid(nIndex));
				}
				else
				{
					m_strSealComputerName = strComputer;
					m_strSealComputerName.Trim();
				}
			}
			else
			if (!_tcsicmp(strLine.Left(17), _T("#SEAL_MODIFY_DATE")))
			{
				CString strModifyDate(strLine.Mid(18));
				strModifyDate.Trim();

				m_SealModificationDate.ParseDateTime(strModifyDate);
			}
			else
			if (!_tcsicmp(strLine.Left(17), _T("#SEAL_CREATE_DATE")))
			{
				CString strCreateDate(strLine.Mid(18));
				strCreateDate.Trim();

				m_SealCreationDate.ParseDateTime(strCreateDate);
			}
			else
			if (!_tcsicmp(strLine.Left(10), _T("#SEAL_SEED")))
			{
				m_strSealSeed = strLine.Mid(11);
				m_strSealSeed.Trim();
			}

			continue;
		}

		if (!_tcsicmp(strLine.Left(5), _T("#LIFE")))
		{
			CString strLife(strLine.Mid(6));
			strLife.TrimLeft();
			
			m_nStartingLife = _ttoi(strLife);
			if (m_nStartingLife < 1)
				m_nStartingLife = 20;
			continue;
		}

		if (!_tcsicmp(strLine.Left(4), _T("#PRE")))
		{
			m_bPreconstructed = true;
			continue;
		}

		if (!_tcsicmp(strLine.Left(10), _T("#SIDEBOARD")))
		{
			bSideboard = true;
			continue;
		}

		if (!_tcsicmp(strLine.Left(17), _T("#STARTBATTLEFIELD")))
		{
			bStartBattlefield = true;
			continue;
		}

		if (!_tcsicmp(strLine.Left(13), _T("#STARTEMBLEMS")))
		{
			bStartEmblems = true;
			continue;
		}

		if (!_tcsicmp(strLine.Left(5), _T("#AGE ")))
		{
			CString strAge;
			CCardModule* pModule;

			strAge = strLine.Mid(5);

			int nModuleCount = CCardStore::GetInstance()->GetModuleCount();
			for (int i = 0; i < nModuleCount; ++i)
			{
				pModule = CCardStore::GetInstance()->GetModule(i);
				if (strAge == pModule->GetExpansionAbbrevName())
				{
					dtAge = pModule->GetReleaseDate();
					bAge = true;
					break;
				}
			}
			if (bAge == false)
				LOG_ERROR(_T("No expansion with AbbrevName: %s"), strAge);
		}

		if (!_tcsicmp(strLine.Left(1), _T("#")) ||
			!_tcsicmp(strLine.Left(2), _T("//")))
		{
			if (bKeepHeader)
			{
				if (!_tcsicmp(strLine.Left(2), _T("//")))
				{
					if (strLine.Find(_T("// Creatures"))	 != 0 &&
						strLine.Find(_T("// Non-creatures")) != 0 &&
						strLine.Find(_T("// Spells"))		 != 0 &&
						strLine.Find(_T("// Instants"))		 != 0 &&
						strLine.Find(_T("// Sorceries"))	 != 0 &&
						strLine.Find(_T("// Enchantments"))  != 0 &&
						strLine.Find(_T("// Artifacts"))	 != 0 &&
						strLine.Find(_T("// Lands"))		 != 0 &&
						strLine.Find(_T("// Total cards"))   != 0 &&
						strLine.Find(_T("// Total Cards"))   != 0)
					{
						strLine += _T("\n");
						m_HeaderLines.push_back(strLine);
					}
					else
						bKeepHeader = false;
				}
				else
					bKeepHeader = false;
			}

			continue;
		}
		else
			if (bKeepHeader)
				bKeepHeader = false;

		CString strCardName;
		int nCount = 1;
		bool bFillCard = false;

		if (!_tcsicmp(strLine.Left(6), _T("#FILL ")))
		{
			strCardName = strLine.Mid(6);
			bFillCard   = true;
			fillEntry.strCardName = strCardName;
		}
		else
		{
			// e.g. 4 Eager Cadet

			if (_istdigit(strLine[0]))
			{
				int nIndex = strLine.Find(_T(' '));
				if (nIndex != -1)
				{
					strCardName = strLine.Mid(nIndex + 1);
					nCount = _ttoi(strLine);
				}
				else
					strCardName = strLine;
			}
			else
				strCardName = strLine;
		}

		UINT uID = 0;

		if ((strCardName.Find(_T('(')) != -1) &&
			(strCardName.Find(_T(')')) != -1))
		{
			if (!_stscanf_s(strCardName.Mid(strCardName.Find(_T('(')) + 1), _T("%d"), &uID))
				uID = 0;
			else
			{
				strCardName = strCardName.Left(strCardName.Find(_T('(')));
				strCardName.Trim();
				strCardName.Replace(_T("â"),_T("a"));
				strCardName.Replace(_T("à"),_T("a"));
				strCardName.Replace(_T("á"),_T("a"));
				strCardName.Replace(_T("Æ"),_T("AE"));
				strCardName.Replace(_T("é"),_T("e"));
				strCardName.Replace(_T("ú"),_T("u"));
				strCardName.Replace(_T("û"),_T("u"));
				strCardName.Replace(_T(":"),_T(""));
				//"strCardName.Replace(_T("."),_T(""));


				CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCardByID(uID);

				if (!pCardEntry || pCardEntry->GetTrCardName().CompareNoCase(strCardName))
				{
					CCardEntry* pCardEntry2 = CCardStore::GetInstance()->GetCard(strCardName, TRUE);
					if (pCardEntry2)
					{
						if (pCardEntry)
							LOG_ERROR(_T("Card %s has incorrect ID %d which is for card %s; Reassigned a correct ID of %d in expansion %s"), strCardName, uID, pCardEntry->GetCardName(), pCardEntry2->GetID(), pCardEntry2->GetExpansionName());
						else
							LOG_ERROR(_T("Card %s has incorrect ID %d; Reassigned a correct ID of %d in expansion %s"), strCardName, uID, pCardEntry2->GetID(), pCardEntry2->GetExpansionName());

						uID = pCardEntry2->GetID();
					}
					else
						uID = 0;
				}
			}
		}

		if (!uID)
		{
			// Try to search by name
			CCardEntry* pCardEntry;

			if (!bAge)
			{
				pCardEntry = CCardStore::GetInstance()->GetCard(strCardName, TRUE);
				if (pCardEntry)	uID = pCardEntry->GetID();
			}
			else
			{
				CCardModule* pModule;
				CCardEntry* pEntry;
				COleDateTime modDate;
				std::list<tCandidate> vCandidates;

				CardModules::size_type nModuleCount = CCardStore::GetInstance()->GetModuleCount();
				for (CardModules::size_type i = 0; i < nModuleCount; ++i)
				{
					pModule = CCardStore::GetInstance()->GetModule(i);
					modDate = pModule->GetReleaseDate();
					pEntry = pModule->GetCard(strCardName, TRUE);
					if (pEntry)
						vCandidates.push_back(tCandidate(pEntry->GetID(), modDate));
				}
				if (vCandidates.size() > 0)
				{
					vCandidates.sort(sort_tCandidate);
					std::list<tCandidate>::iterator iterCandidate = vCandidates.begin();
					while (iterCandidate != vCandidates.end())
					{
						if (dtAge < iterCandidate->second) break;
						++iterCandidate;
					}
					if (iterCandidate != vCandidates.begin()) --iterCandidate;
					uID = iterCandidate->first;
				}
			}
		}

		/*
		if (!uID)
		{
			unsupportedCards.push_back(strCardName);
			continue;
		}
		*/

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(NULL, strCardName, uID));

		if (!cpCard.GetPointer())
		{
			if (bFillCard)
				fillEntry.strCardName.Empty();

			m_UnsupportedCards.insert(strCardName);
			continue;
		}

		bool bAllowMoreThan4 = m_bNoCardLimit || m_bSealed || cpCard->AllowUnlimitedCopies();

		if (bFillCard && !bAllowMoreThan4)
		{
			fillEntry.strCardName.Empty();
			bFillCard = false;
		}

		CString strPrintedCardName(cpCard->GetPrintedCardName());

		if (!bSideboard && !bStartBattlefield && !bStartEmblems)
		{
			std::map<CString, int>::iterator it = m_CardNames.find(strPrintedCardName);
			if (it != m_CardNames.end())
			{
				if (!bAllowMoreThan4)
				{
					if (it->second + nCount > 4)
					{
						if (bRemoveExtraCopies)
						{
							nCount = 4 - it->second;
							if (nCount < 0)
								nCount = 0;

							m_CardsWithExtraCopiesRemoved.insert(strPrintedCardName);
						}
					}
				}
			}
			else
			{
				if (!bAllowMoreThan4 && nCount > 4)
				{
					if (bRemoveExtraCopies)
					{
						nCount = 4;
						m_CardsWithExtraCopiesRemoved.insert(strPrintedCardName);
					}
				}
			}
		}

		DeckCard entry;
		entry.strCardName = strCardName;
		entry.nImageId = uID;
		entry.nScore = cpCard->GetScore();
		entry.cardType = cpCard->GetCardType();

		if (!bFillCard)
		{
			for (int j = 0; j < nCount; ++j)
			{
				if (!bSideboard && !bStartBattlefield && !bStartEmblems )
				{
					m_Deck.push_back(entry);
					m_nTotalReferenceScore += entry.nScore;

					cards.AddCard(cpCard.GetPointer(), CardPlacement::Top);
					UpdateCardStatistics(cpCard.GetPointer());
				}
				else
					if (!bStartBattlefield && !bStartEmblems)
					m_Sideboard.push_back(entry);
					else
						if (!bStartEmblems)
							m_StartBattlefield.push_back(entry);
						else
							m_StartEmblems.push_back(entry);
			}

			if (!bSideboard && !bStartBattlefield && !bStartEmblems)
				m_DeckLines.push_back(lines[i] + _T("\n"));
			else
				if (!bStartBattlefield && !bStartEmblems)
				m_SideboardLines.push_back(lines[i] + _T("\n"));
				else
					if (!bStartEmblems)
					m_StartBattlefieldLines.push_back(lines[i] + _T("\n"));
					else
						m_StartEmblemsLines.push_back(lines[i] + _T("\n"));
		}
		else
		{
			fillEntry = entry;
			cpFillCard = cpCard;
		}
	}

	if (!fillEntry.strCardName.IsEmpty())
	{
		int nFillCount = MAX(0, (m_bPreconstructed ? 40 : 60) - m_Deck.size());

		for (int i = 0; i < nFillCount; ++i)
		{
			m_Deck.push_back(fillEntry);
			m_nTotalReferenceScore += fillEntry.nScore;

			cards.AddCard(cpFillCard.GetPointer(), CardPlacement::Top);
			UpdateCardStatistics(cpFillCard.GetPointer());
		}

		CString strLine;
		strLine.Format(_T("#FILL %s (%d)\n"), fillEntry.strCardName, fillEntry.nImageId);
		m_DeckLines.push_back(strLine);
	}

	if (!m_bNoShuffle)
	{
		std::sort(m_Deck.begin(), m_Deck.end(), Sorting::ByName);
		std::sort(m_Sideboard.begin(), m_Sideboard.end(), Sorting::ByName);
		UpdateLines();
	}

	if (m_Deck.size())
		m_nReferenceScore = m_nTotalReferenceScore / m_Deck.size();
	else
		m_nReferenceScore = 0;

	GetCardColorSummary(cards, m_ManaColorCountByCard, m_ProminentManaColorByCard, false);
	GetCardColorSummary(cards, m_ManaColorCount, m_ProminentManaColor, true);

	if (m_bSealed)
	{
		Guid checksum(CalculateSealedChecksum());
		if (checksum != m_SealChecksum)
		{
			ATLTRACE(_T("Incorrect sealed deck checksum\n"));
			m_Status = DeckStatus::SealCorruption;
			return;
		}
	}

	if (!m_bNoCardLimit && static_cast<int>(m_Deck.size()) < (m_bPreconstructed || m_bSealed ? 40 : 60))
		m_Status = DeckStatus::NotEnoughCards;
	else
		m_Status = DeckStatus::Okay;
}

void CDeck::SetDeck(const DeckCards& deckCards, bool bRemoveExtraCopies)
{
	m_Deck = deckCards;

	if (!m_bNoShuffle)
		std::sort(m_Deck.begin(), m_Deck.end(), Sorting::ByName);
	
	ClearStatus();
	ClearStatistics();

	CCountedCardContainer cards;

	for (size_t i = 0; i < m_Deck.size(); ++i)
	{
		const DeckCard& deckCard(m_Deck[i]);

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(NULL, deckCard.strCardName, deckCard.nImageId));
		if (!cpCard.GetPointer())
		{
			m_UnsupportedCards.insert(deckCard.strCardName);
			continue;
		}

		bool bAllowMoreThan4 = m_bNoCardLimit || m_bSealed || cpCard->AllowUnlimitedCopies();

		CString strPrintedCardName(cpCard->GetPrintedCardName());
		std::map<CString, int>::iterator it = m_CardNames.find(strPrintedCardName);
		if (it != m_CardNames.end())
		{
			if (!bAllowMoreThan4)
			{
				if (it->second + 1 > 4)
				{
					if (bRemoveExtraCopies)
					{
						m_CardsWithExtraCopiesRemoved.insert(strPrintedCardName);
						continue;
					}
				}
			}
		}

		DeckCard entry;
		entry.strCardName = deckCard.strCardName;
		entry.nImageId = deckCard.nImageId;
		entry.nScore = cpCard->GetScore();
		entry.cardType = cpCard->GetCardType();

		m_Deck[i] = entry;
		m_nTotalReferenceScore += entry.nScore;

		cards.AddCard(cpCard.GetPointer(), CardPlacement::Top);
		UpdateCardStatistics(cpCard.GetPointer());
	}

	if (m_Deck.size())
		m_nReferenceScore = m_nTotalReferenceScore / m_Deck.size();
	
	GetCardColorSummary(cards, m_ManaColorCountByCard, m_ProminentManaColorByCard, false);
	GetCardColorSummary(cards, m_ManaColorCount, m_ProminentManaColor, true);

	if (!m_bNoCardLimit && static_cast<int>(m_Deck.size()) < (m_bPreconstructed || m_bSealed ? 40 : 60))
		m_Status = DeckStatus::NotEnoughCards;
	else
		m_Status = DeckStatus::Okay;

	UpdateLines();
}

void CDeck::SetSideboard(const DeckCards& sideboard)
{
	m_Sideboard = sideboard;

	if (!m_bNoShuffle)
		std::sort(m_Sideboard.begin(), m_Sideboard.end(), Sorting::ByName);
	
	UpdateLines();
}

void CDeck::GetCardColorSummary(const CCountedCardContainer& cards,
								std::map<CManaPool::Color, int>& summary,
								CManaPool::Color& prominentColor,		// Will not return colorless if there are other non-zero colors
								bool bFine)
{
	summary.clear();
	summary[CManaPool::Color::Black] = 0;
	summary[CManaPool::Color::Blue ] = 0;
	summary[CManaPool::Color::Red  ] = 0;
	summary[CManaPool::Color::Green] = 0;
	summary[CManaPool::Color::White] = 0;
	summary[CManaPool::Color::Colorless] = 0;

	prominentColor = CManaPool::Color::Colorless;

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		const CCard* pCard = cards.GetAt(i);

		const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

		for (int j = 0; j < spells.GetSize(); ++j)
		{
			const CSpell* pSpell = spells.GetAt(j);
			CManaCost manaCost(pSpell->GetCost().GetManaCost());

			if (bFine)
			{
				summary[CManaPool::Color::Black] += manaCost.GetCost(CManaCost::Color::Black);
				summary[CManaPool::Color::Blue ] += manaCost.GetCost(CManaCost::Color::Blue);
				summary[CManaPool::Color::Red  ] += manaCost.GetCost(CManaCost::Color::Red);
				summary[CManaPool::Color::Green] += manaCost.GetCost(CManaCost::Color::Green);
				summary[CManaPool::Color::White] += manaCost.GetCost(CManaCost::Color::White);
				summary[CManaPool::Color::Colorless] += manaCost.GetCost(CManaCost::Color::Generic);
			}
			else
			{
				summary[CManaPool::Color::Black] += (manaCost.GetCost(CManaCost::Color::Black) > 0 ? 1 : 0);
				summary[CManaPool::Color::Blue ] += (manaCost.GetCost(CManaCost::Color::Blue)  > 0 ? 1 : 0);
				summary[CManaPool::Color::Red  ] += (manaCost.GetCost(CManaCost::Color::Red)   > 0 ? 1 : 0);
				summary[CManaPool::Color::Green] += (manaCost.GetCost(CManaCost::Color::Green) > 0 ? 1 : 0);
				summary[CManaPool::Color::White] += (manaCost.GetCost(CManaCost::Color::White) > 0 ? 1 : 0);
				summary[CManaPool::Color::Colorless] += (manaCost.GetCost(CManaCost::Color::Generic)  > 0 ? 1 : 0);
			}

			if (summary[CManaPool::Color::Black] > summary[prominentColor])
				prominentColor = CManaPool::Color::Black;

			if (summary[CManaPool::Color::Blue]  > summary[prominentColor])
				prominentColor = CManaPool::Color::Blue;

			if (summary[CManaPool::Color::Red]   > summary[prominentColor])
				prominentColor = CManaPool::Color::Red;

			if (summary[CManaPool::Color::Green] > summary[prominentColor])
				prominentColor = CManaPool::Color::Green;

			if (summary[CManaPool::Color::White] > summary[prominentColor])
				prominentColor = CManaPool::Color::White;

			if (summary[CManaPool::Color::Colorless] > summary[prominentColor])
				prominentColor = CManaPool::Color::Colorless;
		}
	}

	if (prominentColor == CManaPool::Color::Colorless)
	{
		int nMaxCount = 0;
		for (std::map<CManaPool::Color, int>::iterator it = summary.begin(); it != summary.end(); ++it)
			if ((it->first != CManaPool::Color::Colorless) &&
				(it->second > nMaxCount))
			{
				prominentColor = it->first;
				nMaxCount = it->second;
			}
	}
}

int CDeck::GetCardCount(const DeckCards& cards, LPCTSTR strCardName, UINT nImageId)
{
	int nCount = 0;

	for (size_t i = 0; i < cards.size(); ++i)
		if (cards[i].nImageId == nImageId && !cards[i].strCardName.CompareNoCase(strCardName))
			++nCount;

	return nCount;
}

bool CDeck::ExportDeck(LPCTSTR strDeckPath) const
{
	if (!IsSealOkay())
		return false;

	CFileStatus fileStatus;
	if (CFile::GetStatus(strDeckPath, fileStatus))
	{
		fileStatus.m_attribute &= ~CFile::readOnly;
		CFile::SetStatus(strDeckPath, fileStatus);
	}

	{
		CStdioFile deck;
		if (!deck.Open(strDeckPath, CFile::modeWrite | CFile::typeText | CFile::modeCreate))
			return false;

		if (m_bSealed)
		{
			UpdateSealModificationDate();
			m_SealChecksum = CalculateSealedChecksum();
		}

		StringArray fileLines(GetFileLines());

		for (StringArray::const_iterator i = fileLines.begin(); i != fileLines.end(); ++i)
			deck.WriteString(*i);
	}

	if (m_bReadOnly)
	{
		CFileStatus fileStatus;
		if (CFile::GetStatus(strDeckPath, fileStatus))
		{
			fileStatus.m_attribute |= CFile::readOnly;
			CFile::SetStatus(strDeckPath, fileStatus);
		}
	}

	return true;
}

void CDeck::UpdateLines()
{
	const DeckCards* cards[] = { &m_Deck, &m_Sideboard, &m_StartBattlefield, &m_StartEmblems };
	const LPCTSTR sections[] = { _T("deck"), _T("sideboard"),  _T("starting battlefield"),  _T("starting emblems") };
	StringArray*  lines[]    = { &m_DeckLines, &m_SideboardLines,  &m_StartBattlefieldLines, &m_StartEmblemsLines };

	CString strLine;

	for (int i = 0; i < ARRAY_SIZE(cards); ++i)
	{
		StringArray& lines(*(lines[i]));
	
		lines.clear();

		const DeckCards& entries(*(cards[i]));
		if (!entries.size())
			continue;

		if (i==1)
			lines.push_back(_T("#SIDEBOARD\n\n"));

		if (i==2)
			lines.push_back(_T("#STARTBATTLEFIELD\n\n"));

		if (i==3)
			lines.push_back(_T("#STARTEMBLEMS\n\n"));

		strLine.Format(_T("// Total cards in %s - %d\n"), sections[i], entries.size());
		lines.push_back(strLine);

		//if (!m_bNoShuffle) currently not working through the Deck editor
		{
			std::set<std::pair<CString, UINT>> processedCards;

			// Planeswalkers
			bool bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if ((entry.cardType & CardType::Planeswalker).Any())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Planeswalkers\n\n");
						else
							strLine.Format(_T("\n// Planeswalkers - %d (%.2f%%)\n\n"), m_nPlaneswalkerCount, GetPlaneswalkerPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Creatures
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if (entry.cardType.IsCreature())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Creatures\n\n");
						else
							strLine.Format(_T("\n// Creatures - %d (%.2f%%)\n\n"), m_nCreatureCount, GetCreaturePercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Instants
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if ((entry.cardType & CardType::Instant).Any())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Instants\n\n");
						else
							strLine.Format(_T("\n// Instants - %d (%.2f%%)\n\n"), m_nInstantCount, GetInstantPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Sorceries
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if ((entry.cardType & CardType::Sorcery).Any())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Sorceries\n\n");
						else
							strLine.Format(_T("\n// Sorceries - %d (%.2f%%)\n\n"), m_nSorceryCount, GetSorceryPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Enchantments
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if ((entry.cardType & CardType::_Enchantment).Any())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Enchantments\n\n");
						else
							strLine.Format(_T("\n// Enchantments - %d (%.2f%%)\n\n"), m_nEnchantmentCount, GetEnchantmentPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Artifacts
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if ((entry.cardType & CardType::Artifact).Any() && !entry.cardType.IsCreature() && !entry.cardType.IsLand())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Artifacts\n\n");
						else
							strLine.Format(_T("\n// Artifacts - %d (%.2f%%)\n\n"), m_nArtifactCount, GetArtifactPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Lands
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if (entry.cardType.IsLand())
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Lands\n\n");
						else
							strLine.Format(_T("\n// Lands - %d (%.2f%%)\n\n"), m_nLandCount, GetLandPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}

			// Vanguard and other
			bFound = false;
			for (DeckCards::const_iterator j = entries.begin(); j != entries.end(); ++j)
			{
				const DeckCard& entry(*j);

				if (processedCards.find(std::make_pair(entry.strCardName, entry.nImageId)) != processedCards.end())
					continue;

				if (entry.cardType.IsEmblem() || entry.cardType.IsScheme() ||  entry.cardType.IsPlane() || entry.strCardName == _T("Commander") || entry.strCardName == _T("Planechase"))
				{
					processedCards.insert(std::make_pair(entry.strCardName, entry.nImageId));

					if (!bFound)
					{
						bFound = true;
						if (i)
							strLine = _T("\n// Command Zone\n\n");
						else
							strLine.Format(_T("\n// Command Zone - %d (%.2f%%)\n\n"), m_nLandCount, GetLandPercentage());
						lines.push_back(strLine);
					}

					int nCount = GetCardCount(entries, entry.strCardName, entry.nImageId);

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), entry.strCardName, entry.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, entry.strCardName, entry.nImageId);

					lines.push_back(strLine);
				}
			}
		}
		/*
		else
			if (entries.size())
			{
				int nCount = 1;
				DeckCard lastDeckCard(entries.front());
				for (DeckCards::const_iterator j = entries.begin() + 1; j != entries.end(); ++j)
				{
					const DeckCard& entry(*j);
					if (entry == lastDeckCard)
					{
						++nCount;
						continue;
					}

					if (nCount == 1)
						strLine.Format(_T("%s (%d)\n"), lastDeckCard.strCardName, lastDeckCard.nImageId);
					else
						strLine.Format(_T("%d %s (%d)\n"), nCount, lastDeckCard.strCardName, lastDeckCard.nImageId);

					lines.push_back(strLine);
					
					nCount = 1;
					lastDeckCard = entry;
				}

				if (nCount == 1)
					strLine.Format(_T("%s (%d)\n"), lastDeckCard.strCardName, lastDeckCard.nImageId);
				else
					strLine.Format(_T("%d %s (%d)\n"), nCount, lastDeckCard.strCardName, lastDeckCard.nImageId);

				lines.push_back(strLine);
			}
			*/
	}
}

StringArray CDeck::GetFileLines() const
{
	StringArray fileLines;

	// Header
	for (StringArray::const_iterator i = m_HeaderLines.begin(); i != m_HeaderLines.end(); ++i)
		fileLines.push_back(*i);

	while (fileLines.size())
	{
		CString strLine(fileLines[fileLines.size() - 1]);
		strLine.Replace(_T(" "),  _T(""));
		strLine.Replace(_T("\t"), _T(""));
		if (strLine != _T("\n"))
			break;

		fileLines.erase(fileLines.end() - 1);
	}

	if (fileLines.size())
		fileLines.push_back(_T("\n"));

	// Settings
	CString strLine;

	if (m_bNoShuffle)
		fileLines.push_back(_T("#NOSHUFFLE\n"));

	if (m_nStartingLife != 20)
	{
		strLine.Format(_T("#LIFE %d\n"), m_nStartingLife);
		fileLines.push_back(strLine);
	}

	if (m_bPreconstructed)
		fileLines.push_back(_T("#PRE\n"));

	if (m_bNoCardLimit)
		fileLines.push_back(_T("#NO_CARD_LIMIT\n"));

	if (m_bNoShuffle || m_nStartingLife != 20 || m_bPreconstructed)
		fileLines.push_back(_T("\n"));

	if (m_bSealed)
	{
		/*
		#SEAL_CHECKSUM {GUID}
		#SEAL_COMPUTER NAME {GUID}
		#SEAL_MODIFY_DATE YYYY-DD-MM HH:MM:SS
		#SEAL_CREATE_DATE YYYY-DD-MM HH:MM:SS
		#SEAL_SEED SEED
		*/

		CString strLine;
		strLine.Format(_T("#SEAL_CHECKSUM %s\n"), m_SealChecksum.ToString());
		fileLines.push_back(strLine);

		strLine.Format(_T("#SEAL_COMPUTER %s %s\n"), m_strSealComputerName, m_SealComputerId.ToString());
		fileLines.push_back(strLine);

		strLine.Format(_T("#SEAL_CREATE_DATE %s\n"), GetSealCreationDateString(false));
		fileLines.push_back(strLine);

		strLine.Format(_T("#SEAL_MODIFY_DATE %s\n"), GetSealModificationDateString(false));
		fileLines.push_back(strLine);

		if (!m_strSealSeed.IsEmpty())
		{
			strLine.Format(_T("#SEAL_SEED %s\n"), m_strSealSeed);
			fileLines.push_back(strLine);
		}

		fileLines.push_back(_T("\n"));
	}

	// Deck and sideboard

	fileLines.insert(fileLines.end(), m_DeckLines.begin(), m_DeckLines.end());

	if (m_SideboardLines.size())
	{
		fileLines.push_back(_T("\n"));
		fileLines.insert(fileLines.end(), m_SideboardLines.begin(), m_SideboardLines.end());
	}

	if (m_StartBattlefieldLines.size())
	{
		fileLines.push_back(_T("\n"));
		fileLines.insert(fileLines.end(), m_StartBattlefieldLines.begin(), m_StartBattlefieldLines.end());
	}

	if (m_StartEmblemsLines.size())
	{
		fileLines.push_back(_T("\n"));
		fileLines.insert(fileLines.end(), m_StartEmblemsLines.begin(), m_StartEmblemsLines.end());
	}

	for(StringArray::iterator out=fileLines.begin(); out!=fileLines.end();out++)
	{
		out->Replace(_T("â"),_T("a"));
		out->Replace(_T("à"),_T("a"));
		out->Replace(_T("á"),_T("a"));
		out->Replace(_T("Æ"),_T("AE"));
		out->Replace(_T("é"),_T("e"));
		out->Replace(_T("ú"),_T("u"));
		out->Replace(_T("û"),_T("u"));
		//out->Replace(_T(":"),_T("")); //disabled this, because it affected the time format of sealed decks and made them corrupt
		//out->Replace(_T("."),_T(""));
	}

	return fileLines;
}

Guid CDeck::CalculateSealedChecksum() const
{
	if (!m_bSealed)
		return Guid();

	/*
	bool			m_bSealed;
	Guid			m_SealChecksum;
	COleDateTime	m_SealCreationDate;
	COleDateTime	m_SealModificationDate;
	CString			m_strSealSeed;
	Guid			m_SealComputerId;
	CString			m_strSealComputerName;
	*/

	// checksum = mod date + create date + [seed] + computer name + computer Id + non-BL cards (deck + sideboard)

	CMD5Checksum checksum;
	checksum.Update(m_SealModificationDate.GetYear());
	checksum.Update(m_SealModificationDate.GetMonth());
	checksum.Update(m_SealModificationDate.GetDay());
	checksum.Update(m_SealModificationDate.GetHour());
	checksum.Update(m_SealModificationDate.GetMinute());
	checksum.Update(m_SealModificationDate.GetSecond());

	ATLTRACE(_T("\n\n### Sealed modification date: %s\n"), GetSealModificationDateString(false));

	checksum.Update(m_SealCreationDate.GetYear());
	checksum.Update(m_SealCreationDate.GetMonth());
	checksum.Update(m_SealCreationDate.GetDay());
	checksum.Update(m_SealCreationDate.GetHour());
	checksum.Update(m_SealCreationDate.GetMinute());
	checksum.Update(m_SealCreationDate.GetSecond());

	ATLTRACE(_T("### Sealed creation date: %s\n"), GetSealCreationDateString(false));

	checksum.Update(m_strSealSeed);

	ATLTRACE(_T("### Sealed seed: %s\n"), m_strSealSeed);

	checksum.Update(m_strSealComputerName);
	checksum.Update(m_SealComputerId.ToString());

	ATLTRACE(_T("### Sealed computer: %s %s\n"), m_strSealComputerName, m_SealComputerId.ToString());

	DeckCards deck(m_Deck);
	deck.insert(deck.end(), m_Sideboard.begin(), m_Sideboard.end());
	std::sort(deck.begin(), deck.end(), Sorting::ByName);

	for (DeckCards::const_iterator j = deck.begin(); j != deck.end(); ++j)
	{
		const DeckCard& entry(*j);

		if ((entry.cardType & CardType::BasicLand).Any())
		{
			ATLTRACE(_T("### Skipped sealed card (%d): %s - %08x\n"), j - deck.begin(), entry.strCardName, entry.cardType);
			continue;
		}

		ATLTRACE(_T("### Sealed card (%d): %s\n"), j - deck.begin(), entry.strCardName);

		checksum.Update(entry.strCardName);
	}

	Guid checksum2(checksum.GetFinalChecksum());

	ATLTRACE(_T("### Sealed deck calculated checksum = %s\n"), checksum2.ToString());

	return checksum2;
}

void CDeck::Seal(LPCTSTR strSealSeed)
{
	if (m_bSealed)
	{
		ATLASSERT(false);
		return;
	}

	/*
	bool			m_bSealed;
	Guid			m_SealChecksum;
	COleDateTime	m_SealCreationDate;
	COleDateTime	m_SealModificationDate;
	CString			m_strSealSeed;
	Guid			m_SealComputerId;
	CString			m_strSealComputerName;
	*/

	m_bSealed = true;

	SYSTEMTIME st;
    GetSystemTime(&st);

	m_SealCreationDate = COleDateTime(st);
	m_SealModificationDate = m_SealCreationDate;

	if (strSealSeed)
		m_strSealSeed = strSealSeed;
	else
		m_strSealSeed.Empty();

	m_strSealComputerName = GetComputerName();
	m_SealComputerId = GetComputerId();

	m_SealChecksum = CalculateSealedChecksum();
}

void CDeck::UpdateSealModificationDate() const
{
	SYSTEMTIME st;
    GetSystemTime(&st);

	m_SealModificationDate = COleDateTime(st);
}

bool CDeck::IsSealOkay() const
{
	if (m_bSealed)
	{
		Guid newSealChecksum = CalculateSealedChecksum();
		if (newSealChecksum != m_SealChecksum)
		{
			ATLASSERT(false);
			return false;
		}
	}

	return true;
}

void CDeck::Unseal()
{
	m_bSealed = false;
}

CString CDeck::GetSealCreationDateString(bool bLocalTime) const
{
	CString strDate;
	if (!bLocalTime)
	{
		strDate.Format(_T("%04d-%02d-%02d %02d:%02d:%02d"),
			m_SealCreationDate.GetYear(),
			m_SealCreationDate.GetMonth(),
			m_SealCreationDate.GetDay(),
			m_SealCreationDate.GetHour(),
			m_SealCreationDate.GetMinute(),
			m_SealCreationDate.GetSecond());
		return strDate;
	}
	
	SYSTEMTIME sysTimeUtc;
	m_SealCreationDate.GetAsSystemTime(sysTimeUtc);

	FILETIME fileTimeUtc;
	if (!SystemTimeToFileTime(&sysTimeUtc, &fileTimeUtc))
		return _T("<error>");

	COleDateTime local(fileTimeUtc);
	strDate.Format(_T("%04d-%02d-%02d %02d:%02d:%02d"),
		local.GetYear(),
		local.GetMonth(),
		local.GetDay(),
		local.GetHour(),
		local.GetMinute(),
		local.GetSecond());
	return strDate;
}

CString CDeck::GetSealModificationDateString(bool bLocalTime) const
{
	CString strDate;
	if (!bLocalTime)
	{
		strDate.Format(_T("%04d-%02d-%02d %02d:%02d:%02d"),
			m_SealModificationDate.GetYear(),
			m_SealModificationDate.GetMonth(),
			m_SealModificationDate.GetDay(),
			m_SealModificationDate.GetHour(),
			m_SealModificationDate.GetMinute(),
			m_SealModificationDate.GetSecond());
		return strDate;
	}
	
	SYSTEMTIME sysTimeUtc;
	m_SealModificationDate.GetAsSystemTime(sysTimeUtc);

	FILETIME fileTimeUtc;
 	if (!SystemTimeToFileTime(&sysTimeUtc, &fileTimeUtc))
		return _T("<error>");

	COleDateTime local(fileTimeUtc);
	strDate.Format(_T("%04d-%02d-%02d %02d:%02d:%02d"),
		local.GetYear(),
		local.GetMonth(),
		local.GetDay(),
		local.GetHour(),
		local.GetMinute(),
		local.GetSecond());
	return strDate;
}
