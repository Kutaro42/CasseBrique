#ifndef BUBBLE_H
#define BUBBLE_H

#include <QPointF>
#include <QColor>

class Bubble {
protected:
    QPointF position_ ;
    double radius_;
    bool alive;
public:
    Bubble(QPointF position_,double radius_,bool alive) : position_(position_),radius_(radius_), alive(alive) {};
    int points();
    QColor color();
    bool mustBeCleared();
};

class NormalBubble : public Bubble {

public:
    NormalBubble(QPointF position_, double radius_, bool alive): Bubble::Bubble(position_, radius_, alive){};
    int points_();
    QColor color_();
    bool mustBeCleared_();
};

class BonusBubble : public Bubble {

public:
    BonusBubble(QPointF position_, double radius_, bool alive): Bubble::Bubble(position_, radius_, alive){};
    int points_();
    QColor color_();
    bool mustBeCleared_();
};

class MalusBubble : public Bubble {

public:
    MalusBubble(QPointF position_, double radius_, bool alive): Bubble::Bubble(position_, radius_, alive){};
    int points_();
    QColor color_();
    bool mustBeCleared_();
};

#endif // BUBBLE_H
