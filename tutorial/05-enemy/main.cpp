#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>
//
#include "myRect.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  // Create a scene
  QGraphicsScene *scene = new QGraphicsScene();

  // Create item and put it into the scene
  MyRect *player = new MyRect();
  player->setRect(0, 0, 100, 100);
  scene->addItem(player);

  // Set focus
  player->setFlag(QGraphicsItem::ItemIsFocusable);
  player->setFocus();

  // Add view
  QGraphicsView *view = new QGraphicsView(scene);
  view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  view->setFixedSize(800, 600);
  scene->setSceneRect(0, 0, 800, 600);
  view->show();

  // Put player
  player->setPos(view->width() / 2 - player->rect().width() / 2, view->height() - player->rect().height());

  // Spawn ememies
  QTimer *timer = new QTimer();
  QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
  timer->start(2000);

  return a.exec();
}
