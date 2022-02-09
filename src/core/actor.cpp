#include "actor.h"

Actor::Actor(const char *nameActor,QGraphicsItem *parent) : QGraphicsItem(parent)
{




}

int Actor::getIndexInList()
{
    return indexInList;
}

void Actor::setIndexInList(int newIndexInList)
{
    indexInList = newIndexInList;
}

QString &Actor::getName()
{
    return name;
}

void Actor::setName(char* newName)
{
    name = newName;
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

    if(Pressed){
        brush.setColor(Qt::red);

    } else {
        brush.setColor(Qt::green);
    }


    painter->fillRect(0,13,23,24,QColor(0,0,0,200));
    painter->fillRect(75,13,23,24,QColor(0,0,0,200));
    painter->fillRect(0,67,23,24,QColor(0,0,0,200));
    painter->fillRect(75,67,23,24,QColor(0,0,0,200));

    painter->fillRect(5,25,90,56,QColor(255,125,5,255));


}

void Actor::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);

}

void Actor::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);

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






