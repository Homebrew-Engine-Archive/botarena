#ifndef BOTARENA2_H
#define BOTARENA2_H

#include <QtWidgets/QMainWindow>
#include "ui_botarena2.h"
#include "ProjectIncludes.h"
#include "deckbuilderwindow.h"

class BotArena2 : public QMainWindow
{
	Q_OBJECT

public:
	BotArena2(QWidget *parent = 0);
	~BotArena2();
public slots:
	void openDeckBuilder();
private:
	Ui::BotArena2Class ui;
	DeckBuilderWindow * dw;
};

#endif // BOTARENA2_H
