#include "actorsystem.h"

ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{

}

Actor *ActorSystem::getSelectedActor() const
{
    return selectedActor;
}



//Llama a cada actor para cada frame.
void ActorSystem::updateActors()
{
    if(!listActors.isEmpty()){
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->updateData();
        }
    }
    if(selectedActor != NULL){
        qDebug() << "actualizanco actores";

    }

}

void ActorSystem::addActor(QAction * action)
{

    Actor* actore = new Actor();
    actore->setName(action->text());
    listActors.append(actore);
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






