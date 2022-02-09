#ifndef ACTORSYSTEM_H
#define ACTORSYSTEM_H

#include <QObject>
#include <QVector2D>
#include "src/core/actor.h"
#include <QList>
#include <QDebug>
#include "src/gui/viewsimulation.h"
#include "src/gui/viewobjectlist.h"
#include "src/gui/viewproperties.h"
#include <QModelIndex>
#include <QListIterator>
#include "src/core/equationmaker.h"

class ActorSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActorSystem(QObject *parent = nullptr);



    ViewSimulation *getViewsimulation();
    void setViewsimulation(ViewSimulation *newViewsimulation);

    void setViewobjectlist(ViewObjectList *newViewobjectlist);

    void setViewproperties(ViewProperties *newViewproperties);

private:
    QList<Actor*> listActors;
    Actor* selectedActor = NULL;
    ViewSimulation* viewsimulation;
    ViewObjectList* viewobjectlist;
    ViewProperties* viewproperties;
    EquationMaker* eqMaker = new EquationMaker();

signals:
    void addActorSignal(const QString name, const int index);

public slots:
    void updateActors();
    void startActors();
    void addActor();
    bool deleteActor(Actor *actor);
    void getActorbyName(const  char* name);
    Actor* getActorbyIndex(int index);
    Actor* getActorInPosition(QVector2D *position);
    QList<Actor*> getActorsInArea(QVector2D *positionA, QVector2D *positionB);
    QList<Actor*> getActorsInArea(QVector2D *center, float radius);
    QList<Actor*> getActorsByTag(QString *tag);
    void setSelectedActor(const QModelIndex &index);
    void setCodeEqToSelectedActor();

};

#endif // ACTORSYSTEM_H
