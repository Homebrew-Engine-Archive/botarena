#pragma once

class CCard;
class CAction;

struct SelectionEntry
{
	static bool LessOrder(const SelectionEntry& e1, const SelectionEntry& e2)
	{
		return e1.nSelectionOrder < e2.nSelectionOrder;
	}

	SelectionEntry::SelectionEntry()
		: dwContext(0)
		, bSelected(FALSE)
		, nSelectionOrder(-1)
		, bTrick(FALSE)
		, pAssociatedPlayer(NULL)
	{}

	bool operator==(const SelectionEntry& entry) const
	{
		return !strText.Compare(entry.strText) &&
			dwContext == entry.dwContext &&
			cpAssociatedCard == entry.cpAssociatedCard &&
			bSelected == entry.bSelected &&
			nSelectionOrder == entry.nSelectionOrder &&
			cpAssociatedAction == entry.cpAssociatedAction &&
			bTrick == entry.bTrick &&
			pAssociatedPlayer == entry.pAssociatedPlayer;
	}

	bool operator!=(const SelectionEntry& entry) const
	{
		return !operator==(entry);
	}
	
	CString			strText;
	DWORD			dwContext;
	counted_ptr<CCard> cpAssociatedCard;
	BOOL			bSelected;
	int				nSelectionOrder;
	BOOL			bTrick;
	counted_ptr<CAction> cpAssociatedAction;	
	CPlayer*		pAssociatedPlayer;
};

//____________________________________________________________________________
//
typedef CValueContainer<SelectionEntry> CSelectionEntryContainer;