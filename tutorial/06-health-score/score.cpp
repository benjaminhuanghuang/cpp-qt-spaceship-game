#include <QFont>

#include "score.h"

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
  score = 0;
  setDefaultTextColor(Qt::blue);
  setFont(QFont("times", 16));

  drawText();
}

void Score::increase()
{
  score++;
  drawText();
}

int Score::getScore()
{
  return score;
}

void Score::drawText()
{
  setPlainText("Score: " + QString::number(score));
}
