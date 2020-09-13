#include <QKeyEvent>
//
#include "player.h"
#include "bullet.h"
#include "enemy.h"


Player::Player(QGraphicsItem *parent): QGraphicsRectItem(parent){
  bulletsound = new QMediaPlayer();
  bulletsound->setMedia(QUrl("qrc:/sounds/bullet.wav"));
}


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
    // play sound
    if (bulletsound->state() == QMediaPlayer::PlayingState)
    {
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
      bulletsound->play();
    }
  }
}

void Player::spawn()
{
  Enemy *enemy = new Enemy();
  scene()->addItem(enemy);
}