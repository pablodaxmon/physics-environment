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

void ActorDinamic::startData()
{
    body->SetTransform(b2Vec2(positionX,positionY),0);
    Actor::startData();
}

void ActorDinamic::updateData(float time)
{
    last_positionX = positionX;
    last_positionY = positionY;
    positionX = body->GetPosition().x;
    positionY = body->GetPosition().y;
    setPos(body->GetPosition().x, body->GetPosition().y);

    last_velocityX = display_velocityX;
    last_velocityY = display_velocityY;

    display_velocityX = body->GetLinearVelocity().x;

    display_velocityY = body->GetLinearVelocity().y;
     qDebug() << " actorsystem : pos x " << body->GetPosition().x << " actorsystem : pos y " << body->GetPosition().y ;

    display_acelerationX = (fabsf(display_velocityX-last_velocityX))/(time-lastTime);
    display_acelerationY = (fabsf(display_velocityY-last_velocityY))/(time-lastTime);

    display_velocity = sqrtf(display_velocityX*display_velocityX + display_velocityY*display_velocityY);
    display_aceleration = sqrtf(display_acelerationX*display_acelerationX + display_acelerationY*display_acelerationY);

    update();

    emit valuesChanged();
    positionXData.append(QPoint(positionX,time*50));
    positionYData.append(QPoint(positionY,time*50));
    velocityData.append(QPoint(velocity,time*50));
    velocityXData.append(QPoint(velocityX,time*50));
    velocityYData.append(QPoint(velocityY,time*50));
    acelerationData.append(QPoint(aceleration,time*50));
    acelerationXData.append(QPoint(acelerationX,time*50));
    acelerationYData.append(QPoint(acelerationY,time*50));

    lastTime = time;
}

void ActorDinamic::stopData()
{
    positionX = init_positionX;
    positionY = init_positionY;
    body->SetTransform(b2Vec2(positionX,positionY),0);

    setPos(positionX, positionY);
    Actor::stopData();

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
