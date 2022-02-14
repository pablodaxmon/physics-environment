#include "actorsystem.h"

ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{

}

Actor *ActorSystem::getSelectedActor() const
{
    return selectedActor;
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






