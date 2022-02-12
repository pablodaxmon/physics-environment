#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include "src/core/timerloop.h"
#include "src/core/actor.h"
#include "src/core/actorsystem.h"
#include "src/core/equation.h"
#include "src/core/equationrunner.h"
#include "src/core/equationmaker.h"
#include "src/core/action.h"
#include <QMap>
#include <map>
#include <QString>
#include <QDebug>


MainWindow:: MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainContainer = new QWidget;
    setCentralWidget(mainContainer);
    verticalMainLayout = new QVBoxLayout();
    verticalMainLayout->setContentsMargins(0,0,0,0);
    mainContainer->setLayout(verticalMainLayout);

    dialogMain = new InitialDialog(this);
    QObject::connect(dialogMain, &InitialDialog::createNewSesion, this, newSimulation);
    dialogMain->show();


    /////////////////////////////////////////////////////
    ///  Modulos para el funcionamiento del entorno /////
    /// /////////////////////////////////////////////////
    actorSystem = new ActorSystem;                   ///
                                                    ///

    ////////////////////////////////////////////////////////////
    ///    COMPONENTES DEL GUI                             /////
    ////////////////////////////////////////////////////////////
                                                             ///
    viewActions = new ViewActions(mainContainer);            ///
    viewObjectList = new ViewObjectList(mainContainer);      ///
    viewProperties = new ViewProperties(mainContainer);      /// ( false porque no hay objetos seleccionados)
    viewSimulation = new ViewSimulation(mainContainer);      ///
    viewProperties->setEnabled(false);                       ///
                                                             ///
    ////////////////////////////////////////////////////////////



    /// invisibles hasta cuando el usuario eliga el tipo de sesión
    viewActions->setVisible(false);     ///
    viewObjectList->setVisible(false);  ///
    viewProperties->setVisible(false);  ///
    viewSimulation->setVisible(false);  ///


    ///  Creación e implemetancion de los menus del menubar  ///
    createActions();            ///
    createMenu();               ///
    statusBar();                ///
    ///////////////////////////////


    /////////////////////////////////
    /// Conexion del GUI con los componentes
    /// ////////////////////////////
    connect(viewSimulation, &ViewSimulation::createActor, actorSystem, &ActorSystem::addActor);
    connect(actorSystem, &ActorSystem::addActorSignal, viewSimulation, &ViewSimulation::updateSceneObjects);
    connect(viewSimulation, &ViewSimulation::deletedObject, actorSystem, &ActorSystem::deleteActor);
    connect(viewSimulation, &ViewSimulation::setSelectedActorSignal, this, &MainWindow::connectSelectedActor);


}

void MainWindow::connectSelectedActor(Actor *actor)
{
    if(actor != nullptr){
        actorSystem->setSelectedActor(actor);
        connect(actor, &Actor::valuesChanged, viewProperties, &ViewProperties::setValuesFromActor);
        viewProperties->setValuesFromActor(actor->getValues());
        viewProperties->setEnabled(true);
        connect(viewProperties, &ViewProperties::valuesChanged, actor, &Actor::setValues);
    } else {
        qDebug() << "MainWindow: ningun actor seleccionado";
        viewProperties->setValuesNull();
        viewProperties->setEnabled(false);
        disconnect(actor, &Actor::valuesChanged, viewProperties, &ViewProperties::setValuesFromActor);
        disconnect(viewProperties, &ViewProperties::valuesChanged, actor, &Actor::setValues);
    }
}








//crea las ventanas del programa
void MainWindow::createViews()
{
}

void MainWindow::conecttingModulesViews()
{

}


