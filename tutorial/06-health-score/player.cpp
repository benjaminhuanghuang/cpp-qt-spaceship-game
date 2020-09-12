#include <QKeyEvent>
//
#include "player.h"
#include "bullet.h"
#include "enemy.h"

void Player::keyPressEvent(QKeyEvent *event)
{
  if (event->key() == Qt::Key_Left)
  {
    if (x() > 0)
      setPos(x() - 10, y());
  }
  else if (event->key() == Qt::Key_Right)
  {
    if (x() + rect().width() < 800)
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

void Player::spawn()
{
  Enemy *enemy = new Enemy();
  scene()->addItem(enemy);
}