
#include "bubble.h"

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
