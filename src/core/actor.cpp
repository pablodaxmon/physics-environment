#include "actor.h"

Actor::Actor(QGraphicsItem *parent) : QGraphicsItem(parent)
{

    setFlag(ItemIsSelectable, true);
    setAcceptHoverEvents(true);
}

int Actor::getIndexInList()
{
    return indexInList;
}

void Actor::setIndexInList(int newIndexInList)
{
    indexInList = newIndexInList;
}

void Actor::updateData()
{

}

QRectF Actor::boundingRect() const
{
    return QRectF(0,0,100,100);

}

void Actor::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QRectF rec = boundingRect();
    painter->drawRect(rec);

    if(flags() & ItemIsMovable){
        static const QPointF trianguloUp[3] = {
            QPointF(50.0, 0),
            QPointF(55.0, 10.0),
            QPointF(45.0, 10.0)
        };
        static const QPointF trianguloDown[3] = {
            QPointF(100.0, 50.0),
            QPointF(90.0, 55.0),
            QPointF(90.0, 45.0)
        };
        painter->setPen(QPen(QColor(228,0,0,255),1));
        painter->drawLine(50,50,50,10);
        painter->drawPolygon(trianguloUp, 3);

        painter->setPen(QPen(QColor(0,0,220,255),1));
        painter->drawLine(50,50,90,50);
        painter->drawPolygon(trianguloDown, 3);

    }
    QBrush brush(Qt::blue);

    if(isSelected()){
        brush.setColor(Qt::red);
    } else {
        brush.setColor(Qt::blue);
    }

    painter->drawText(20,85,QString::number(pos().rx()));
    painter->drawText(55,85,QString::number(pos().ry()));
    painter->setBrush(brush);
    painter->drawRect(35,35,35,35);





}

/*bool Actor::getSelected() const
{
    return selected;
}

void Actor::setSelected(bool newSelected)
{
    selected = newSelected;
}*/

void Actor::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    graphicsScene->setClickItem(true);
    update();
}

void Actor::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{

    graphicsScene->setClickItem(false);
    update();
}





void Actor::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    update();
    QGraphicsItem::mousePressEvent(event);


}

void Actor::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}

void Actor::setGraphicsScene(GraphicsScene *newGraphicsview)
{
    graphicsScene = newGraphicsview;
}

const QString &Actor::getName() const
{
    return name;
}

void Actor::setName(const QString &newName)
{
    name = newName;
}

float Actor::getAccelerationY() const
{
    return accelerationY;
}

void Actor::setAccelerationY(float newAccelerationY)
{
    accelerationY = newAccelerationY;
}

float Actor::getAccelerationX() const
{
    return accelerationX;
}

void Actor::setAccelerationX(float newAccelerationX)
{
    accelerationX = newAccelerationX;
}

float Actor::getAcceleration() const
{
    return acceleration;
}

void Actor::setAcceleration(float newAcceleration)
{
    acceleration = newAcceleration;
}

float Actor::getSpeedY() const
{
    return speedY;
}

void Actor::setSpeedY(float newSpeedY)
{
    speedY = newSpeedY;
}

float Actor::getSpeedX() const
{
    return speedX;
}

void Actor::setSpeedX(float newSpeedX)
{
    speedX = newSpeedX;
}

float Actor::getSpeed() const
{
    return speed;
}

void Actor::setSpeed(float newSpeed)
{
    speed = newSpeed;
}

float Actor::getPositionY() const
{
    return positionY;
}

void Actor::setPositionY(float newPositionY)
{
    positionY = newPositionY;
}

float Actor::getPositionX() const
{
    return positionX;
}

void Actor::setPositionX(float newPositionX)
{
    positionX = newPositionX;
}






