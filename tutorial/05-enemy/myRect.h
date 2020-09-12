#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>

class MyRect : public QObject, public QGraphicsRectItem
{
  Q_OBJECT
public:
  void keyPressEvent(QKeyEvent *event);

public slots:
  void spawn();
};

#endif // MYRECT_H