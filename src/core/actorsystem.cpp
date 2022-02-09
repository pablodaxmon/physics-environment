#include "actorsystem.h"

ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{

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

void ActorSystem::addActor()
{
    Actor* actore = new Actor("actor");
    listActors.append(actore);
    actore->setIndexInList(listActors.indexOf(actore));
    actore->setIndexInList(listActors.lastIndexOf(actore));

    emit addActorSignal(actore);
}


bool ActorSystem::deleteActor(Actor *actor)
{
    return listActors.removeOne(actor);
}

void ActorSystem::setSelectedActor(int index)
{
    if(index <= listActors.length()){
        selectedActor = listActors.at(index);
    };
}






