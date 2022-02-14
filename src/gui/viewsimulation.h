#ifndef VIEWSIMULATION_H
#define VIEWSIMULATION_H

#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QToolBar>
#include <QToolButton>
#include <QAction>
#include "graphicsview.h"
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "src/core/actor.h"
#include "viewgraphicsresults.h"
#include "graphicsscene.h"


class ViewSimulation : public QWidget
{
    Q_OBJECT
public:
    explicit ViewSimulation(QWidget *parent = nullptr);

    void setObjectSelected();

    float b = 5;


public slots:
    void updateSceneObjects(QList<Actor*> *listactors);
    void moveToggle(bool checked);
    void setItemSelected();
    void deleteObject();
    void setSelectedActorSlots();
    void setTimeNow(float time);
signals:
    void eqTextChanged();
    void createActor(QAction * action);
    void rulerToggle(bool checked);
    void deletedObject(Actor* object);
    void setSelectedActorSignal(Actor* object);

    /* reproduccion señales */

    void playSignal();
    void pauseSignal();
    void stopSignal();
    void reverseSignal();
    void toStartSignal();
    void toEndSignal();
    void loopEnable(bool checked);
    void loopInit(const QString &text);
    void loopDuration(const QString &text);
    void intervalDuration(const QString &text);

    void timeNowChanged(const QString &text);

protected:
    QLineEdit * zoomEdit;

private:
    void redrawCanvas();
    void paintEvent(QPaintEvent * event);
    QWidget *simulationToolBar();
    QWidget *timeControlToolBar();

    GraphicsView *viewScene;
    GraphicsScene *scene;
    QPushButton* addActorB;
    QPushButton* deleteActorB;

    QLineEdit * timeNow;
    QLineEdit * intervalInt;
    QLineEdit * initLoop;
    QLineEdit * endLoop;

private slots:
    void showMenuSettings();
    void showMenuCreateObject();

};


#endif // VIEWSIMULATION_H
