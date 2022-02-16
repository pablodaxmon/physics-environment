#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//qt
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QAction>
#include <QMenuBar>
#include <QPushButton>
#include <QSizePolicy>

//gui
#include "splittermain.h"
#include "viewsimulation.h"
#include "viewobjectlist.h"
#include "viewactions.h"
#include "viewproperties.h"
#include "maintoolbar.h"
#include "initialdialog.h"

//core
#include "src/core/actorsystem.h"
#include "src/core/actor.h"
#include "src/core/equation.h"
#include "src/core/equationmaker.h"
#include "src/core/equationrunner.h"
#include "src/core/operationmath.h"
#include "src/core/physics.h"
#include "src/core/timerloop.h"
#include "src/core/Session.h"
#include "src/core/actionssystem.h"
#include "src/core/sessionmanager.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);



    ViewSimulation* getViewSimulation() const;

    ViewObjectList *getViewObjectList() const;

    ViewProperties *getViewProperties() const;

    MainToolBar *getMainToolbar() const;

protected:
    void createViews();
    void conecttingModulesViews();
    void showInitialdialog();


public slots:

    void newSimulation();
    void connectSelectedActor(Actor * actor);

signals:
    void setItemSelected(const QModelIndex &index);
    void loadSimulation();
    void loadLastSimulation();
    void recentSimulations();
    void importObjects();
    void exit();

    void undo();
    void redo();
    void cut();
    void copy();
    void paste();
    void preferences();

    void worldValues();
    void addObject();
    void startSimulation();
    void stopSimulation();
    void recordValues();
    void calculateValues();

    void aboutProgrammers();
    void help();
    void versionInfo();
private:
    void createActions();
    void createMenu();

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *simulationMenu;
    QMenu *infoMenu;
    QAction *actNewSimulation;
    QAction *actLoadSimulation;
    QAction *actLoadLastSimulation;
    QAction *actRecentSimulations;
    QAction *actImportObjects;
    QAction *actExit;
    QAction *actUndo;
    QAction *actRedo;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actPreferences;
    QAction *actWorldValues;
    QAction *actAddObject;
    QAction *actStartSimulation;
    QAction *actStopSimulation;
    QAction *actRecordValues;
    QAction *actCalculateValues;
    QAction *actAboutProgrammers;
    QAction *actHelp;
    QAction *actVersionInfo;
    QLabel *infoLabel;
    QLabel *infoLabel2;

    QVBoxLayout *verticalMainLayout;
    QWidget *mainContainer;


    ActorSystem* actorSystem;
    ActionsSystem* actionsSystem;
    EquationMaker* equationMaker;
    SessionManager* sessionManager;
    TimerLoop* timerLoop;


    ViewActions *viewActions;
    ViewProperties *viewProperties;
    ViewSimulation *viewSimulation;
    ViewGraphicsResults * viewGraphicsResult;
    SplitterMain *splitMain;
    ViewObjectList *viewObjectList;
    MainToolBar *mainToolbar;


    InitialDialog *dialogMain;
    /// ___________________
    /// session
    /// ___________________

    Session * actualSession;

signals:



};
#endif // MAINWINDOW_H
