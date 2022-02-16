#include "actordinamic.h"

ActorDinamic::ActorDinamic(QGraphicsItem *parent) : Actor(parent)
{

}

b2Body *ActorDinamic::getBody() const
{
    return body;
}

void ActorDinamic::setBody(b2Body *newBody)
{
    body = newBody;
}

void ActorDinamic::updateData(float time)
{
    setPos(body->GetPosition().x, body->GetPosition().y);
    update();
    emit valuesChanged();
    qDebug() << body->GetPosition().y;
}

void ActorDinamic::updatePos()
{
}


void ActorDinamic::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    if(flags() & ItemIsMovable){
        positionX = pos().rx();
        positionY = pos().ry();
        body->SetTransform(b2Vec2(pos().rx(),pos().ry()),0);
        emit valuesChanged();
    }
    QGraphicsItem::mouseMoveEvent(event);
}
