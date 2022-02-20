#ifndef VIEWGRAPHICSRESULTS_H
#define VIEWGRAPHICSRESULTS_H

#include <QWidget>
#include <QWheelEvent>
#include <QPaintEvent>
#include <QTime>
#include <QTimer>
#include "src/core/actor.h"
#include <QDragMoveEvent>
#include "graphicssceneresults.h"
#include "graphicsviewresults.h"
#include "QGraphicsView"
#include "itembartime.h"

class ViewGraphicsResults : public QWidget
{
    Q_OBJECT
public:
    explicit ViewGraphicsResults(QWidget *parent = nullptr);

    QSize sizeHint() const;
    QSize minimumSizeHint() const;



    void setListActors(QList<Actor *> *newListActors);


    void redrawResults(float time);

signals:
    void changeTime(float time);
public slots:
    void graphicTypechanged(int typeG);
    void setInitTime();
    void setTimeNow(float time);
    void setSelectedActor(Actor *newActorSelected);
    void setFrameDuration(int value);
protected:

    int wheelPos = 0;
    int cursorPos = 0;
    int counter = 0;
    int frameDuration;


    QList<Actor*> *listActors;

    GraphicsViewResults * view;
    GraphicsSceneResults * scene;


    Actor* actorSelected = nullptr;
    itemBarTime* itemBar;

    int typeGraphics = 0;
};

#endif // VIEWGRAPHICSRESULTS_H
