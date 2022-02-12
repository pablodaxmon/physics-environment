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

    Actor *getSelectedActor() const;

private:
    QList<Actor*> listActors;
    Actor* selectedActor = NULL;
    EquationMaker* eqMaker = new EquationMaker();

signals:
    void addActorSignal(QList<Actor*> *actor);

public slots:
    void updateActors();
    void addActor(QAction * action);
    void deleteActor(Actor *actor);
    void setSelectedActor(Actor *actor);

};

#endif // ACTORSYSTEM_H
