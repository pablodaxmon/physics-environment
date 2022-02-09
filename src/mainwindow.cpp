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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

}

MainWindow::~MainWindow()
{
}

