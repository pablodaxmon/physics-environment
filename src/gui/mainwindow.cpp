#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include "src/core/timerloop.h"
#include "src/core/actor.h"
#include "src/core/actorsystem.h"
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
    settingsDialog = new SettingsDialog(this);
    dialogMain->show();


    /////////////////////////////////////////////////////
    ///  Modulos para el funcionamiento del entorno /////
    /// /////////////////////////////////////////////////
    actorSystem = new ActorSystem;                   ///
    actionsSystem = new ActionsSystem;               ///
    timerLoop   = new TimerLoop((*actorSystem), (*actionsSystem));
    sessionManager   = new SessionManager(actionsSystem, actorSystem);

    ////////////////////////////////////////////////////////////
    ///    COMPONENTES DEL GUI                             /////
    ////////////////////////////////////////////////////////////
                                                             ///
    viewActions    = new ViewActions(mainContainer);         ///
    viewObjectList = new ViewObjectList(mainContainer);      ///
    viewProperties = new ViewProperties(mainContainer);      /// ( false porque no hay objetos seleccionados)
    viewSimulation = new ViewSimulation(mainContainer);      ///
    viewGraphicsResult = new ViewGraphicsResults(mainContainer);///
    viewProperties->setEnabled(false);                       ///
    viewActions->isSelectedActor(false);
    actionsSystem->setContainerItems(viewActions->getContainerList());///
    splitMain = new SplitterMain(mainContainer,viewGraphicsResult,viewObjectList, viewActions, viewProperties, viewSimulation);
    viewObjectList->setModel(actorSystem->getModel());
    viewGraphicsResult->setListActors(&actorSystem->getListActors());
    actorSystem->setScene(viewSimulation->getScene());

    ////////////////////////////////////////////////////////////



    /// invisibles hasta cuando el usuario eliga el tipo de sesi??n
    viewActions->setVisible(false);     ///
    viewObjectList->setVisible(false);  ///
    viewProperties->setVisible(false);  ///
    viewSimulation->setVisible(false);  ///
    splitMain->setVisible(false);  ///


    ///  Creaci??n e implemetancion de los menus del menubar  ///
    createActions();            ///
    createMenu();               ///
    statusBar();                ///
    ///////////////////////////////


    /////////////////////////////////
    /// Conexion del GUI con los componentes
    /// ////////////////////////////
    connect(viewSimulation, &ViewSimulation::createActor, actorSystem, &ActorSystem::addActor);
    connect(actorSystem, &ActorSystem::addActorSignal, viewSimulation, &ViewSimulation::updateSceneObjects);
    connect(actorSystem, &ActorSystem::addActorSignal, viewObjectList, &ViewObjectList::addItemToList);
    connect(viewSimulation, &ViewSimulation::deletedObject, actorSystem, &ActorSystem::deleteActor);
    connect(viewSimulation, &ViewSimulation::setSelectedActorSignal, this, &MainWindow::connectSelectedActor);
    connect(viewSimulation, &ViewSimulation::setSelectedActorSignal, actionsSystem, &ActionsSystem::setSelectedActor);

    connect(viewSimulation, &ViewSimulation::playSignal, timerLoop, &TimerLoop::startLoop);
    connect(viewSimulation, &ViewSimulation::pauseSignal, timerLoop, &TimerLoop::pauseLoop);
    connect(viewSimulation, &ViewSimulation::stopSignal, timerLoop, &TimerLoop::stopLoop);
    connect(viewSimulation, &ViewSimulation::reverseSignal, timerLoop, &TimerLoop::stopLoop);
    connect(viewSimulation, &ViewSimulation::toStartSignal, timerLoop, &TimerLoop::toStartLoop);
    connect(viewSimulation, &ViewSimulation::toEndSignal, timerLoop, &TimerLoop::toEndLoop);


    connect(viewSimulation, &ViewSimulation::loopEnable, timerLoop, &TimerLoop::setLoopEnable);
    connect(viewSimulation, &ViewSimulation::loopInit, timerLoop, &TimerLoop::setInit);
    connect(viewSimulation, &ViewSimulation::loopDuration, timerLoop, &TimerLoop::setDurationLoop);
    connect(viewSimulation, &ViewSimulation::intervalDuration, timerLoop, &TimerLoop::setIntervalDuration);
    connect(timerLoop, &TimerLoop::timeChange, viewSimulation, &ViewSimulation::setTimeNow);
    connect(timerLoop, &TimerLoop::signalStart, viewGraphicsResult, &ViewGraphicsResults::setInitTime);
    connect(timerLoop, &TimerLoop::timeChange, viewGraphicsResult, &ViewGraphicsResults::setTimeNow);
    connect(viewActions, &ViewActions::addedNewAction, actionsSystem, &ActionsSystem::addNewAction);
    connect(viewGraphicsResult, &ViewGraphicsResults::changeTime, timerLoop, &TimerLoop::setTimeNow);

    connect(viewSimulation, &ViewSimulation::isMovibleSignal, actorSystem, &ActorSystem::setIsMovible);


    connect(viewObjectList, &ViewObjectList::setSelectedItem, actorSystem, &ActorSystem::setSelectedActorFromView);
    connect(actorSystem, &ActorSystem::selectedActorSignal, this, &MainWindow::connectSelectedActor);
    connect(actorSystem, &ActorSystem::selectedActorSignal, actionsSystem, &ActionsSystem::setSelectedActor);

    connect(viewSimulation, &ViewSimulation::graphiTypeChanged, viewGraphicsResult, &ViewGraphicsResults::graphicTypechanged);


    connect(viewSimulation, &ViewSimulation::showSettings, settingsDialog, &QDialog::open); //////////////////////////////////////////////////

    connect(sessionManager, &SessionManager::resetAll, this, &MainWindow::resetAlls);
    connect(dialogMain, &InitialDialog::loadSesion, this, &MainWindow::createLoadSimulation);
    connect(dialogMain, &InitialDialog::createNewSesion, sessionManager, &SessionManager::createSession);
    connect(dialogMain, &InitialDialog::createNewSesion, this, newSimulation);


    connect(settingsDialog, &SettingsDialog::frameRateChanged, timerLoop, &TimerLoop::setFrameDuration);
    connect(settingsDialog, &SettingsDialog::frameRateChanged, actorSystem, &ActorSystem::setFrameRate);
    connect(settingsDialog, &SettingsDialog::plotframeRateChanged, viewGraphicsResult, &ViewGraphicsResults::setFrameDuration);
    connect(settingsDialog, &SettingsDialog::gravityChanged, actorSystem, &ActorSystem::setGravityV);
    connect(settingsDialog, &SettingsDialog::antialiasingChanged, viewSimulation, &ViewSimulation::setAntialiasing);
    connect(settingsDialog, &SettingsDialog::stopForcesChanged, actorSystem, &ActorSystem::setStopEvery);


}




