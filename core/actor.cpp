#include "actor.h"

Actor::Actor(const char *nameActor,QGraphicsItem *parent) : QGraphicsItem(parent)
{
    name = nameActor;
    Pressed = false;
    setFlag(ItemIsMovable);

    variables->insert(Unit::PosicionX, 0);
    variables->insert(Unit::PosicionY, 0);
    variables->insert(Unit::Aceleracion, 0);
    variables->insert(Unit::Velocidad, 0);
    variables->insert(Unit::AceleracionX, 0);
    variables->insert(Unit::AceleracionY, 0);
    variables->insert(Unit::VelocidadX, 0);
    variables->insert(Unit::VelocidadY, 0);
    variables->insert(Unit::Rotacion, 0);

    valores->append(_time);//tiempo
    valores->append(1);//vel
    valores->append(1);//ace
    valores->append(2);//2



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

void Actor::StartFrame()
{
}

void Actor::UpdateFrame()
{

    _time += 0.03;

    valores->replace(0, _time);


    float velBef = speedX;
    float bef = position.x()/15;
    position.setX(equationrunner->getResult(eq, valores)*10);

    float aft = position.x()/15;

    speedX = (aft-bef)/0.03;

    aceleracion = (speedX-velBef)/0.03;



    setPos(position);

    variables->insert(Unit::PosicionX, position.x()/15);

    variables->insert(Unit::VelocidadX,speedX);

    variables->insert(Unit::AceleracionX, aceleracion);

}

void Actor::LastUpdateFrame()
{
}

void Actor::setEquation(char *code,Unit unit)
{
    Equation * equation = new Equation(code);

    equationMaker->makeEquation(equation);

    listEquations->insert(unit,&(*equation));


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
    setPosition(pos());

}

/*void Actor::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    setPosition(pos());

    update();
    QGraphicsItem::mouseReleaseEvent(event);
}*/

void Actor::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
    setPosition(pos());

}

Equation *Actor::getEq() const
{
    return eq;
}

void Actor::setEq(Equation *newEq)
{
    eq = newEq;
}

void Actor::updateVariables()
{

}

QMap<Unit, float> *Actor::getVariables() const
{
    return variables;
}

void Actor::setVariables(QMap<Unit, float> *newVariables)
{
    variables = newVariables;
}



const QPointF &Actor::getPosition() const
{
    return position;
}

void Actor::setPosition(const QPointF &newPosition)
{
    variables->insert(Unit::PosicionX, newPosition.x());

    variables->insert(Unit::PosicionY, newPosition.y());
    position = newPosition;
}


