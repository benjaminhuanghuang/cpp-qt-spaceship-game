#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  // Create a scene
  QGraphicsScene *scene = new QGraphicsScene();

  // Create item and put it into the scene
  QGraphicsRectItem *rect = new QGraphicsRectItem();
  rect->setRect(0, 0, 100, 100);
  scene->addItem(rect);

  // Add view
  QGraphicsView *view = new QGraphicsView(scene);
  view->show();
  
  return a.exec();
}
