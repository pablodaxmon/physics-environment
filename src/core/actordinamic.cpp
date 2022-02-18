#include "actordinamic.h"
#define SCALE_V 6.0f

ActorDinamic::ActorDinamic(QGraphicsItem *parent) : Actor(parent)
{

    bodyDef = new b2BodyDef;
    bodyDef->type = b2_dynamicBody;
    bodyDef->awake = true;
    positionX = 0;
    positionY = -200;
    bodyDef->position.Set(positionX/SCALE_V,positionY/SCALE_V);

    setPos(positionX, positionY);
}

b2Body *ActorDinamic::getBody() const
{
    return body;
}


void ActorDinamic::startData(b2World* world)
{
    if(typeActor == TypeActor::TrianguloEstatico || typeActor == TypeActor::CuboEstatico){

    }

    body = world->CreateBody(bodyDef);

    switch (typeActor) {
    case TypeActor::Cuadrado:
                {
                    b2Vec2 vertices[4];
                    vertices[0].Set(20.0f/SCALE_V, 20.0f/SCALE_V);
                    vertices[1].Set(20.0f/SCALE_V, 80.0f/SCALE_V);
                    vertices[2].Set(80.0f/SCALE_V, 80.0f/SCALE_V);
                    vertices[3].Set(80.0f/SCALE_V, 20.0f/SCALE_V);

                    int32 count = 4;
                    b2PolygonShape polygon;
                    polygon.Set(vertices, count);
                    body->CreateFixture(&polygon, 1.0f);
                    break;
                }
    case TypeActor::Triangulo:
                {
                    b2Vec2 vertices[3];
                    vertices[0].Set(20/SCALE_V, 75/SCALE_V);
                    vertices[1].Set(80/SCALE_V, 75/SCALE_V);
                    vertices[2].Set(50/SCALE_V, 50/SCALE_V);

                    int32 count = 3;
                    b2PolygonShape polygon;
                    polygon.Set(vertices, count);
                    body->CreateFixture(&polygon, 1.0f);
                    break;
                }
    case TypeActor::Hexagono:
                {
                    b2Vec2 vertices[6];
                    vertices[0].Set(35/SCALE_V, 30/SCALE_V);
                    vertices[1].Set(65/SCALE_V, 30/SCALE_V);
                    vertices[2].Set(80/SCALE_V, 50/SCALE_V);
                    vertices[3].Set(65/SCALE_V, 70/SCALE_V);
                    vertices[4].Set(35/SCALE_V, 70/SCALE_V);
                    vertices[4].Set(20/SCALE_V, 50/SCALE_V);

                    int32 count = 6;
                    b2PolygonShape polygon;
                    polygon.Set(vertices, count);
                    body->CreateFixture(&polygon, 1.0f);
                    break;
                }
    case TypeActor::CuboEstatico:
                {
                    b2Vec2 vertices[4];
                    vertices[0].Set(15/SCALE_V, 80/SCALE_V);
                    vertices[1].Set(85/SCALE_V, 80/SCALE_V);
                    vertices[2].Set(85/SCALE_V, 10/SCALE_V);
                    vertices[3].Set(15/SCALE_V, 10/SCALE_V);

                    int32 count = 4;
                    b2PolygonShape polygon;
                    polygon.Set(vertices, count);
                    body->CreateFixture(&polygon, 1.0f);
                    break;
                }
    case TypeActor::TrianguloEstatico:
                {
                    b2Vec2 vertices[3];
                    vertices[0].Set(5/SCALE_V, 80/SCALE_V);
                    vertices[1].Set(95/SCALE_V, 80/SCALE_V);
                    vertices[2].Set(50/SCALE_V, 10/SCALE_V);

                    int32 count = 3;
                    b2PolygonShape polygon;
                    polygon.Set(vertices, count);
                    body->CreateFixture(&polygon, 1.0f);
                    break;
                }
    default:
        break;
    }


    body->SetTransform(b2Vec2(positionX/SCALE_V,positionY/SCALE_V),0);

    Actor::startData(world);
}

void ActorDinamic::updateData(float time)
{
    setRotation(body->GetAngle()*(180/M_PI));
    last_positionX = positionX;
    last_positionY = positionY;
    positionX = body->GetPosition().x;
    positionY = body->GetPosition().y;
    setPos(body->GetPosition().x*SCALE_V, body->GetPosition().y*SCALE_V);

    last_velocityX = display_velocityX;
    last_velocityY = display_velocityY;

    display_velocityX = body->GetLinearVelocity().x;

    display_velocityY = body->GetLinearVelocity().y;

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
    setRotation(0);
    positionX = init_positionX;
    positionY = init_positionY;
    bodyDef->position.Set(positionX/SCALE_V,positionY/SCALE_V);

    setPos(positionX, positionY);
    Actor::stopData();

}

void ActorDinamic::updatePos()
{

}

void ActorDinamic::applyForce(float x, float y)
{
    body->ApplyForce(b2Vec2(x,y), body->GetWorldCenter(),true);

}

void ActorDinamic::applyTorque(float v)
{
    body->ApplyTorque(v,true);
}


void ActorDinamic::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    if(flags() & ItemIsMovable){
        positionX = pos().rx();
        positionY = pos().ry();
        bodyDef->position.Set(positionX/SCALE_V,positionY/SCALE_V);
        emit valuesChanged();
    }
    QGraphicsItem::mouseMoveEvent(event);
}
