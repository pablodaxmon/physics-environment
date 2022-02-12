#include "actor.h"

void Actor::setValues()
{
    setPos(values.value(Unit::PosicionX), values.value(Unit::PosicionY));
    update();
    qDebug() << "Actor: values changes from properties";
}

Actor::Actor(QGraphicsItem *parent) : QGraphicsObject(parent)
{
    values.insert(Unit::Velocidad, 0);
    values.insert(Unit::VelocidadX, 0);
    values.insert(Unit::VelocidadY, 0);
    values.insert(Unit::Aceleracion, 0);
    values.insert(Unit::AceleracionX, 0);
    values.insert(Unit::AceleracionY, 0);
    values.insert(Unit::PosicionX, 0);
    values.insert(Unit::PosicionY, 0);

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

QMap<Unit, float> *Actor::getValues()
{
    return &values;
}





void Actor::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    update();
    emit valuesChanged(&values);
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
        values.insert(Unit::PosicionX, pos().rx());
        values.insert(Unit::PosicionY, pos().ry());
        emit valuesChanged(&values);
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
}






