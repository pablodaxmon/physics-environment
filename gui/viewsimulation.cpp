#include "viewsimulation.h"

#define GRIDSCALE 20
ViewSimulation::ViewSimulation(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);
    viewScene = new QGraphicsView(scene, this);
    lineEdit = new QLineEdit(this);
    viewScene->setBackgroundBrush(PixmapBuilder::drawPattern(PixmapType::PT_Square, 20, "#E9E9E9"));
    scene->addLine(-2000,0,2000,0, QPen(QColor(200,0,0,200)));
    scene->addLine(0,-2000,0,2000, QPen(QColor(0,0,200,200)));
    scene->addEllipse(-6,-6,12,12);
    viewScene->centerOn(-600,-600);
    viewScene->setContentsMargins(0,0,0,0);
    viewScene->show();
    mainLayout->addWidget(lineEdit);
    mainLayout->addWidget(viewScene);

    connect(lineEdit, &QLineEdit::editingFinished, this, &eqTextChanged);

}

void ViewSimulation::drawNewObject(QList<Actor*> &listactors)
{
    for(Actor* i : listactors){
        scene->addItem(i);
    }

}

void ViewSimulation::redrawCanvas()
{




}

QLineEdit *ViewSimulation::getLineEdit() const
{
    return lineEdit;
}

