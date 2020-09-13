#include <QGraphicsTextItem>
#include <QFont>
#include <QTimer>
#include <QMediaPlayer>

#include "game.h"
#include "enemy.h"

Game::Game(QWidget *parent)
{
  // Crete scene
  scene = new QGraphicsScene();
  scene->setSceneRect(0, 0, 800, 600);

  // make the scene visible by set it to QGraphicsView
  setScene(scene);
  setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setFixedSize(800, 600);

  // Create the player
  player = new Player();
  player->setPos(400, 500);
  player->setFlag(QGraphicsItem::ItemIsFocusable);
  player->setFocus();
  scene->addItem(player);

  // Score
  score = new Score();
  scene->addItem(score);

  // Health
  health = new Health();
  health->setPos(health->x(), health->y()+25);
  scene->addItem(health);

  // Spawn enemies
  QTimer *timer = new QTimer();
  QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
  timer->start(2000);

  // Play background music
  QMediaPlayer  *music = new QMediaPlayer();
  music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
  music->play();

  show();
}