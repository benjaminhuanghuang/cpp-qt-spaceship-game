#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>   // For using the signal slot
#include <QGraphicsRectItem>

class Enemy : public QObject, public QGraphicsRectItem
{
  Q_OBJECT   // For using the signal slot
public:
  Enemy();
public slots:
  void move();
};

#endif 