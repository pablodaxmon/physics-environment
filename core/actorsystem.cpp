#include "actorsystem.h"

ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{

}


//Llama a cada actor para cada frame.
void ActorSystem::updateActors()
{
    qDebug("updateActors");
    if(!listActors.isEmpty()){
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->UpdateFrame();
        }
    }
}

//Llama a cada actor una vez antes del primer frame
void ActorSystem::startActors()
{
    qDebug("start actors");
    if(!listActors.isEmpty()){
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->StartFrame();
        }
    }
}


void ActorSystem::addActor(Actor *actore)
{
    listActors.append(actore);
    actore->setIndexInList(listActors.lastIndexOf(actore));
}

bool ActorSystem::deleteActor(Actor *actor)
{
    return listActors.removeOne(actor);
}

void ActorSystem::getActorbyName(const char *name)
{
    Actor *actor;
    if(!listActors.isEmpty()){
        for(int i = 0;i<listActors.size();i++){

            actor = listActors.at(i);
            qDebug() << "actor: " << actor->getName();
            if(actor->getName() == name){


            }

        }
    }

}

Actor *ActorSystem::getActorbyIndex(int index)
{
    return nullptr;
}

Actor* ActorSystem::getActorInPosition(QVector2D* position)
{
    return listActors.value(0);
}

QList<Actor*> ActorSystem::getActorsInArea(QVector2D* positionA, QVector2D *positionB)
{

    return listActors.mid(1,2);
}

QList<Actor*> ActorSystem::getActorsInArea(QVector2D *center, float radius)
{

    return listActors.mid(1,2);
}

QList<Actor*> ActorSystem::getActorsByTag(QString* tag)
{

    return listActors.mid(1,2);
}

