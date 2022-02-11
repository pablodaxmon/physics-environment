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
signals:
    void eqTextChanged();
    void createActor(QAction * action);
    void rulerToggle(bool checked);
    void deletedObject(Actor* object);
    void setSelectedActorSignal(Actor* object);

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

    float a = 5;

private slots:
    void showMenuSettings();
    void showMenuCreateObject();

};


#endif // VIEWSIMULATION_H
