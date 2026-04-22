#ifndef BUBBLE_H
#define BUBBLE_H

#include <QPointF>
#include <QColor>

class Bubble {
protected:
    QPointF posistion_ ;
    double radius_;
    bool alive;
public:
    int points();
    QColor color();
    bool mustBeCleared();
};

class NormalBubble : public Bubble {

public:
    int points();
    QColor color();
    bool mustBeCleared();
};

class BonusBubble : public Bubble {

public:
    int points();
    QColor color();
    bool mustBeCleared();
};

class MalusBubble : public Bubble {

public:
    int points();
    QColor color();
    bool mustBeCleared();
};

#endif // BUBBLE_H
