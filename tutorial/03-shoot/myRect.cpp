#include <QKeyEvent>
//
#include "myRect.h"
#include "bullet.h"

void MyRect::keyPressEvent(QKeyEvent *event)
{
  if (event->key() == Qt::Key_Left)
  {
    setPos(x() - 10, y());
  }
  else if (event->key() == Qt::Key_Right)
  {
    setPos(x() + 10, y());
  } 
  else if (event->key() == Qt::Key_Space)
  {
    // Create a bullet
    Bullet *bullet = new Bullet();
    bullet->setPos(x(), y());

    // Add bullet to the scene
    scene()->addItem(bullet);
  }
}