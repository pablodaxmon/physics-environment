#include "gui/mainwindow.h"
#include "core/actorsystem.h"
#include "core/actor.h"
#include "gui/viewobjectlist.h"
#include "gui/maintoolbar.h"
#include <QFontDatabase>

#include <QFile>
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QObject>
#include "core/timerloop.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "physics-environment_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }


    MainWindow window;
    QFontDatabase::addApplicationFont(":/fonts/Lato-Regular.ttf");

    /*
    ActorSystem actorsystem;
    TimerLoop timer(actorsystem);

    actorsystem.setViewsimulation(window.getViewSimulation());
    actorsystem.setViewproperties(window.getViewProperties());


    QObject::connect(&window, &MainWindow::addObject, &actorsystem, &ActorSystem::addActor);
    QObject::connect(&actorsystem, &ActorSystem::addActorSignal, window.getViewObjectList(), &ViewObjectList::addItemToList);
    QObject::connect(&window, &MainWindow::setItemSelected, &actorsystem, &ActorSystem::setSelectedActor);
    QObject::connect(window.getViewSimulation(), &ViewSimulation::eqTextChanged, &actorsystem, &ActorSystem::setCodeEqToSelectedActor);


    QObject::connect(window.getMainToolbar(), &MainToolBar::playSignal, &timer, &TimerLoop::startLoop);
    QObject::connect(window.getMainToolbar(), &MainToolBar::stopSignal, &timer, &TimerLoop::stopLoop);
    QObject::connect(window.getMainToolbar(), &MainToolBar::pauseSignal, &timer, &TimerLoop::pauseLoop);*/






    QFile qss(":/styles/style.qss");
    qss.open(QFile::ReadOnly);
    window.setStyleSheet(qss.readAll());
    window.setWindowState(Qt::WindowMaximized);
    window.setWindowTitle("Simulation Analisys Environment");
    window.show();

    return a.exec();
}
