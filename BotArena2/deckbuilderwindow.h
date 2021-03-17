#ifndef DECKBUILDERWINDOW_H
#define DECKBUILDERWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_deckbuilderwindow.h"
#include "ProjectIncludes.h"

class DeckBuilderWindow : public QMainWindow
{
	Q_OBJECT

public:
	DeckBuilderWindow();
	~DeckBuilderWindow();

private:
	Ui::DeckBuilderWindow ui;
};

#endif // DECKBUILDERWINDOW_H
