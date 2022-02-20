#ifndef ACTORSYSTEM_H
#define ACTORSYSTEM_H

#include <QObject>
#include <QVector2D>
#include "src/core/actor.h"
#include "src/core/actordinamic.h"
#include <QList>
#include <QDebug>
#include "src/gui/viewsimulation.h"
#include "src/gui/graphicsscene.h"
#include "src/gui/viewobjectlist.h"
#include "src/gui/viewproperties.h"
#include <QModelIndex>
#include <QListIterator>
#include "src/core/equationmaker.h"
#include "QJsonObject"
#include "QJsonArray"
#include "src/box2d/box2d.h"
#include "QStringListModel"

class ActorSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActorSystem(QObject *parent = nullptr);

    Actor *getSelectedActor() const;
    void writeJson(QJsonObject &json);
    void readJson(const QJsonObject &json) const;
    Actor* addActorNS(TypeActor type);

    QList<Actor *> &getListActors();

    void setIsBoxType(bool newIsBoxType);

    b2World *getWorld() const;

    QStringListModel *getModel() const;

    void setIsMovible(bool newIsMovible);

    void configureWorldBox2d();

    void setScene(GraphicsScene *newScene);

    void setFrameRate(float newFrameRate);

    void setGravityV(float newGravityV);


private:
    QList<Actor*> listActors;
    Actor* selectedActor = NULL;
    EquationMaker* eqMaker = new EquationMaker();
    bool isBoxType;
    b2World *world =nullptr;
    QStringListModel* model;
    bool isMovible;
    int count;
    GraphicsScene* scene;
    float frameRate;
    float gravityV;
    int stopEvery;

signals:
    void addActorSignal(QList<Actor*> *actor);
    void selectedActorSignal(Actor* actor);

public slots:
    void startActors();
    void updateActors(float time);
    void stopActors();
    void addActor(QAction * action);
    void deleteActor(Actor *actor);
    void setSelectedActor(Actor *actor);
    void setSelectedActorFromView(const QModelIndex &index);
    void reset();

    void setStopEvery(int newStopEvery);



};

#endif // ACTORSYSTEM_H
