#ifndef BUBBLEWINDOW_H
#define BUBBLEWINDOW_H

#include <QMainWindow>
#include <QStatusBar>
#include <QLabel>
#include <QMenuBar>
#include <QAction>

class BubbleWindow : public QMainWindow
{
    Q_OBJECT

public:
    BubbleWindow(QWidget *parent = nullptr);
    ~BubbleWindow();

private:

    void createActions();
    void createMenuBar();
    void createToolBar();

    QAction *exitAction;
    QAction *settingsAction;
    QAction *scoreAction;
    QAction *newGameAction;
    QAction *creditAction;

    void setupMenus();

signals:
// Signaux de navigation (menu système + MenuView)
void newGameRequested();
void settingsRequested();
void scoresRequested();
void quitRequested();
void creditRequested();
};


#endif // BUBBLEWINDOW_H
