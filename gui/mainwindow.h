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
#include "dialogtypeenvironment.h"
#include "maintoolbar.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void addingSplitInMainLayout();

protected:
    void settingMainContainer();
    void settingInitialDialog();
    void createModules();
    void createViews();
    void conecttingModulesViews();
    void addingViewsInSplit();



private slots:
    void newSimulation();
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

    DialogTypeEnvironment *dialogMain;
    SplitterMain *splitMain;

};
#endif // MAINWINDOW_H
