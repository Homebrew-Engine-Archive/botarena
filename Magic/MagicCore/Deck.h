#pragma once

//________________________________________________________________________
//
class CORE_EXPORT CDeck
{
public:
	struct DeckStatus
	{
		enum Enum
		{
			Empty,
			Okay,
			NotEnoughCards,
			SealCorruption,
			ParseError
		};

		DEFINE_DISTINCT_ENUM_OPS(DeckStatus);

	public:
		static CString ToString(DeckStatus deckStatus)
		{
			switch(deckStatus.Get())
			{
				case DeckStatus::Empty:			 return _T("Empty Deck");				break;
				case DeckStatus::Okay:			 return _T("Okay");						break;
				case DeckStatus::NotEnoughCards: return _T("Not enough cards in deck"); break;
				case DeckStatus::SealCorruption: return _T("Sealed deck is corrupted"); break;
				case DeckStatus::ParseError:	 return _T("Parse error");				break;
			}

			return _T("Unknown");
		}

		CString ToString() const { return ToString(m_Value); }
	};

	struct DeckCard
	{
		CString strCardName;
		UINT nImageId;
		CardType cardType;
		int nScore;

		bool operator==(const DeckCard& rhs) const
		{
			return strCardName == rhs.strCardName && nImageId == rhs.nImageId;
		}
	};

	typedef std::vector<DeckCard> DeckCards;

	CDeck() { Clear(); }
	CDeck(LPCTSTR strDeckPath, bool bRemoveExtraCopies);

	// Imports and exports

	void Clear();
	void ImportDeck(LPCTSTR strDeckPath,	  bool bRemoveExtraCopies);
	void ImportDeck(const StringArray& lines, bool bRemoveExtraCopies);
	bool ExportDeck(LPCTSTR strDeckPath) const;

	// Status

	DeckStatus GetStatus()							  const { return m_Status;						}
	const StringSet& GetUnsupportedCards()			  const { return m_UnsupportedCards;			}
	const StringSet& GetCardsWithExtraCopiesRemoved() const { return m_CardsWithExtraCopiesRemoved; }

	// Content

	const DeckCards& GetDeck()						  const { return m_Deck;						}
	void SetDeck(const DeckCards& deckCards, bool bRemoveExtraCopies);
	const DeckCards& GetSideboard()					  const { return m_Sideboard;					}
	const DeckCards& GetStartWithBattlefield()		  const { return m_StartBattlefield;			}
	const DeckCards& GetStartWithEmblems()			  const { return m_StartEmblems;				}
	void SetSideboard(const DeckCards& sideboard);
	bool IsEmpty()									  const { return !m_Deck.size() && !m_Sideboard.size(); }

	const StringArray& GetDeckLines()				  const { return m_DeckLines;			  } 
	const StringArray& GetSideboardLines()			  const { return m_SideboardLines;		  } 
	const StringArray& GetStartWithBattlefieldLines() const { return m_StartBattlefieldLines; } 
	const StringArray& GetStartWithEmblemsLines()	  const { return m_StartEmblemsLines;	  } 
	const StringArray& GetHeaderLines()				  const { return m_HeaderLines;			  }
	void SetHeaderLines(const StringArray& headerLines)	    { m_HeaderLines = headerLines;	  }
	StringArray GetFileLines()						  const;

	// Deck settings

	bool GetNoShuffle()								  const { return m_bNoShuffle;				}
	int GetStartingLife()							  const { return m_nStartingLife;		    }
	bool GetPreconstructed()						  const { return m_bPreconstructed;			}
	bool GetReadOnly()								  const { return m_bReadOnly;				}
	bool GetNoCardLimit()							  const { return m_bNoCardLimit;			}

	void SetNoShuffle(bool bNoShuffle)						{ m_bNoShuffle = bNoShuffle;		}
	void SetPreconstructed(bool bPreconstructed)			{ m_bPreconstructed = bPreconstructed; }
	void SetNoCardLimit(bool bNoCardLimit)					{ m_bNoCardLimit = bNoCardLimit;	}

	bool GetSealed()								  const { return m_bSealed;					}
	COleDateTime GetSealCreationDate()				  const { return m_SealCreationDate;		}
	COleDateTime GetSealModificationDate()			  const { return m_SealModificationDate;	}
	CString GetSealCreationDateString(bool bLocalTime)	   const;
	CString GetSealModificationDateString(bool bLocalTime) const;
	CString GetSealSeed()							  const { return m_strSealSeed;				}
	Guid GetSealComputerId()						  const { return m_SealComputerId;			}
	CString GetSealComputerName()					  const { return m_strSealComputerName;		}

	void Seal(LPCTSTR strSealSeed = NULL);
	bool IsSealOkay()								  const;
	void Unseal();