void MainWindow::connectSelectedActor(Actor *actor)
{
    if(actor != nullptr){
        actorSystem->setSelectedActor(actor);
        viewProperties->setSelectedActor(actor);
        actionsSystem->setSelectedActor(actor);
        viewActions->setSelectedActor(actor);
        viewGraphicsResult->setSelectedActor(actor);
        viewObjectList->setSelectedActor(actor);
        viewActions->isSelectedActor(true);
        connect(actor, &Actor::valuesChanged, viewProperties, &ViewProperties::setValuesFromActor);
        viewProperties->setEnabled(true);
        connect(viewProperties, &ViewProperties::valuesChanged, actor, &Actor::setValues);
    } else {
        actorSystem->setSelectedActor(nullptr);
        viewProperties->setSelectedActor(nullptr);
        actionsSystem->setSelectedActor(nullptr);
        viewActions->setSelectedActor(nullptr);
        viewActions->isSelectedActor(false);
        viewProperties->setEnabled(false);
        disconnect(actor, &Actor::valuesChanged, viewProperties, &ViewProperties::setValuesFromActor);
        disconnect(viewProperties, &ViewProperties::valuesChanged, actor, &Actor::setValues);
    }
}

void MainWindow::resetAlls()
{
    actorSystem->reset();
    actionsSystem->reset();
    viewSimulation->reset();

}

void MainWindow::showInfo()
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{min-width: 300px; min-height: 100px;}");
    msgBox.setWindowTitle("Informaci??n acerca de la aplicaci??n");
    msgBox.setText("Physics-environment es un software para simular entornos de fisica basica aplicando la f??rmula de aceleraci??n cinem??tica o las leyes de newton"
                   " ");

    msgBox.exec();
}

void MainWindow::showVersionInfo()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Informaci??n version y reportar bugs");
    msgBox.setText("Version estable. 20-2-2022: reportar bugs a : pablounico.daxmon@gmail.com");
    msgBox.exec();
}

