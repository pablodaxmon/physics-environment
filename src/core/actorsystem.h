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



private:
    QList<Actor*> listActors;
    Actor* selectedActor = NULL;
    EquationMaker* eqMaker = new EquationMaker();

signals:
    void addActorSignal(Actor* actor);

public slots:
    void updateActors();
    void addActor();
    bool deleteActor(Actor *actor);
    void setSelectedActor(int index);

};

#endif // ACTORSYSTEM_H