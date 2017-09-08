#include "ballwidget.h"
#include <QPainter>

BallWidget::BallWidget(QWidget *parent) : QWidget(parent)
{

}

void BallWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush(Qt::black);
    painter.setPen(Qt::NoPen);
    painter.setBrush(brush);
    painter.drawRect(0, 0, width(), height());
}
