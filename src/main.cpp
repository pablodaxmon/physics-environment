#include "gui/mainwindow.h"
#include "core/actorsystem.h"
#include "core/actor.h"
#include "gui/viewobjectlist.h"
#include "gui/maintoolbar.h"
#include <QFontDatabase>
#include "gui/viewobjectlist.h"

#include <QFile>
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QObject>


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();


    MainWindow window;
    QFontDatabase::addApplicationFont(":/fonts/Lato-Regular.ttf");
    QFile qss(":/styles/style.qss");
    qss.open(QFile::ReadOnly);
    window.setStyleSheet(qss.readAll());
    window.setWindowState(Qt::WindowMaximized);
    window.setWindowTitle("Simulation Analisys Environment");
    window.show();


    return a.exec();





}
