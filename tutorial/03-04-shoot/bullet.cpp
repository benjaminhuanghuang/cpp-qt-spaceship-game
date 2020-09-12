#include <QTimer>
#include <QGraphicsScene>

#include "bullet.h"

Bullet::Bullet()
{
  setRect(0, 0, 10, 50);

  // connect
  QTimer *timer = new QTimer();

  connect(timer, SIGNAL(timeout()), this, SLOT(move()));

  // start timer
  timer->start(50);
}

void Bullet::move()
{
  setPos(x(), y() - 10);
  if (pos().y() + rect().height() < 0)
  {
    scene()->removeItem(this);
    delete this;
  }
}