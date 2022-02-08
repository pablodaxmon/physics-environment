#include "viewsimulation.h"
#include <QStyleOption>
#include <QComboBox>
#include <QMenu>
#include <QCheckBox>

#define GRIDSCALE 20
ViewSimulation::ViewSimulation(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    viewScene = new GraphicsView(scene, this);
    scene->addLine(-2000,0,2000,0, QPen(QColor(230,20,20,255),0));
    scene->addLine(0,-2000,0,2000, QPen(QColor(20,20,230,255),0));
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
QWidget* ViewSimulation::simulationToolBar()
{
    QWidget * wmain = new QWidget;
    wmain->setStyleSheet("background-color: #FFFFFF");
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setContentsMargins(10,3,20,3);


    //wmain->setFixedWidth(2000);
    //wmain->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    wmain->setProperty("class", "viewSimulationToolbar");

    QPushButton * btnAddObject = new QPushButton;
    QPushButton * btnMoveObject = new QPushButton;
    QPushButton * btnRule = new QPushButton;

    QCheckBox * btnGrid = new QCheckBox;
    QCheckBox * btnHand = new QCheckBox;
    QPushButton * btnZoomIn = new QPushButton;
    QPushButton * btnZoomOut = new QPushButton;
    QPushButton * btnSetup = new QPushButton;

    btnAddObject->setIcon(QIcon(":/icons/resources/icons16/object.png"));
    btnMoveObject->setIcon(QIcon(":/icons/resources/icons16/move.png"));
    btnRule->setIcon(QIcon(":/icons/resources/icons16/rule.png"));


    btnGrid->setIcon(QIcon(":/icons/resources/icons16/grid.png"));
    btnHand->setIcon(QIcon(":/icons/resources/icons16/hand.png"));
    btnZoomIn->setIcon(QIcon(":/icons/resources/icons16/zoomin.png"));
    btnZoomOut->setIcon(QIcon(":/icons/resources/icons16/zoomout.png"));
    btnSetup->setIcon(QIcon(":/icons/resources/icons16/setup.png"));

    btnAddObject->setProperty("class","icon");
    btnMoveObject->setProperty("class","icon");
    btnRule->setProperty("class","icon");
    btnGrid->setProperty("class","icon");
    btnHand->setProperty("class","icon");
    btnZoomIn->setProperty("class","icon");
    btnZoomOut->setProperty("class","icon");
    btnSetup->setProperty("class","icon");

    QLineEdit * zoomEdit = new QLineEdit;
    zoomEdit->setValidator(new QIntValidator(50,200,this));
    zoomEdit->setText(tr("100"));
    zoomEdit->setAlignment(Qt::AlignRight);
    zoomEdit->setFixedWidth(40);

    QLabel *percenTxt = new QLabel(tr("%"));

    viewScene->setEditLine(zoomEdit);


    QComboBox * typeGrid = new QComboBox;

    typeGrid->addItem(tr("Milisegundos"));
    typeGrid->addItem(tr("Segundos"));
    typeGrid->addItem(tr("Horas"));



    layout->addWidget(btnAddObject);
    layout->addWidget(btnMoveObject);
    layout->addWidget(btnRule);
    layout->addStretch(1);

    layout->addWidget(typeGrid);
    layout->addWidget(btnGrid);
    layout->addWidget(btnHand);
    layout->addWidget(zoomEdit);
    layout->addWidget(percenTxt);
    layout->addWidget(btnZoomIn);
    layout->addWidget(btnZoomOut);
    layout->addWidget(btnSetup);

    wmain->setLayout(layout);


    connect(btnAddObject, &QPushButton::clicked, this, &ViewSimulation::showMenuCreateObject);

    connect(btnZoomIn, &QPushButton::clicked, viewScene, &GraphicsView::zoomIn);
    connect(btnZoomOut, &QPushButton::clicked, viewScene, &GraphicsView::zoomOut);

    connect(btnZoomOut, &QPushButton::clicked, viewScene, &GraphicsView::zoomOut);



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
    QPushButton * stopButton = new QPushButton;
    QPushButton * pauseButton = new QPushButton;
    QPushButton * finalButton = new QPushButton;

    backButton->setIcon(QIcon(":/icons/resources/icons16/atstart.png"));
    reverseButton->setIcon(QIcon(":/icons/resources/icons16/reverse.png"));
    playButton->setIcon(QIcon(":/icons/resources/icons16/play.png"));
    pauseButton->setIcon(QIcon(":/icons/resources/icons16/pause.png"));
    stopButton->setIcon(QIcon(":/icons/resources/icons16/stop.png"));
    finalButton->setIcon(QIcon(":/icons/resources/icons16/atfinal.png"));

    backButton->setProperty("class","icon");
    reverseButton->setProperty("class","icon");
    playButton->setProperty("class","icon");
    pauseButton->setProperty("class","icon");
    stopButton->setProperty("class","icon");
    finalButton->setProperty("class","icon");

    QLineEdit * timeNow = new QLineEdit;
    QPushButton * loopToggle = new QPushButton;
    QPushButton * clockToggle = new QPushButton;
    loopToggle->setProperty("class","icon");
    clockToggle->setProperty("class","icon");
    loopToggle->setIcon(QIcon(":/icons/resources/icons16/loop.png"));
    clockToggle->setIcon(QIcon(":/icons/resources/icons16/clock.png"));
    QLineEdit * initLoop = new QLineEdit;
    QLineEdit * endLoop = new QLineEdit;


    mainContainer->addWidget(tiempoUnidad);
    mainContainer->addWidget(marcador);
    mainContainer->addStretch(1);
    mainContainer->addWidget(backButton);
    mainContainer->addWidget(reverseButton);
    mainContainer->addWidget(stopButton);
    mainContainer->addWidget(pauseButton);
    mainContainer->addWidget(playButton);
    mainContainer->addWidget(finalButton);
    mainContainer->addWidget(stopButton);
    mainContainer->addStretch(1);
    mainContainer->addWidget(timeNow);
    mainContainer->addWidget(loopToggle);
    mainContainer->addWidget(clockToggle);
    mainContainer->addWidget(initLoop);
    mainContainer->addWidget(endLoop);
    mainContainer->setSpacing(2);

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

void ViewSimulation::showMenuCreateObject()
{
    QMenu *menu = new QMenu( this );

    QAction* car = new QAction("Auto", this);
    QAction* ball = new QAction("Pelota", this);
    QAction* terrain = new QAction("Terreno (solo side view)", this);
    QAction* staticCube = new QAction("cubo estatico", this);
    menu->addAction(car);
    menu->addAction(ball);
    menu->addAction(terrain);
    menu->addAction(staticCube);

     menu->popup( this->mapToGlobal(QPoint(0,30)));

}


