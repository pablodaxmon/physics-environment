#include "splittermain.h"
#include <QPushButton>
#include <QSplitter>
#include <QHBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>

#include <QLabel>
SplitterMain::SplitterMain(QWidget *parent, QWidget *vListObjects, QWidget *vActions, QWidget *vProperties, QWidget *vSimulation) : QWidget(parent)
{

    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QHBoxLayout *container = new QHBoxLayout(this);

    container->setContentsMargins(0,0,0,0);

    setLayout(container);
    QSplitter *mainSpliter = new QSplitter(Qt::Horizontal,this);

    QSplitter *middleSplitter = new QSplitter(Qt::Vertical, this);


    middleSplitter->addWidget(vProperties);
    middleSplitter->addWidget(vActions);

    /*middleSplitter->setStretchFactor(0,1);
    middleSplitter->setStretchFactor(1,20);*/

    mainSpliter->addWidget(vListObjects);
    mainSpliter->addWidget(vSimulation);
    mainSpliter->addWidget(middleSplitter);


    /*mainSpliter->setStretchFactor(0,1);
    mainSpliter->setStretchFactor(1,10);
    mainSpliter->setStretchFactor(2,3);*/

    container->addWidget(mainSpliter);

    mainSpliter->setHandleWidth(1);
    middleSplitter->setHandleWidth(1);



}