void MainWindow::createActions(){
    actNewSimulation = new QAction(QIcon(":/icons/resources/icons16/image_add.png"),tr("&New simulation"), this);
    actNewSimulation->setStatusTip("Create a new simulation");


    actLoadSimulation = new QAction(QIcon(":/icons/resources/icons16/drive_add.png"),tr("&Load simulation"), this);
    actLoadSimulation->setStatusTip("Load simulation");
    connect(actLoadSimulation, &QAction::triggered, this, &MainWindow::loadSimulation);


    actLoadLastSimulation = new QAction(QIcon(":/icons/resources/icons16/folder_page.png"),tr("&Load last simulation"), this);
    actLoadLastSimulation->setStatusTip("Create a new simulation");
    connect(actLoadLastSimulation, &QAction::triggered, this, &MainWindow::loadLastSimulation);


    actRecentSimulations = new QAction(QIcon(":/icons/resources/icons16/folder_palette.png"),tr("&Recent simulations"), this);
    actRecentSimulations->setStatusTip("Create a new simulation");
    connect(actRecentSimulations, &QAction::triggered, this, &MainWindow::recentSimulations);


    actImportObjects = new QAction(QIcon(":/icons/resources/icons16/application_form_add.png"),tr("&Import objects"), this);
    actImportObjects->setStatusTip("Create a new simulation");
    connect(actImportObjects, &QAction::triggered, this, &MainWindow::importObjects);


    actExit = new QAction(QIcon(":/icons/resources/icons16/door_in.png"),tr("&Exit"), this);
    actExit->setStatusTip("Create a new simulation");
    connect(actExit, &QAction::triggered, this, &MainWindow::exit);


    actUndo = new QAction(QIcon(":/icons/resources/icons16/arrow_undo.png"),tr("&Undo"), this);
    actUndo->setStatusTip("Create a new simulation");
    connect(actUndo, &QAction::triggered, this, &MainWindow::undo);


    actRedo = new QAction(QIcon(":/icons/resources/icons16/arrow_redo.png"),tr("&Redo"), this);
    actRedo->setStatusTip("Create a new simulation");
    connect(actRedo, &QAction::triggered, this, &MainWindow::redo);


    actCut = new QAction(QIcon(":/icons/resources/icons16/cut.png"),tr("&Cut"), this);
    actCut->setStatusTip("Create a new simulation");
    connect(actCut, &QAction::triggered, this, &MainWindow::cut);


    actCopy = new QAction(QIcon(":/icons/resources/icons16/page_white_copy.png"),tr("&Copy"), this);
    actCopy->setStatusTip("Create a new simulation");
    connect(actCopy, &QAction::triggered, this, &MainWindow::copy);


    actPaste = new QAction(QIcon(":/icons/resources/icons16/paste_plain.png"),tr("&Paste"), this);
    actPaste->setStatusTip("Create a new simulation");
    connect(actPaste, &QAction::triggered, this, &MainWindow::paste);


    actPreferences = new QAction(QIcon(":/icons/resources/icons16/application_view_list.png"),tr("&Preferences"), this);
    actPreferences->setStatusTip("Create a new simulation");
    connect(actPreferences, &QAction::triggered, this, &MainWindow::preferences);


    actWorldValues = new QAction(QIcon(":/icons/resources/icons16/table_save.png"),tr("&World values"), this);
    actWorldValues->setStatusTip("Create a new simulation");
    connect(actWorldValues, &QAction::triggered, this, &MainWindow::worldValues);


    actAddObject = new QAction(QIcon(":/icons/resources/icons16/add.png"),tr("&Add object"), this);
    actAddObject->setStatusTip("Create a new simulation");
    connect(actAddObject, &QAction::triggered, this, &MainWindow::addObject);


    actStartSimulation = new QAction(QIcon(":/icons/resources/icons16/resultset_next.png"),tr("&Start simulation"), this);
    actStartSimulation->setStatusTip("Create a new simulation");
    connect(actStartSimulation, &QAction::triggered, this, &MainWindow::startSimulation);


    actStopSimulation = new QAction(QIcon(":/icons/resources/icons16/control_pause_blue.png"),tr("&Stop simulation"), this);
    actStopSimulation->setStatusTip("Create a new simulation");
    connect(actStopSimulation, &QAction::triggered, this, &MainWindow::stopSimulation);


    actRecordValues = new QAction(QIcon(":/icons/resources/icons16/chart_bar.png"),tr("&Record values"), this);
    actRecordValues->setStatusTip("Create a new simulation");
    connect(actRecordValues, &QAction::triggered, this, &MainWindow::recordValues);


    actCalculateValues = new QAction(QIcon(":/icons/resources/icons16/calculator.png"),tr("&Calculate values"), this);
    actCalculateValues->setStatusTip("Create a new simulation");
    connect(actCalculateValues, &QAction::triggered, this, &MainWindow::calculateValues);


    actAboutProgrammers = new QAction(QIcon(":/icons/resources/icons16/book.png"),tr("&About programmers"), this);
    actAboutProgrammers->setStatusTip("Show info about the programmers");
    connect(actAboutProgrammers, &QAction::triggered, this, &MainWindow::aboutProgrammers);


    actHelp = new QAction(QIcon(":/icons/resources/icons16/book_open.png"),tr("&Help"), this);
    actHelp->setStatusTip("Create a new simulation");
    connect(actHelp, &QAction::triggered, this, &MainWindow::help);




    actVersionInfo = new QAction(QIcon(":/icons/resources/icons16/information.png"),tr("&Version info"), this);
    actVersionInfo->setStatusTip("Create a new simulation");
    connect(actVersionInfo, &QAction::triggered, this, &MainWindow::versionInfo);

}

