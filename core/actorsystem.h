#ifndef ACTORSYSTEM_H
#define ACTORSYSTEM_H

#include <QObject>
#include <QVector2D>
#include "core/actor.h"
#include <QList>
#include <QDebug>

class ActorSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActorSystem(QObject *parent = nullptr);

private:
    QList<Actor*> listActors;

signals:

public slots:
    void updateActors();
    void startActors();
    void addActor(Actor *actore);
    bool deleteActor(Actor *actor);
    void getActorbyName(const  char* name);
    Actor* getActorbyIndex(int index);
    Actor* getActorInPosition(QVector2D *position);
    QList<Actor*> getActorsInArea(QVector2D *positionA, QVector2D *positionB);
    QList<Actor*> getActorsInArea(QVector2D *center, float radius);
    QList<Actor*> getActorsByTag(QString *tag);
};

#endif // ACTORSYSTEM_H
