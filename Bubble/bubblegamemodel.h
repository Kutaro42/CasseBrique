#ifndef BUBBLEGAMEMODEL_H
#define BUBBLEGAMEMODEL_H

#include <QList>

class BubbleGameModel {
private :
    QList<Bubble*> bubbles_;
    int score_;
    int level_;
    double gameTimer_;
signals :
    void scoreChanged(int);
    void levelReady(int);
    void timeChanged(int);
    void bubbleUpdated();
    void gameOver(int, int);
public :
    void startNewGame();
    void startLevel();
    void popBubble(int);

};

#endif // BUBBLEGAMEMODEL_H
