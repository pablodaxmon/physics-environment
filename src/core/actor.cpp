#include "actor.h"

void Actor::setValues()
{
    setPos(positionX, positionY);
    update();
    qDebug() << "Actor: values changes from properties";
}

void Actor::getValueFromID(int id)
{

}

Actor::Actor(QGraphicsItem *parent) : QGraphicsObject(parent)
{
// valores por defecto
    positionX = 0;
    positionY = 0;
    velocity = 0;
    velocityX = 0;
    velocityY = 0;
    aceleration = 0;
    acelerationX = 0;
    acelerationY = 0;
    mass = 0;


    setPos(positionX, positionY);
    setFlag(ItemIsSelectable, true);
    setAcceptHoverEvents(true);
}

void Actor::startData()
{
    init_positionX = positionX;
    init_positionY = positionY;
    init_velocityX = velocityX;
    init_velocityY = velocityY;
}

void Actor::updateData(float time)
{
    positionX = init_positionX + velocityX*time + (acelerationX*time*time/2);
    positionY = init_positionY+ velocityY*time + (acelerationY*time*time/2);
    setPos(positionX, positionY);
    update();
    emit valuesChanged();
}


int Actor::getIndexInList()
{
    return indexInList;
}

void Actor::setIndexInList(int newIndexInList)
{
    indexInList = newIndexInList;
}



QRectF Actor::boundingRect() const
{
    return QRectF(0,0,100,100);

}

void Actor::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{


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

    painter->setBrush(brush);
    painter->drawRect(28,28,42,42);

    painter->setPen(QColor(114,114,114,114));
    painter->setBrush(Qt::NoBrush);




    painter->drawText(25,85,name);



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

float Actor::getMass() const
{
    return mass;
}

void Actor::setMass(float newMass)
{
    mass = newMass;
}

float Actor::getAcelerationY() const
{
    return acelerationY;
}

void Actor::setAcelerationY(float newAcelerationY)
{
    acelerationY = newAcelerationY;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

float Actor::getAcelerationX() const
{
    return acelerationX;
}

void Actor::setAcelerationX(float newAcelerationX)
{
    acelerationX = newAcelerationX;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

float Actor::getAceleration() const
{
    return aceleration;
}

void Actor::setAceleration(float newAceleration)
{
    aceleration = newAceleration;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

float Actor::getVelocityY() const
{
    return velocityY;
}

void Actor::setVelocityY(float newVelocityY)
{
    velocityY = newVelocityY;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

float Actor::getVelocityX() const
{
    return velocityX;
}

void Actor::setVelocityX(float newVelocityX)
{
    velocityX = newVelocityX;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

float Actor::getVelocity() const
{
    return velocity;
}

void Actor::setVelocity(float newVelocity)
{
    velocity = newVelocity;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

float Actor::getPositionY() const
{
    return positionY;
}

void Actor::setPositionY(float newPositionY)
{
    positionY = newPositionY;
    setPos(positionX, positionY);
    emit valuesChanged();

    update();
}

float Actor::getPositionX() const
{
    return positionX;
}

void Actor::setPositionX(float newPositionX)
{
    positionX = newPositionX;
    setPos(positionX, positionY);
    emit valuesChanged();
    update();
}

QMap<Unit, float> *Actor::getValues()
{
    return &values;
}

void Actor::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    update();
    emit valuesChanged();
    QGraphicsItem::mousePressEvent(event);


}

void Actor::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}

void Actor::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    if(flags() & ItemIsMovable){
        positionX = pos().rx();
        positionY = pos().ry();
        emit valuesChanged();
    }
    QGraphicsItem::mouseMoveEvent(event);
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
    update();
}






