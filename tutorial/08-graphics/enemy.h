#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>   // For using the signal slot
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

class Enemy : public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT   // For using the signal slot
public:
  Enemy(QGraphicsItem *parent = nullptr);
public slots:
  void move();
};

#endif 