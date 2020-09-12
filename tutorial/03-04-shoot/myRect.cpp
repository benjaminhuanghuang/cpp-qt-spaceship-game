#include <QKeyEvent>
//
#include "myRect.h"
#include "bullet.h"

void MyRect::keyPressEvent(QKeyEvent *event)
{
  if (event->key() == Qt::Key_Left)
  {
    if(x()> 0)
      setPos(x() - 10, y());
  }
  else if (event->key() == Qt::Key_Right)
  {
    if(x() + rect().width() < 800)
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