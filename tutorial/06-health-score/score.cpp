#include <QFont>

#include "score.h"

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
  score = 0;

  // draw the text
  setPlainText("Score: " + QString::number(score));
  setDefaultTextColor(Qt::blue);
  setFont(QFont("times", 16));
}

void Score::increase()
{
  score++;
}

int Score::getScore()
{
  return score;
}
