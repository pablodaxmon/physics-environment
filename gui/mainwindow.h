#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QAction>
#include <QMenuBar>
#include <QPushButton>
#include <QSizePolicy>
#include "splittermain.h"
#include "viewsimulation.h"
#include "viewobjectlist.h"
#include "viewactions.h"
#include "viewproperties.h"
#include "dialogtypeenvironment.h"
#include "maintoolbar.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void addingSplitInMainLayout();


    ViewSimulation* getViewSimulation() const;

    ViewObjectList *getViewObjectList() const;

    ViewProperties *getViewProperties() const;

    MainToolBar *getMainToolbar() const;

protected:
    void settingMainContainer();
    void settingInitialDialog();
    void createModules();
    void createViews();
    void conecttingModulesViews();
    void addingViewsInSplit();


public slots:

    void newSimulation();

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


    ViewActions *viewActions;
    ViewProperties *viewProperties;
    ViewSimulation *viewSimulation;
    SplitterMain *splitMain;
    ViewObjectList *viewObjectList;
    MainToolBar *mainToolbar;

    DialogTypeEnvironment *dialogMain;

signals:



};
#endif // MAINWINDOW_H
