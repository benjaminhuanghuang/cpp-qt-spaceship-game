#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

class MyRect : public QGraphicsRectItem
{
public:
  void keyPressEvent(QKeyEvent *event);
};

#endif // MYRECT_H