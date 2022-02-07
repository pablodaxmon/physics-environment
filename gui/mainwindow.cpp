#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include "core/timerloop.h"
#include "core/actor.h"
#include "core/actorsystem.h"
#include "core/equation.h"
#include "core/equationrunner.h"
#include "core/equationmaker.h"
#include "core/action.h"
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


    createActions();
    createMenu();

    viewActions = new ViewActions(mainContainer);
    viewObjectList = new ViewObjectList(mainContainer);
    viewProperties = new ViewProperties(mainContainer);
    viewSimulation = new ViewSimulation(mainContainer);
    //mainToolbar = new MainToolBar(mainContainer);

    statusBar();


}

// crea un widget principal, y le asigna un layout nuevo.
void MainWindow::settingMainContainer()
{
}

// muestra el dialogo principal para elegir el tipo de entorno
void MainWindow::settingInitialDialog()
{

    //verticalMainLayout->addWidget(dialogMain, Qt::AlignCenter);
    //QObject::connect(dialogMain, &DialogTypeEnvironment::typeOnClick, this, newSimulation);
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

    qDebug() << "created new simulation at " << session->getName();

    setWindowTitle(session->getName() + " - Physics Environment");

    splitMain = new SplitterMain(mainContainer,viewObjectList, viewActions, viewProperties, viewSimulation);

    dialogMain->close();
    //verticalMainLayout->addWidget(mainToolbar);


    verticalMainLayout->addWidget(splitMain);
    verticalMainLayout->setSpacing(0);
}





