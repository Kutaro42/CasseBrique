#include "bubblewindow.h"
#include "config.h"

BubbleWindow::BubbleWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Window config
    setWindowTitle(AppConfig::WINDOW_TITLE);
    resize(AppConfig::WINDOW_WIDTH,AppConfig::WINDOW_HEIGHT);


    createActions(); // Les actions
    createMenuBar(); // Les menus
    createToolBar(); // La toolbar

}

BubbleWindow::~BubbleWindow() {}

void BubbleWindow::createActions()
{
    exitAction = new QAction("&Quit", this);
    exitAction->setShortcut(QKeySequence::Quit); // Ctrl+Q
    connect(exitAction, &QAction::triggered, this, &BubbleWindow::quitRequested);

    newGameAction = new QAction("New game",this);
    newGameAction->setShortcut(QKeySequence::New);  //Ctrl+N
    connect(newGameAction, &QAction::triggered, this, &BubbleWindow::newGameRequested);

    settingsAction = new QAction("&Settings",this);
    connect(settingsAction, &QAction::triggered, this, &BubbleWindow::settingsRequested);

    scoreAction = new QAction("Q& Score lader",this);
    connect(scoreAction, &QAction::triggered,this, &BubbleWindow::scoresRequested);

    creditAction = new QAction("&Credit",this);
    connect(creditAction, &QAction::triggered,this, &BubbleWindow::creditRequested);
}
void BubbleWindow::createMenuBar()
{
    QMenu *mainmenu = menuBar()->addMenu("&Fichier");
    mainmenu->addAction(newGameAction);
    mainmenu->addAction(exitAction);

    QMenu *helpMenu = menuBar()->addMenu("&Settings");
    helpMenu->addAction(settingsAction);
    helpMenu->addAction(scoreAction);
}
void BubbleWindow::createToolBar()
{

}