void MainWindow::showHelp()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Ayuda manual");
    msgBox.setText("Click en 'show details' para ver manual");

    msgBox.setStyleSheet("QLabel{min-width: 300px;}");
    msgBox.setDetailedText("CREAR SESI??N: Al iniciar el programa puede cargar una sesi??n guardada (si existe) o crear una nueva sesi??n,"
                           "las dos opciones que existen se refieren a las formulas que se usaran para realizar la simulaci??n pued elejir entre"
                           "solo usar la f??rmula de aceleraci??n o usar el motor Box2D para las leyes de newton.   CREAR OBJETO: puede crear un objeto en la vista de"
                           "simulaci??n area izquierda superir, click en el icono de objeto y cree el objeto que elija. CREAR ACCION: en el area de acciones click en "
                           "'a??adir accion' si su simulacion es cinematica tendra opciones para programar un accion, si es dinamica tendr?? opciones para programar"
                           "una fuerza en el objeto seleccionado. START SIMULACI??N: click en el icono play y visualize su simulaci??n. En la parte inferior ver?? un "
                           "grafico mostrando la relaci??n entre la variable seleccionada y el tiempo.");
    msgBox.exec();
}









//crea las ventanas del programa
void MainWindow::createViews()
{
}

void MainWindow::conecttingModulesViews()
{

}

void MainWindow::showInitialdialog()
{
    /// Establesemos la visibilidad de los componentes del GUI en 'true'
    viewActions->setVisible(false);     ///
    viewObjectList->setVisible(false);  ///
    viewProperties->setVisible(false);  ///
    viewSimulation->setVisible(false);  ///
    splitMain->setVisible(false);       ///
    dialogMain->show();
}

void MainWindow::createLoadSimulation(QString url)
{
    sessionManager->loadSession(url);
    viewSimulation->setIsBoxType(sessionManager->getTypeSession());
    viewActions->setIsBoxtype(sessionManager->getTypeSession());

    setWindowTitle(sessionManager->getSession()->getName() + tr(" - UMSS"));


    dialogMain->close();
    //verticalMainLayout->addWidget(mainToolbar);


    /// Establesemos la visibilidad de los componentes del GUI en 'true'
    viewActions->setVisible(true);     ///
    viewObjectList->setVisible(true);  ///
    viewProperties->setVisible(true);  ///
    viewSimulation->setVisible(true);  ///
    splitMain->setVisible(true);       ///

    verticalMainLayout->addWidget(splitMain);
    verticalMainLayout->setSpacing(0);
}


void MainWindow::createActions(){
    actNewSimulation = new QAction(QIcon(":/icons/resources/icons16/image_add.png"),tr("&New simulation"), this);
    actNewSimulation->setStatusTip("Create a new simulation");
    connect(actNewSimulation, &QAction::triggered, this, &MainWindow::showInitialdialog);


    actLoadSimulation = new QAction(QIcon(":/icons/resources/icons16/drive_add.png"),tr("&Load simulation"), this);
    actLoadSimulation->setStatusTip("Load simulation");
    connect(actLoadSimulation, &QAction::triggered, this, &MainWindow::loadSimulation);


    actLoadLastSimulation = new QAction(QIcon(":/icons/resources/icons16/folder_page.png"),tr("&Save simulation"), this);
    actLoadLastSimulation->setStatusTip("Save simulation");
    connect(actLoadLastSimulation, &QAction::triggered, sessionManager, &SessionManager::saveSession);


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


    actAboutProgrammers = new QAction(QIcon(":/icons/resources/icons16/book.png"),tr("&Info"), this);
    actAboutProgrammers->setStatusTip("Show info about the programmers");
    connect(actAboutProgrammers, &QAction::triggered, this, &MainWindow::showInfo);


    actHelp = new QAction(QIcon(":/icons/resources/icons16/book_open.png"),tr("&Help"), this);
    actHelp->setStatusTip("Create a new simulation");
    connect(actHelp, &QAction::triggered, this, &MainWindow::showHelp);




    actVersionInfo = new QAction(QIcon(":/icons/resources/icons16/information.png"),tr("&Version info"), this);
    actVersionInfo->setStatusTip("Create a new simulation");
    connect(actVersionInfo, &QAction::triggered, this, &MainWindow::showVersionInfo);

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


void MainWindow::newSimulation()
{
    viewSimulation->setIsBoxType(sessionManager->getTypeSession());
    viewActions->setIsBoxtype(sessionManager->getTypeSession());

    setWindowTitle(sessionManager->getSession()->getName() + tr(" - UMSS"));


    dialogMain->close();
    //verticalMainLayout->addWidget(mainToolbar);


    /// Establesemos la visibilidad de los componentes del GUI en 'true'
    viewActions->setVisible(true);     ///
    viewObjectList->setVisible(true);  ///
    viewProperties->setVisible(true);  ///
    viewSimulation->setVisible(true);  ///
    splitMain->setVisible(true);       ///

    verticalMainLayout->addWidget(splitMain);
    verticalMainLayout->setSpacing(0);
}





