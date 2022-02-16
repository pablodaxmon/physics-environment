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
#include "QJsonObject"
#include "QJsonArray"

class ActorSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActorSystem(QObject *parent = nullptr);

    Actor *getSelectedActor() const;
    void writeJson(QJsonObject &json);
    void readJson(const QJsonObject &json) const;

private:
    QList<Actor*> listActors;
    Actor* selectedActor = NULL;
    EquationMaker* eqMaker = new EquationMaker();

signals:
    void addActorSignal(QList<Actor*> *actor);

public slots:
    void startActors();
    void updateActors(float time);
    void addActor(QAction * action);
    void deleteActor(Actor *actor);
    void setSelectedActor(Actor *actor);


};

#endif // ACTORSYSTEM_H