	// Statistics (deck only, not for sideboard)

	const CManaPool::Color& GetProminentManaColorByCard() const { return m_ProminentManaColorByCard; }
	const CManaPool::Color& GetProminentManaColor()		  const { return m_ProminentManaColor;		 }
	const std::map<CManaPool::Color, int>& GetManaColorCountByCard() const { return m_ManaColorCountByCard; }
	const std::map<CManaPool::Color, int>& GetManaColorCount()		 const { return m_ManaColorCount;		}

	const std::map<CString, int>& GetCardNames()					 const { return m_CardNames;			}

	int    GetDeckCardCount()						  const { return m_Deck.size();						  }
	int    GetSideboardCardCount()					  const { return m_Sideboard.size();				  }
	int    GetLandCount()							  const { return m_nLandCount;						  }
	double GetLandPercentage()						  const { return GetPercentage(m_nLandCount);		  }
	int    GetPlaneswalkerCount()					  const { return m_nPlaneswalkerCount;				  }
	double GetPlaneswalkerPercentage()				  const { return GetPercentage(m_nPlaneswalkerCount); }
	int    GetCreatureCount()						  const { return m_nCreatureCount;					  }
	double GetCreaturePercentage()					  const { return GetPercentage(m_nCreatureCount);	  }
	int    GetInstantCount()						  const { return m_nInstantCount;					  }
	double GetInstantPercentage()					  const { return GetPercentage(m_nInstantCount);	  }
	int    GetSorceryCount()						  const { return m_nSorceryCount;					  }
	double GetSorceryPercentage()					  const { return GetPercentage(m_nSorceryCount);	  }
	int    GetArtifactCount()						  const { return m_nArtifactCount;					  }
	double GetArtifactPercentage()					  const { return GetPercentage(m_nArtifactCount);	  }
	int    GetEnchantmentCount()					  const { return m_nEnchantmentCount;				  }
	double GetEnchantmentPercentage()				  const { return GetPercentage(m_nEnchantmentCount);  }

	int    GetReferenceScore()						  const { return m_nReferenceScore;					  }

	const  std::set<SingleCreatureType>& GetCreatureTypes() const { return m_CreatureTypes; }
	
protected:
	static void GetCardColorSummary(const CCountedCardContainer& cards,
									std::map<CManaPool::Color, int>& summary,
									CManaPool::Color& prominentColor,		// Will not return colorless if there are other non-zero colors
									bool bFine);
	static int GetCardCount(const DeckCards& cards, LPCTSTR strCardame, UINT nImageId);

	void ClearStatus();
	void ClearStatistics();

	void UpdateCardStatistics(const CCard* pCard);
	double GetPercentage(int nCardCount) const { return static_cast<double>(nCardCount) * 100.0 / static_cast<double>(m_Deck.size()); }

	void UpdateLines();

	Guid CalculateSealedChecksum()    const;
	void UpdateSealModificationDate() const;

	// Status

	DeckStatus						m_Status;
	StringSet						m_UnsupportedCards;
	StringSet						m_CardsWithExtraCopiesRemoved;

	// Content

	DeckCards						m_Deck;
	DeckCards						m_Sideboard;
	DeckCards						m_StartBattlefield;
	DeckCards						m_StartEmblems;

	StringArray						m_HeaderLines;	
	StringArray						m_DeckLines;
	StringArray						m_SideboardLines;
	StringArray						m_StartBattlefieldLines;
	StringArray						m_StartEmblemsLines;

	// Settings

	bool							m_bNoShuffle;
	int								m_nStartingLife;
	bool							m_bPreconstructed;
	bool							m_bReadOnly;
	bool							m_bNoCardLimit;

	bool							m_bSealed;
	mutable Guid					m_SealChecksum;
	COleDateTime					m_SealCreationDate;
	mutable COleDateTime			m_SealModificationDate;
	CString							m_strSealSeed;
	Guid							m_SealComputerId;
	CString							m_strSealComputerName;

	// Statistics

	std::map<CString, int>			m_CardNames;

	int								m_nLandCount;
	int								m_nPlaneswalkerCount;
	int								m_nCreatureCount;
	int								m_nArtifactCount;
	int								m_nSorceryCount;
	int								m_nInstantCount;
	int								m_nEnchantmentCount;

	int								m_nTotalReferenceScore;
	int								m_nReferenceScore;
	std::set<SingleCreatureType>	m_CreatureTypes;
	CManaPool::Color				m_ProminentManaColorByCard;
	std::map<CManaPool::Color, int>	m_ManaColorCountByCard;
	CManaPool::Color				m_ProminentManaColor;
	std::map<CManaPool::Color, int>	m_ManaColorCount;
};
