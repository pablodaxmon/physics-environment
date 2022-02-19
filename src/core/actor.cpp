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
    /*positionYData = new QPainterPath(QPointF(0,0));
    velocityData = new QPainterPath(QPointF(0,0));
    velocityXData = new QPainterPath(QPointF(0,0));
    velocityYData = new QPainterPath(QPointF(0,0));
    acelerationData = new QPainterPath(QPointF(0,0));
    acelerationXData = new QPainterPath(QPointF(0,0));
    acelerationYData = new QPainterPath(QPointF(0,0));*/
// valores por defecto
    lastTime = 0;
    positionX = 0;
    positionY = 0;
    velocity = 0;
    velocityX = 0;
    velocityY = 0;
    aceleration = 0;
    acelerationX = 0;
    acelerationY = 0;
    mass = 0;

    display_velocity = 0;
    display_velocityX = 0;
    display_velocityY = 0;
    display_aceleration = 0;
    display_acelerationX = 0;
    display_acelerationY = 0;

    emit valuesChanged();

    setPos(positionX, positionY);
    setFlag(ItemIsSelectable, true);
    setAcceptHoverEvents(true);
}

void Actor::startData(b2World *world)
{
    init_positionX = positionX;
    init_positionY = positionY;
    init_velocityX = velocityX;
    init_velocityY = velocityY;
    init_acelerationX = acelerationX;
    init_acelerationY = acelerationY;

}

void Actor::updateData(float time)
{
    positionXData.append(positionX);
    positionYData.append(positionY);
    velocityXData.append(display_velocityX);
    velocityYData.append(display_velocityY);
    acelerationXData.append(display_acelerationX);
    acelerationYData.append(display_acelerationY);

    last_positionX = positionX;
    last_positionY = positionY;

    positionX = init_positionX + velocityX*time + (acelerationX*time*time/2);
    positionY = init_positionY + velocityY*time + (acelerationY*time*time/2);

    setPos(positionX, positionY);

    last_velocityX = display_velocityX;
    last_velocityY = display_velocityY;

    display_velocityX = (fabsf(positionX-last_positionX))/(time-lastTime);
    display_velocityY = (fabsf(positionY-last_positionY))/(time-lastTime);


    display_acelerationX = (fabsf(display_velocityX-last_velocityX))/(time-lastTime);
    display_acelerationY = (fabsf(display_velocityY-last_velocityY))/(time-lastTime);

    display_velocity = sqrtf(display_velocityX*display_velocityX + display_velocityY*display_velocityY);
    display_aceleration = sqrtf(display_acelerationX*display_acelerationX + display_acelerationY*display_acelerationY);

    update();
    emit valuesChanged();

    lastTime = time;

}

void Actor::stopData()
{

    positionXData.clear();
    positionYData.clear();
    velocityXData.clear();
    velocityYData.clear();
    acelerationXData.clear();
    acelerationYData.clear();

    display_velocity = 0;
    display_velocityX = 0;
    display_velocityY = 0;
    display_aceleration = 0;
    display_acelerationX = 0;
    display_acelerationY = 0;

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
            QPointF(58.0, 8.0),
            QPointF(42.0, 8.0)
        };
        static const QPointF trianguloRight[3] = {
            QPointF(100.0, 50.0),
            QPointF(92.0, 58.0),
            QPointF(92.0, 42.0)
        };
        static const QPointF trianguloleft[3] = {
            QPointF(0, 50),
            QPointF(8, 58),
            QPointF(8, 42)
        };

        painter->setPen(Qt::NoPen);
        painter->setBrush(QColor(255,61,61,255));
        painter->drawPolygon(trianguloUp, 3);

        painter->setBrush(QColor(61,61,255,255));
        painter->drawPolygon(trianguloRight, 3);
        painter->drawPolygon(trianguloleft, 3);

    }


    painter->setPen(colorPen);

    if(isSelected()){
        painter->setBrush(Qt::white);
    } else {
        painter->setBrush(colorBrush);
    }

    painter->drawPolygon(shape);

    painter->setPen(QColor(114,114,114,114));
    painter->setBrush(Qt::NoBrush);




    painter->drawText(25,95,name);



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

const QColor &Actor::getColorPen() const
{
    return colorPen;
}

const QVector<float> &Actor::getAcelerationYData() const
{
    return acelerationYData;
}

const QVector<float> &Actor::getAcelerationXData() const
{
    return acelerationXData;
}

const QVector<float> &Actor::getVelocityYData() const
{
    return velocityYData;
}

const QVector<float> &Actor::getVelocityXData() const
{
    return velocityXData;
}

const QVector<float> &Actor::getPositionYData() const
{
    return positionYData;
}

const QVector<float> &Actor::getPositionXData() const
{
    return positionXData;
}







TypeActor Actor::getTypeActor() const
{
    return typeActor;
}

void Actor::setTypeActor(TypeActor newTypeActor)
{
    typeActor = newTypeActor;

    switch (newTypeActor) {
    case TypeActor::Cuadrado:
            shape << QPointF(20, 20) << QPointF(80, 20) << QPointF(80, 80) << QPointF(20, 80);
            colorBrush = QColor(155,255,222,255);
            colorPen = QColor(35,192,203,255);
        break;
    case TypeActor::Triangulo:
            shape << QPointF(20, 75) << QPointF(80, 75) << QPointF(50, 20);
            colorBrush = QColor(204,255,155,255);
            colorPen = QColor(119,214,38,255);
        break;
    case TypeActor::Hexagono:
            shape << QPointF(35, 30) << QPointF(65, 30) << QPointF(80, 50) << QPointF(65, 70) << QPointF(35, 70) << QPointF(20, 50);
            colorBrush = QColor(255,192,155,255);
            colorPen = QColor(239,107,30,255);
        break;
    case TypeActor::CuboEstatico:
            shape << QPointF(15, 80) << QPointF(85, 80) << QPointF(85, 10) << QPointF(15, 10);
            colorBrush = QColor(114,162,231,255);
            colorPen = QColor(35,103,203,255);
            isStatic = true;
        break;
    case TypeActor::TrianguloEstatico:
            shape << QPointF(5, 80) << QPointF(95, 80) << QPointF(50, 10);
            colorBrush = QColor(208,88,137,255);
            colorPen = QColor(134,25,70,255);
            isStatic = true;
        break;
    default:
        break;
    }
}

const QString &Actor::getIdentifier() const
{
    return identifier;
}

void Actor::setIdentifier(const QString &newIdentifier)
{
    identifier = newIdentifier;
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
    return display_acelerationY;
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
    return display_acelerationX;
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
    return display_aceleration;
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
    return display_velocityY;
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
    return display_velocityX;
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
    return display_velocity;
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






