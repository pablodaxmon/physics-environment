#ifndef VIEWSIMULATION_H
#define VIEWSIMULATION_H

#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QToolBar>
#include <QToolButton>
#include <QAction>
#include <QGraphicsView>
#include "graphicsview.h"
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "src/core/actor.h"
#include "viewgraphicsresults.h"


class ViewSimulation : public QWidget
{
    Q_OBJECT
public:
    explicit ViewSimulation(QWidget *parent = nullptr);

    void setObjectSelected();

    float b = 5;

public slots:
    void drawNewObject(QList<Actor*> *listactors);
signals:
    void eqTextChanged();
    void createActor(QAction * action);
    void moveToggle(bool checked);
    void rulerToggle(bool checked);

protected:
    QLineEdit * zoomEdit;

private:
    void redrawCanvas();
    GraphicsView *viewScene;
    QGraphicsScene *scene = new QGraphicsScene(this);
    float a = 5;

    QPushButton* addActorB;
    QPushButton* deleteActorB;




    QWidget *simulationToolBar();
    QWidget *timeControlToolBar();
    void paintEvent(QPaintEvent * event);


private slots:
    void showMenuSettings();
    void showMenuCreateObject();

};


#endif // VIEWSIMULATION_H
