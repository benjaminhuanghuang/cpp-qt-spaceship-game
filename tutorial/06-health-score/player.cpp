#include <QKeyEvent>
//
#include "player.h"
#include "bullet.h"
#include "enemy.h"

void Player::keyPressEvent(QKeyEvent *event)
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

void Player::spawn()
{
  Enemy *enemy = new Enemy();
  scene()->addItem(enemy);
}