#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>

class Player : public QObject, public QGraphicsRectItem
{
  Q_OBJECT
public:
  void keyPressEvent(QKeyEvent *event);

public slots:
  void spawn();
};

#endif // MYRECT_H