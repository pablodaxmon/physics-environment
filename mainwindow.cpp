#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include "core/timerloop.h"

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

    TimerLoop *timerloop = new TimerLoop();

    connect(button, SIGNAL(pressed()), timerloop, SLOT(startLoop()));
    connect(stopbutton, SIGNAL(pressed()), timerloop, SLOT(stopLoop()));
    connect(pausebutton, SIGNAL(pressed()), timerloop, SLOT(pauseLoop()));
    connect(restartbutton, SIGNAL(pressed()), timerloop, SLOT(restartLoop()));

    setCentralWidget(w);
}

MainWindow::~MainWindow()
{
}