void MainWindow::createMenu(){


    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(actNewSimulation);
    fileMenu->addAction(actLoadSimulation);
    fileMenu->addAction(actLoadLastSimulation);
    fileMenu->addAction(actRecentSimulations);
    fileMenu->addAction(actImportObjects);
    fileMenu->addSeparator();
    fileMenu->addAction(actExit);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(actUndo);
    editMenu->addAction(actRedo);
    editMenu->addSeparator();
    editMenu->addAction(actCopy);
    editMenu->addAction(actPaste);
    editMenu->addAction(actCut);
    editMenu->addSeparator();
    editMenu->addAction(actPreferences);

    simulationMenu = menuBar()->addMenu(tr("&Simulation"));
    simulationMenu->addAction(actWorldValues);
    simulationMenu->addAction(actAddObject);
    simulationMenu->addSeparator();
    simulationMenu->addAction(actStartSimulation);
    simulationMenu->addAction(actStopSimulation);
    simulationMenu->addAction(actRecordValues);
    simulationMenu->addAction(actCalculateValues);

    infoMenu = menuBar()->addMenu(tr("&Info"));
    infoMenu->addAction(actAboutProgrammers);
    infoMenu->addAction(actHelp);
    infoMenu->addAction(actVersionInfo);

}

MainToolBar *MainWindow::getMainToolbar() const
{
    return mainToolbar;
}

ViewProperties *MainWindow::getViewProperties() const
{
    return viewProperties;
}

ViewObjectList *MainWindow::getViewObjectList() const
{
    return viewObjectList;
}

ViewSimulation* MainWindow::getViewSimulation() const
{
    return viewSimulation;
}


void MainWindow::newSimulation(Session *session){


    setWindowTitle(session->getName() + " - Physics Environment");

    splitMain = new SplitterMain(mainContainer,viewObjectList, viewActions, viewProperties, viewSimulation);

    dialogMain->close();
    //verticalMainLayout->addWidget(mainToolbar);


    /// Establesemos la visibilidad de los componentes del GUI en 'true'
    viewActions->setVisible(true);     ///
    viewObjectList->setVisible(true);  ///
    viewProperties->setVisible(true);  ///
    viewSimulation->setVisible(true);  ///

    verticalMainLayout->addWidget(splitMain);
    verticalMainLayout->setSpacing(0);
}





