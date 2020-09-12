#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>
//
#include "game.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  Game *game = new Game();
  game->show();

  return a.exec();
}
