#ifndef BULLET_H
#define BULLET_H

#include <QObject>   // For using the signal slot
#include <QGraphicsRectItem>

class Bullet : public QObject, public QGraphicsRectItem
{
  Q_OBJECT   // For using the signal slot
public:
  Bullet();
public slots:
  void move();
};

#endif 