#include "viewsimulation.h"
#include <QStyleOption>
#include <QComboBox>
#include <QMenu>
#include <QCheckBox>

#define GRIDSCALE 20
ViewSimulation::ViewSimulation(QWidget *parent) : QWidget(parent)
{
    scene = new GraphicsScene(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    viewScene = new GraphicsView(scene, this);
    scene->addLine(-2000,0,2000,0, QPen(QColor(230,20,20,255),0));
    scene->addLine(0,-2000,0,2000, QPen(QColor(20,20,230,255),0));
    scene->addEllipse(-6,-6,12,12);
    viewScene->setContentsMargins(0,0,0,0);
    viewScene->show();
    mainLayout->addWidget(simulationToolBar());
    mainLayout->addWidget(viewScene);
    mainLayout->addWidget(timeControlToolBar());

    setProperty("class", "viewSimulation");

    connect(scene, &QGraphicsScene::selectionChanged, this, &ViewSimulation::setSelectedActorSlots);

}



void ViewSimulation::updateSceneObjects(QList<Actor*> *listactors)
{

    for(int i = 0; i< listactors->size(); i++){

        scene->addItem(listactors->at(i));
        Actor* actor = listactors->at(i);
        actor->setGraphicsScene(dynamic_cast<GraphicsScene *>(scene));
    }
}

void ViewSimulation::moveToggle(bool checked)
{
    for(int i = 0; i< scene->items().size(); i++){
        Actor* actor = dynamic_cast<Actor *>(scene->items().at(i));
        if(actor != nullptr){
            actor->setFlag(QGraphicsItem::ItemIsMovable, checked);
        }
    }
}

void ViewSimulation::setItemSelected()
{
    /*for(int i = 0; i< scene->items().size(); i++){
        Actor* actor = dynamic_cast<Actor *>(scene->items().at(i));
        if(actor != nullptr){
            actor->setSelected(false);
            actor->update();
        }

    }*/

}

void ViewSimulation::deleteObject()
{
    if(!scene->selectedItems().isEmpty()){

        Actor* actorDeleted = dynamic_cast<Actor *>(scene->selectedItems().last());
        scene->removeItem(actorDeleted);
        emit deletedObject(actorDeleted);
    }
}

void ViewSimulation::setSelectedActorSlots()
{
    if(!scene->selectedItems().isEmpty()){
        emit setSelectedActorSignal(dynamic_cast<Actor *>(scene->selectedItems().last()));

    } else {
        emit setSelectedActorSignal(nullptr);

    }
}




void ViewSimulation::redrawCanvas()
{




}


//dibuja el toolbar del viewsimulation
QWidget* ViewSimulation::simulationToolBar()
{
    QWidget * wmain = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setContentsMargins(10,3,20,3);


    //wmain->setFixedWidth(2000);
    //wmain->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    wmain->setProperty("class", "viewSimulationToolbar");

    QPushButton * btnAddObject = new QPushButton;
    QPushButton * btnMoveObject = new QPushButton;
    btnMoveObject->setCheckable(true);
    QPushButton * btnRule = new QPushButton;
    btnRule->setCheckable(true);
    QPushButton * btnDeleteObject = new QPushButton;

    QPushButton * btnGrid = new QPushButton;
    btnGrid->setCheckable(true);
    QPushButton * btnHand = new QPushButton;
    btnHand->setCheckable(true);
    QPushButton * btnZoomIn = new QPushButton;
    QPushButton * btnZoomOut = new QPushButton;
    QPushButton * btnSetup = new QPushButton;

    btnAddObject->setIcon(QIcon(":/icons/resources/icons16/object.png"));
    btnMoveObject->setIcon(QIcon(":/icons/resources/icons16/move.png"));
    btnRule->setIcon(QIcon(":/icons/resources/icons16/rule.png"));
    btnDeleteObject->setIcon(QIcon(":/icons/resources/icons16/basurero.png"));

    btnGrid->setIcon(QIcon(":/icons/resources/icons16/grid.png"));
    btnHand->setIcon(QIcon(":/icons/resources/icons16/hand.png"));
    btnZoomIn->setIcon(QIcon(":/icons/resources/icons16/zoomin.png"));
    btnZoomOut->setIcon(QIcon(":/icons/resources/icons16/zoomout.png"));
    btnSetup->setIcon(QIcon(":/icons/resources/icons16/setup.png"));

    btnAddObject->setProperty("class","icon");
    btnDeleteObject->setProperty("class","icon");
    btnMoveObject->setProperty("class","icon");
    btnRule->setProperty("class","icon");
    btnGrid->setProperty("class","icon");
    btnHand->setProperty("class","icon");
    btnZoomIn->setProperty("class","icon");
    btnZoomOut->setProperty("class","icon");
    btnSetup->setProperty("class","icon");

    zoomEdit = new QLineEdit;
    zoomEdit->setValidator(new QIntValidator(50,200,this));
    zoomEdit->setText(tr("100"));
    zoomEdit->setAlignment(Qt::AlignRight);
    zoomEdit->setFixedWidth(40);

    QLabel *percenTxt = new QLabel(tr("%"));

    viewScene->setEditLine(zoomEdit);


    QComboBox * typeGrid = new QComboBox;
    typeGrid->setEnabled(false);

    typeGrid->addItem(tr("Cuadrado"));
    typeGrid->addItem(tr("Cruzado"));
    typeGrid->addItem(tr("Fancy"));



    layout->addWidget(btnAddObject);
    layout->addWidget(btnMoveObject);
    layout->addWidget(btnRule);
    layout->addWidget(btnDeleteObject);
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


    connect(btnHand, &QPushButton::toggled, scene, &GraphicsScene::setMoveHand);
    connect(typeGrid, &QComboBox::currentIndexChanged, viewScene, &GraphicsView::setGridtype);
    connect(btnGrid, &QPushButton::toggled, viewScene, &GraphicsView::gridShowHide);
    connect(btnGrid, &QPushButton::toggled, typeGrid, &QComboBox::setEnabled);
    connect(btnAddObject, &QPushButton::clicked, this, &ViewSimulation::showMenuCreateObject);
    connect(btnSetup, &QPushButton::clicked, this, &ViewSimulation::showMenuSettings);

    connect(btnZoomIn, &QPushButton::clicked, viewScene, &GraphicsView::zoomIn);
    connect(btnZoomOut, &QPushButton::clicked, viewScene, &GraphicsView::zoomOut);
    connect(btnZoomOut, &QPushButton::clicked, viewScene, &GraphicsView::zoomOut);


    connect(btnMoveObject, &QPushButton::toggled, this, &ViewSimulation::moveToggle);
    connect(btnRule, &QPushButton::toggled, this, &ViewSimulation::rulerToggle);
    connect(btnDeleteObject, &QPushButton::clicked, this, &ViewSimulation::deleteObject);



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
    loopToggle->setCheckable(true);
    QPushButton * clockToggle = new QPushButton;
    clockToggle->setCheckable(true);
    loopToggle->setProperty("class","icon");
    clockToggle->setProperty("class","icon");
    loopToggle->setIcon(QIcon(":/icons/resources/icons16/loop.png"));
    clockToggle->setIcon(QIcon(":/icons/resources/icons16/clock.png"));
    QLineEdit * intervalInt = new QLineEdit;
    intervalInt->setEnabled(false);
    QLineEdit * initLoop = new QLineEdit;
    initLoop->setEnabled(false);
    QLineEdit * endLoop = new QLineEdit;
    initLoop->setEnabled(false);


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
    mainContainer->addWidget(clockToggle);
    mainContainer->addWidget(timeNow);
    mainContainer->addWidget(intervalInt);
    mainContainer->addWidget(loopToggle);
    mainContainer->addWidget(initLoop);
    mainContainer->addWidget(endLoop);
    mainContainer->setSpacing(2);

    res->setLayout(mainContainer);


    connect(clockToggle, &QPushButton::toggled, initLoop, &QLineEdit::setEnabled);
    connect(clockToggle, &QPushButton::toggled, endLoop, &QLineEdit::setEnabled);
    connect(clockToggle, &QPushButton::toggled, finalButton, &QPushButton::setEnabled);
    connect(clockToggle, &QPushButton::toggled, this, &ViewSimulation::loopEnable);

    connect(intervalInt, &QLineEdit::textEdited, this, &ViewSimulation::loopDuration);
    connect(initLoop, &QLineEdit::textEdited, this, &ViewSimulation::loopInit);
    connect(endLoop, &QLineEdit::textEdited, this, &ViewSimulation::intervalDuration);


    connect(playButton, &QPushButton::clicked, this, &ViewSimulation::playSignal);
    connect(pauseButton, &QPushButton::clicked, this, &ViewSimulation::pauseSignal);
    connect(stopButton, &QPushButton::clicked, this, &ViewSimulation::stopSignal);
    connect(reverseButton, &QPushButton::clicked, this, &ViewSimulation::reverseSignal);
    connect(finalButton, &QPushButton::clicked, this, &ViewSimulation::toEndSignal);
    connect(backButton, &QPushButton::clicked, this, &ViewSimulation::toStartSignal);



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

    connect(menu, &QMenu::triggered, this, &ViewSimulation::createActor);


}



void ViewSimulation::showMenuSettings()
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

     menu->popup( this->mapToGlobal(QPoint(600,30)));

}


