#include "botarena2.h"

BotArena2::BotArena2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(openDeckBuilder()));

	//Load cards
	CCardFactory::GetInstance()->Initialize();
}

BotArena2::~BotArena2()
{

}
void BotArena2::openDeckBuilder()
{
	dw = new DeckBuilderWindow;
	dw->show();
}
