#ifndef VIEWSIMULATION_H
#define VIEWSIMULATION_H

#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QToolBar>
#include <QToolButton>
#include <QAction>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "pixmapbuilder.h"
#include "core/actor.h"
#include "viewgraphicsresults.h"

class ViewSimulation : public QWidget
{
    Q_OBJECT
public:
    explicit ViewSimulation(QWidget *parent = nullptr);

    void drawNewObject(QList<Actor*> &listactors);
    void setObjectSelected();

    float b = 5;


signals:
    void eqTextChanged();

private:
    void redrawCanvas();
    QGraphicsView *viewScene;
    QGraphicsScene *scene = new QGraphicsScene(this);
    float a = 5;

    QPushButton* addActorB;
    QPushButton* deleteActorB;




    QWidget *simulationToolBar();
    QWidget *timeControlToolBar();
    void paintEvent(QPaintEvent * event);


private slots:
    void showMenuCreateObject();

};


#endif // VIEWSIMULATION_H
