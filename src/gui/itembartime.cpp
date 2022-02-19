#include "itembartime.h"

itemBarTime::itemBarTime(QGraphicsItem *parent) : QGraphicsObject(parent)
{

}

QRectF itemBarTime::boundingRect() const
{
    return QRectF(0,0,6000,25);
}

void itemBarTime::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    painter->setPen(Qt::NoPen);
    painter->setBrush(QColor(192,192,192,255));
    painter->drawRect(boundingRect());

    painter->setPen(QColor(20,20,20,255));
    for(int i = 0;i<120;i++){
        painter->drawText(i*50,20,QString::number(i));
    }


}
