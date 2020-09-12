#ifndef GAME_H
#define GAME_H


#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

#include "player.h"
#include "score.h"

class Game: public QGraphicsView{
    Q_OBJECT
public:
    // constructors
    Game(QWidget* parent=NULL);

    // public attributes
    QGraphicsScene* scene;

    Player* player;
    Score* score;
};

#endif