

#include "deckbuilderwindow.h"
#include <concrt.h>
#include "..\Magic\MagicCore\CardStore.h"

DeckBuilderWindow::DeckBuilderWindow()
	: QMainWindow()
{
	ui.setupUi(this);
	// Populate data


	DWORD dwPos = CCardStore::GetInstance()->EnumCardStartPos();
	CCardEntry* pCardEntry;

	while (CCardStore::GetInstance()->EnumCardNextPos(dwPos, &pCardEntry))
	{
		
	}
}

DeckBuilderWindow::~DeckBuilderWindow()
{

}
