#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QList>

#include "bullet.h"
#include "enemy.h"
#include "game.h"

extern Game *game;

Bullet::Bullet(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
  // draw graphics
  setPixmap(QPixmap(":/images/bullet.png"));

  // connect
  QTimer *timer = new QTimer();

  connect(timer, SIGNAL(timeout()), this, SLOT(move()));

  // start timer
  timer->start(50);
}

void Bullet::move()
{
  // collid
  QList<QGraphicsItem *> colliding_items = collidingItems();
  for (int i = 0; i < colliding_items.size(); i++)
  {
    if (typeid(*(colliding_items[i])) == typeid(Enemy))
    {
      // increase the score
      game->score->increase();

      //
      scene()->removeItem(colliding_items[i]);
      scene()->removeItem(this);
      delete colliding_items[i];
      delete this;
      return;
    }
  }
  setPos(x(), y() - 10);
  if (pos().y() + boundingRect().height() < 0)
  {
    scene()->removeItem(this);
    delete this;
  }
}