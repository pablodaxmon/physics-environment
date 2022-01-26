#include "mainwindow.h"
#include "core/actorsystem.h"
#include "core/actor.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

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

    ActorSystem *actorsistem = new ActorSystem();
    Actor *actor = new Actor("german");
    Actor *actor2 = new Actor("pablo");
    Actor *actor3 = new Actor("pedro");

    actor->setName("soy un name");

    actorsistem->addActor(actor);
    actorsistem->addActor(actor2);
    actorsistem->addActor(actor3);

    actorsistem->getActorbyName("pablo");

    MainWindow w;
    w.show();
    return a.exec();
}
