#include <QTimer>
#include <QGraphicsScene>
#include <cstdlib>

#include "enemy.h"
#include "game.h"

extern Game *game;


Enemy::Enemy()
{
  int random_number = rand() % 700;
  setPos(random_number, 0)  ;

  setRect(0, 0, 50, 50);

  // connect
  QTimer *timer = new QTimer();

  connect(timer, SIGNAL(timeout()), this, SLOT(move()));

  // start timer
  timer->start(50);
}

void Enemy::move()
{
  setPos(x(), y() + 5);
  if (pos().y() > 600)
  {
    // decrease the health
    game->health->decrease();
    
    scene()->removeItem(this);
    delete this;
  }
}