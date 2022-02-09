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
            i.next()->UpdateFrame();
        }
    }
    if(selectedActor != NULL){
        viewproperties->setValuesFromActor(selectedActor->getVariables());
        qDebug() << "actualizanco actores";

    }

}

//Llama a cada actor una vez antes del primer frame
void ActorSystem::startActors()
{
    if(!listActors.isEmpty()){
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->StartFrame();
        }
    }
}


void ActorSystem::addActor()
{
    Actor* actore = new Actor("actor");
    listActors.append(actore);
    actore->setIndexInList(listActors.indexOf(actore));
    actore->setIndexInList(listActors.lastIndexOf(actore));

    //updateActors();
    viewsimulation->drawNewObject(listActors);
    emit addActorSignal(actore->getName(), actore->getIndexInList());
    viewproperties->setValuesFromActor(actore->getVariables());
}





void ActorSystem::setSelectedActor(const QModelIndex &index)
{

    selectedActor = listActors.value(index.data(Qt::ToolTipRole).toInt());
    viewproperties->setValuesFromActor(listActors.value(index.data(Qt::ToolTipRole).toInt())->getVariables());
    qDebug() << listActors.size();

}

void ActorSystem::setCodeEqToSelectedActor()
{

    if(selectedActor != NULL){
        eqMaker->makeEquation(selectedActor->getEq());

    }

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
            if(actor->getName() == name){


            }

        }
    }

}

Actor *ActorSystem::getActorbyIndex(int index)
{
    return nullptr;
}

ViewSimulation *ActorSystem::getViewsimulation()
{
    return viewsimulation;
}

void ActorSystem::setViewsimulation(ViewSimulation *newViewsimulation)
{
    viewsimulation = newViewsimulation;
}

void ActorSystem::setViewobjectlist(ViewObjectList *newViewobjectlist)
{
    viewobjectlist = newViewobjectlist;
}

void ActorSystem::setViewproperties(ViewProperties *newViewproperties)
{
    viewproperties = newViewproperties;
}
