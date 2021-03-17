#include "botarena2.h"
#include "botarena2app.h"
#include <QtWidgets/QApplication>

//BotArena version 2 Base
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CBotArena2App app;
	BotArena2 w;
	w.show();
	return a.exec();
}