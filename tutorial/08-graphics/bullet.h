#ifndef BULLET_H
#define BULLET_H

#include <QObject> // For using the signal slot
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class Bullet : public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT // For using the signal slot
      public : Bullet(QGraphicsItem *parent = nullptr);
public slots:
  void move();
};

#endif