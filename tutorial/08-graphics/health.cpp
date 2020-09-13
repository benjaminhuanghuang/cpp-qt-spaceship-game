#include <QFont>

#include "health.h"

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
  health = 10;
  setDefaultTextColor(Qt::red);
  setFont(QFont("times", 16));

  drawText();
}

void Health::decrease()
{
  health--;
  drawText();
}

int Health::getHealth()
{
  return health;
}

void Health::drawText()
{
  setPlainText("Health: " + QString::number(health));
}
