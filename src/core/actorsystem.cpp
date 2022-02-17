#include "actorsystem.h"

#include<time.h>
ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{
    b2Vec2 gravity(0.0f,10.0f);
    world = new b2World(gravity);
    model = new QStringListModel;


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
        world->Step(1.0f/60.0f,6,2);
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
    if(!listActors.isEmpty()){
        world->Step(1.0f/60.0f,6,2);
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->stopData();
        }


    }
}

void ActorSystem::addActor()
{
    srand(time(0));

    if(isBoxType){
        Actor* actore = new Actor();
        listActors.append(actore);
        actore->setIdentifier(QString::number(listActors.lastIndexOf(actore)) + tr("-actor-") + QString::number(rand()));
        actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
        actore->setIndexInList(listActors.lastIndexOf(actore));

        if(model->insertRow(model->rowCount())) {
            QModelIndex index = model->index(model->rowCount() - 1, 0);
            model->setData(index, actore->getName());
            model->setData(index, actore->getIdentifier(), Qt::AccessibleDescriptionRole);
        }

    } else {
        ActorDinamic* actore = new ActorDinamic();
        listActors.append(actore);
        actore->setIdentifier(QString::number(listActors.lastIndexOf(actore)) + tr("-actor-") + QString::number(rand()));
        actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
        actore->setIndexInList(listActors.lastIndexOf(actore));
        b2BodyDef bodyDef;
        bodyDef.type = b2_dynamicBody;
        bodyDef.awake = true;
        bodyDef.position.Set(0,0);

        b2Body* bodyDyn = world->CreateBody(&bodyDef);
        b2CircleShape shape;
        shape.m_radius = 1.0f;
        bodyDyn->CreateFixture(&shape, 1.0f);

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






