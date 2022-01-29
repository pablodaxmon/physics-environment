#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include "core/timerloop.h"
#include "core/actor.h"
#include "core/actorsystem.h"
#include "core/equation.h"
#include "core/equationrunner.h"
#include "core/equationmaker.h"
#include <QMap>
#include <map>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *w = new QWidget();
    QHBoxLayout *box = new QHBoxLayout(w);

    QPushButton *stopbutton = new QPushButton("&Stop", this);
    QPushButton *button = new QPushButton("&Start", this);
    QPushButton *pausebutton = new QPushButton("&Pause", this);
    QPushButton *restartbutton = new QPushButton("&Restart", this);

    box->addWidget(button);
    box->addWidget(pausebutton);
    box->addWidget(stopbutton);
    box->addWidget(restartbutton);

    ActorSystem *actorsistema = new ActorSystem();
    TimerLoop *timerloop = new TimerLoop(*actorsistema);

    Actor *actor1 = new Actor("pablo1");
    Actor *actor2 = new Actor("pablo2");
    Actor *actor3 = new Actor("pablo3");
    Actor *actor4 = new Actor("pablo4");
    Actor *actor5 = new Actor("pablo5");

    actorsistema->addActor(actor1);
    actorsistema->addActor(actor2);
    actorsistema->addActor(actor3);
    actorsistema->addActor(actor4);
    actorsistema->addActor(actor5);

    connect(button, SIGNAL(pressed()), timerloop, SLOT(startLoop()));
    connect(stopbutton, SIGNAL(pressed()), timerloop, SLOT(stopLoop()));
    connect(pausebutton, SIGNAL(pressed()), timerloop, SLOT(pauseLoop()));
    connect(restartbutton, SIGNAL(pressed()), timerloop, SLOT(restartLoop()));

    QMap<QString, QString> *map = new QMap<QString, QString>();
    map->insert("A","velocity");
    map->insert("B","speed");
    map->insert("C","time");


    QList<float> *listValores = new QList<float>();
    listValores->append(3);
    listValores->append(4);
    listValores->append(5);

    Equation *ecuacion = new Equation("SUM(A,SUM(A,SUM(B,C))", map);

    EquationMaker *maker = new EquationMaker();

    maker->makeEquation(ecuacion, map);


    EquationRunner *runner = new EquationRunner();


    float res = runner->getResult(ecuacion, listValores);
    qDebug() << " SUM(A,SUM(A,SUM(B,C)) ";
    qDebug() << " RESULTADO: " << res;

    setCentralWidget(w);
}

MainWindow::~MainWindow()
{
}

