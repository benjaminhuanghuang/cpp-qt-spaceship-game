#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>
//
#include "game.h"

// Global obj, can be accessed in all objects
Game *game;

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  game = new Game();
  game->show();

  return a.exec();
}
