#include "viewsimulation.h"
#include <QStyleOption>
#include <QComboBox>

#define GRIDSCALE 20
ViewSimulation::ViewSimulation(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    viewScene = new QGraphicsView(scene, this);
    viewScene->setBackgroundBrush(PixmapBuilder::drawPattern(PixmapType::PT_Square, 20, "#E9E9E9"));
    scene->addLine(-2000,0,2000,0, QPen(QColor(200,0,0,200)));
    scene->addLine(0,-2000,0,2000, QPen(QColor(0,0,200,200)));
    scene->addEllipse(-6,-6,12,12);
    viewScene->centerOn(-600,-600);
    viewScene->setContentsMargins(0,0,0,0);
    viewScene->show();
    mainLayout->addWidget(simulationToolBar());
    mainLayout->addWidget(viewScene);
    mainLayout->addWidget(timeControlToolBar());

    setProperty("class", "viewSimulation");


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


//dibuja el toolbar del viewsimulation
QToolBar* ViewSimulation::simulationToolBar()
{
    QToolBar * wmain = new QToolBar;
    //wmain->setFixedWidth(2000);
    //wmain->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    wmain->setProperty("class", "viewSimulationToolbar");


    QAction * addActorA = new QAction(QIcon(":/icons/resources/icons24/Create.png"),tr("&Calculate values"), this);
    QAction * deleteActorA = new QAction(QIcon(":/icons/resources/icons24/Delete.png"),tr("&Calculate values"), this);
    QAction * gridA = new QAction(QIcon(":/icons/resources/icons24/Modify.png"),tr("&Calculate values"), this);
    QAction * configure = new QAction(QIcon(":/icons/resources/icons24/Application.png"),tr("&Calculate values"), this);



    wmain->addAction(addActorA);
    wmain->addSeparator();
    wmain->addAction(deleteActorA);
    wmain->addSeparator();
    wmain->addAction(gridA);
    wmain->addSeparator();
    wmain->addAction(configure);


    return wmain;
}

QWidget *ViewSimulation::timeControlToolBar()
{
    QWidget * res = new QWidget;
    res->setContentsMargins(2,2,2,2);

    QHBoxLayout * mainContainer = new QHBoxLayout;
    mainContainer->setContentsMargins(0,0,0,0);

    QComboBox * tiempoUnidad = new QComboBox;

    tiempoUnidad->addItem(tr("Milisegundos"));
    tiempoUnidad->addItem(tr("Segundos"));
    tiempoUnidad->addItem(tr("Horas"));


    QComboBox * marcador = new QComboBox;

    marcador->addItem(tr("Milisegundos"));
    marcador->addItem(tr("Segundos"));
    marcador->addItem(tr("Horas"));

    QPushButton * backButton = new QPushButton;
    QPushButton * reverseButton = new QPushButton;
    QPushButton * playButton = new QPushButton;
    QPushButton * pauseButton = new QPushButton;

    backButton->setIcon(QIcon(":/icons/resources/icons24/Play.png"));
    reverseButton->setIcon(QIcon(":/icons/resources/icons24/Play.png"));
    playButton->setIcon(QIcon(":/icons/resources/icons24/Play.png"));
    pauseButton->setIcon(QIcon(":/icons/resources/icons24/Play.png"));

    QLineEdit * timeNow = new QLineEdit;
    QPushButton * loopToggle = new QPushButton;
    loopToggle->setIcon(QIcon(":/icons/resources/icons24/Play.png"));
    QLineEdit * initLoop = new QLineEdit;
    QLineEdit * endLoop = new QLineEdit;


    mainContainer->addWidget(tiempoUnidad);
    mainContainer->addWidget(marcador);
    mainContainer->addStretch(1);
    mainContainer->addWidget(backButton);
    mainContainer->addWidget(reverseButton);
    mainContainer->addWidget(playButton);
    mainContainer->addWidget(pauseButton);
    mainContainer->addStretch(1);
    mainContainer->addWidget(timeNow);
    mainContainer->addWidget(loopToggle);
    mainContainer->addWidget(initLoop);
    mainContainer->addWidget(endLoop);

    res->setLayout(mainContainer);


    return res;
}

void ViewSimulation::paintEvent(QPaintEvent * event)
 {
     QStyleOption opt;
     opt.initFrom(this);
     QPainter p(this);
     style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
 }


