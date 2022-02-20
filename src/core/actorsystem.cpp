#include "actorsystem.h"

#include<time.h>
ActorSystem::ActorSystem(QObject *parent) : QObject(parent)
{
    model = new QStringListModel;


    gravityV = 9.8f;
    b2Vec2 gravity(0.0f,gravityV);
    world = new b2World(gravity);
    frameRate = 0.012f;
    stopEvery = 10;




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

        int typeAct;
        if(actor->getTypeActor() == TypeActor::Cuadrado){
            typeAct = 0;
        } else         if(actor->getTypeActor() == TypeActor::Triangulo){

            typeAct = 1;
        } else         if(actor->getTypeActor() == TypeActor::Hexagono){

            typeAct = 2;
        } else         if(actor->getTypeActor() == TypeActor::CuboEstatico){

            typeAct = 3;
        } else         if(actor->getTypeActor() == TypeActor::TrianguloEstatico){

            typeAct = 4;
        }
        actorObject["typeActor"] = typeAct;

        actorsArray.append(actorObject);
    }

    json["actors"] = actorsArray;

}

void ActorSystem::readJson(const QJsonObject &json) const
{

}

void ActorSystem::configureWorldBox2d()
{
    b2Vec2 gravity(0.0f,gravityV);
    world = new b2World(gravity);

    b2BodyDef defGround;
    defGround.type = b2_staticBody;

    b2Vec2 v1(-2000.0f, 0.0f);
    b2Vec2 v2(2000.0f, 0.0f);

    b2EdgeShape edge;
    edge.SetTwoSided(v1,v2);

    b2Body* ground = world->CreateBody(&defGround);
    ground->CreateFixture(&edge, 1.0f);
}

void ActorSystem::setScene(GraphicsScene *newScene)
{
    scene = newScene;
}

void ActorSystem::setFrameRate(float newFrameRate)
{
    frameRate = 1/newFrameRate;
    for(int i = 0;i<listActors.size();i++){
        Actor* actor = listActors.at(i);
        actor->setFramerate(frameRate);
    }
}

void ActorSystem::setGravityV(float newGravityV)
{
    gravityV = newGravityV;
}

void ActorSystem::setStopEvery(int newStopEvery)
{
    qDebug() << "ActorSystem::setStopEvery" << newStopEvery;
    stopEvery = newStopEvery;
}

void ActorSystem::startActors()
{
    configureWorldBox2d();
    if(!listActors.isEmpty()){
        QListIterator<Actor*> i(listActors);
        while(i.hasNext()){
            i.next()->startData(world);
        }
    }
}



void ActorSystem::updateActors(float time)
{
    count++;
    if(count>stopEvery){
        world->ClearForces();
    }

    if(!listActors.isEmpty()){

        world->Step(frameRate,6,2);

        scene->advance();

        /*for(int i = 0;i<listActors.size();i++){
            Actor* actor = listActors.at(i);
            actor->updateData(time);
        }*/
    }
}

void ActorSystem::stopActors()
{
    delete world;
    if(!listActors.isEmpty()){
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
    addActorNS(type);





}

//no slot fuunctions
Actor* ActorSystem::addActorNS(TypeActor type)
{

    srand(time(0));

    if(!isBoxType){

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
        emit addActorSignal(&listActors);
        return actore;

    } else {

        ActorDinamic* actore = new ActorDinamic();
        if(isMovible){
            actore->setFlag(QGraphicsItem::ItemIsMovable, true);
        }
        actore->setTypeActor(type);
        listActors.append(actore);
        actore->setIdentifier(QString::number(listActors.lastIndexOf(actore)) + tr("-actor-") + QString::number(rand()));
        actore->setName(tr("Actor") + QString::number(listActors.lastIndexOf(actore)));
        actore->setIndexInList(listActors.lastIndexOf(actore));


        if(model->insertRow(model->rowCount())) {
            QModelIndex index = model->index(model->rowCount() - 1, 0);
            model->setData(index, actore->getName());
            model->setData(index, actore->getIdentifier(), Qt::AccessibleDescriptionRole);
        }
        emit addActorSignal(&listActors);
        return actore;

    }


}

QList<Actor *> &ActorSystem::getListActors()
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

    QModelIndex ind;
    for(int i = 0;i<model->rowCount();i++){

        ind = model->index(i,0);
        if(ind.data().toString() == actor->getName()){

            model->removeRow(i);
        }
    }

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
    emit addActorSignal(&listActors);

}






