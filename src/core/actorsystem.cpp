#include "actorsystem.h"

#include<time.h>
ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{
    b2Vec2 gravity(0.0f,9.8f);
    world = new b2World(gravity);
    model = new QStringListModel;
    b2BodyDef defGround;
    defGround.type = b2_staticBody;

    b2Vec2 v1(-2000.0f, 0.0f);
    b2Vec2 v2(2000.0f, 0.0f);

    b2EdgeShape edge;
    edge.SetTwoSided(v1,v2);

    b2Body* ground = world->CreateBody(&defGround);
    ground->CreateFixture(&edge, 1.0f);

    qDebug() << " actorsystem : pos x " << ground->GetPosition().x << " actorsystem : pos y " << ground->GetPosition().y ;






}

Actor *ActorSystem::getSelectedActor() const
{
    return selectedActor;
}

void ActorSystem::writeJson(QJsonObject &json)
{
    QJsonArray actorsArray;
    for(int i = 0;i<listActors.size();i++){
        QJsonObject actorObject;
        Actor * actor = listActors.value(i);
        actorObject["identifier"] = actor->getIdentifier();
        actorObject["name"] = actor->getName();
        actorObject["posX"] = actor->getPositionX();
        actorObject["posY"] = actor->getPositionY();
        actorObject["vel"] = actor->getVelocity();
        actorObject["velX"] = actor->getVelocityX();
        actorObject["velY"] = actor->getVelocityY();
        actorObject["ace"] = actor->getAceleration();
        actorObject["aceX"] = actor->getAcelerationX();
        actorObject["aceY"] = actor->getAcelerationY();
        actorObject["mass"] = actor->getMass();

        actorsArray.append(actorObject);
    }

    json["actors"] = actorsArray;

}

void ActorSystem::readJson(const QJsonObject &json) const
{

}

void ActorSystem::startActors()
{
    qDebug() << "Actorsystem: start";
    if(!listActors.isEmpty()){
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->startData();
        }
    }
}



//Llama a cada actor para cada frame.
void ActorSystem::updateActors(float time)
{
    if(!listActors.isEmpty()){
        world->Step(0.03f,6,2);
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->updateData(time);
        }


    }
    if(selectedActor != NULL){

    }

}

void ActorSystem::stopActors()
{
    world->ClearForces();
    if(!listActors.isEmpty()){
        world->Step(1.0f/60.0f,6,2);
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->stopData();
        }


    }
}

void ActorSystem::addActor(QAction * action)
{

    TypeActor type;
    if(action->text() == "Cuadrado"){
        type = TypeActor::Cuadrado;
    } else     if(action->text() == "Triangulo"){
        type = TypeActor::Triangulo;
    } else     if(action->text() == "Hexagono"){
        type = TypeActor::Hexagono;
    } else     if(action->text() == "Cubo estatico"){
        type = TypeActor::CuboEstatico;
    } else     if(action->text() == "Triangulo estatico"){
        type = TypeActor::TrianguloEstatico;
    }
    srand(time(0));

    if(isBoxType){

        Actor* actore = new Actor();
        actore->setTypeActor(type);
        listActors.append(actore);
        actore->setIdentifier(QString::number(listActors.lastIndexOf(actore)) + tr("-actor-") + QString::number(rand()));
        actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
        actore->setIndexInList(listActors.lastIndexOf(actore));

        if(isMovible){
            actore->setFlag(QGraphicsItem::ItemIsMovable, true);
        }
        if(model->insertRow(model->rowCount())) {
            QModelIndex index = model->index(model->rowCount() - 1, 0);
            model->setData(index, actore->getName());
            model->setData(index, actore->getIdentifier(), Qt::AccessibleDescriptionRole);
        }

    } else {

        ActorDinamic* actore = new ActorDinamic();
        if(isMovible){
            actore->setFlag(QGraphicsItem::ItemIsMovable, true);
        }
        actore->setTypeActor(type);
        listActors.append(actore);
        actore->setPositionY(-200);
        actore->setIdentifier(QString::number(listActors.lastIndexOf(actore)) + tr("-actor-") + QString::number(rand()));
        actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
        actore->setIndexInList(listActors.lastIndexOf(actore));
        b2BodyDef bodyDef;
        bodyDef.type = b2_dynamicBody;
        bodyDef.awake = true;
        bodyDef.position.Set(0,-200);

        b2Body* bodyDyn = world->CreateBody(&bodyDef);

        b2Vec2 vertices[4];
        vertices[0].Set(20, 20);
        vertices[1].Set(20, 80);
        vertices[2].Set(80, 80);
        vertices[3].Set(20, 80);

        int32 count = 4;
        b2PolygonShape polygon;
        polygon.Set(vertices, count);
        bodyDyn->CreateFixture(&polygon, 1.0f);

        actore->setBody(bodyDyn);

        if(model->insertRow(model->rowCount())) {
            QModelIndex index = model->index(model->rowCount() - 1, 0);
            model->setData(index, actore->getName());
            model->setData(index, actore->getIdentifier(), Qt::AccessibleDescriptionRole);
        }

    }


    emit addActorSignal(&listActors);
}

//no slot fuunctions
Actor* ActorSystem::addActorNS()
{
    srand(time(0));

    Actor* actore = new Actor();
    listActors.append(actore);
    actore->setIdentifier(QString::number(listActors.lastIndexOf(actore)) + tr("-actor-") + QString::number(rand()));
    actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
    actore->setIndexInList(listActors.lastIndexOf(actore));

    emit addActorSignal(&listActors);

    return actore;
}

const QList<Actor *> &ActorSystem::getListActors() const
{
    return listActors;
}

void ActorSystem::setIsBoxType(bool newIsBoxType)
{
    isBoxType = newIsBoxType;
}

b2World *ActorSystem::getWorld() const
{
    return world;
}

QStringListModel *ActorSystem::getModel() const
{
    return model;
}

void ActorSystem::setIsMovible(bool newIsMovible)
{
    isMovible = newIsMovible;
}


void ActorSystem::deleteActor(Actor *actor)
{
    listActors.removeOne(actor);
    delete actor;
    emit addActorSignal(&listActors);
}

void ActorSystem::setSelectedActor(Actor *actor)
{
    selectedActor = actor;
}

void ActorSystem::setSelectedActorFromView(const QModelIndex &index)
{
    for(int i = 0;i<listActors.size();i++){
        Actor* actor = listActors.at(i);
        if(actor->getName() == index.data()){
            emit selectedActorSignal(actor);
        }
    }

}

void ActorSystem::reset()
{

    qDeleteAll(listActors);
    listActors.clear();
    qDebug() << "Actorsistem: count actors: " << listActors.length();
    emit addActorSignal(&listActors);

}






