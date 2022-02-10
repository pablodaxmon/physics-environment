#include "actor.h"

Actor::Actor(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    selected = false;

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
    QBrush brush(Qt::blue);

    if(selected){

        brush.setColor(Qt::green);
    } else {
        brush.setColor(Qt::NoBrush);
    }

    painter->setBrush(brush);
    painter->drawRect(rec);





}

bool Actor::getSelected() const
{
    return selected;
}

void Actor::setSelected(bool newSelected)
{
    selected = newSelected;
}

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

void Actor::setPressed(bool newPressed)
{
    selected = newPressed;
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






