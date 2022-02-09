#include "splittermain.h"
#include <QPushButton>
#include <QSplitter>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "viewgraphicsresults.h"

#include <QLabel>
SplitterMain::SplitterMain(QWidget *parent, QWidget *vListObjects, QWidget *vActions, QWidget *vProperties, QWidget *vSimulation) : QWidget(parent)
{

    ViewGraphicsResults * graphisResults = new ViewGraphicsResults(this);
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QHBoxLayout *container = new QHBoxLayout(this);

    container->setContentsMargins(0,0,0,0);

    setLayout(container);
    QSplitter *mainSpliter = new QSplitter(Qt::Horizontal,this);


    QWidget * midwidget = new QWidget;
    QVBoxLayout *midSplitter = new QVBoxLayout(this);
    midSplitter->setSpacing(0);
    midSplitter->setContentsMargins(0,0,0,0);
    midSplitter->addWidget(vSimulation);
    midSplitter->addWidget(graphisResults);
    midwidget->setLayout(midSplitter);

    QSplitter *sideSplitter = new QSplitter(Qt::Vertical, this);
    sideSplitter->addWidget(vProperties);
    sideSplitter->addWidget(vActions);




    /*middleSplitter->setStretchFactor(0,1);
    middleSplitter->setStretchFactor(1,20);*/

    mainSpliter->addWidget(vListObjects);
    mainSpliter->addWidget(midwidget);
    mainSpliter->addWidget(sideSplitter);


    /*mainSpliter->setStretchFactor(0,1);
    mainSpliter->setStretchFactor(1,10);
    mainSpliter->setStretchFactor(2,3);*/

    container->addWidget(mainSpliter);

    mainSpliter->setHandleWidth(1);
    sideSplitter->setHandleWidth(1);



}
