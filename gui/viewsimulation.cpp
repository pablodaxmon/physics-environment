#include "viewsimulation.h"

#define GRIDSCALE 20
ViewSimulation::ViewSimulation(QWidget *parent) : QWidget(parent)
{


    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);

    QGraphicsScene *scene = new QGraphicsScene(this);



    QGraphicsView *viewScene = new QGraphicsView(scene, this);
    viewScene->setBackgroundBrush(PixmapBuilder::drawPattern(PixmapType::PT_Square, 20, "#E9E9E9"));
    viewScene->setContentsMargins(0,0,0,0);
    viewScene->show();

    mainLayout->addWidget(viewScene);
}
