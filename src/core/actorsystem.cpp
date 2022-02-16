#include "actorsystem.h"

ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{

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
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->updateData(time);
        }
    }
    if(selectedActor != NULL){

    }

}

void ActorSystem::addActor(QAction * action)
{

    Actor* actore = new Actor();
    listActors.append(actore);
    actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
    actore->setIndexInList(listActors.lastIndexOf(actore));

    emit addActorSignal(&listActors);
}


void ActorSystem::deleteActor(Actor *actor)
{
    listActors.removeOne(actor);
    emit addActorSignal(&listActors);
}

void ActorSystem::setSelectedActor(Actor *actor)
{
    selectedActor = actor;
}






