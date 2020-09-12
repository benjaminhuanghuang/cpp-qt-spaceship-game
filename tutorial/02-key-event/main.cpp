#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsView>

//
#include "myRect.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  // Create a scene
  QGraphicsScene *scene = new QGraphicsScene();

  // Create item and put it into the scene
  MyRect *rect = new MyRect();
  rect->setRect(0, 0, 100, 100);
  scene->addItem(rect);


  // Set focus
  rect->setFlag(QGraphicsItem::ItemIsFocusable);
  rect->setFocus();


  // Add view
  QGraphicsView *view = new QGraphicsView(scene);
  view->show();
  
  return a.exec();
}
