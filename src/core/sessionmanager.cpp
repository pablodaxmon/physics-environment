#include "sessionmanager.h"
#include <QFileInfo>

SessionManager::SessionManager(ActionsSystem* actionss, ActorSystem* actorss, QObject *parent) : actionsSystem(actionss), actorsSystem(actorss), QObject(parent)
{

}



void SessionManager::saveSession()
{
    QFile saveFile(session->getName().simplified().replace(" ", "-").toLower() + (".phe"));
    QFileInfo info(saveFile);

    if (!saveFile.open(QIODevice::WriteOnly)) {
          qWarning("Couldn't open save file.");
      }
    QJsonObject sessionObject;
    sessionObject["nameSession"] = session->getName();
    sessionObject["descriptionSession"] = session->getDescription();
    actionsSystem->writeJson(sessionObject);
    actorsSystem->writeJson(sessionObject);
    saveFile.write(QJsonDocument(sessionObject).toJson());
    qDebug() << "Session saved";
    saveFile.close();



    QFile dataFile("datastorage.json");

    if (!dataFile.open(QIODevice::ReadWrite)) {
        qWarning("Couldn't open save file.");
        return;
    }

    QByteArray tempdata = dataFile.readAll();
    QJsonDocument loadData(QJsonDocument::fromJson(tempdata));

    dataFile.close();

    QFile dataOverWriter("datastorage.json");
    if (!dataOverWriter.open(QIODevice::ReadWrite)) {
        qWarning("Couldn't open save file.");
        return;
    }

    QJsonObject data = loadData.object();
    QJsonObject dataValues;

    dataValues["description"] = session->getDescription();
    dataValues["direction"] = info.absolutePath();

    data[session->getName()] = dataValues;


    dataOverWriter.write(QJsonDocument(data).toJson());
    dataOverWriter.close();


}

void SessionManager::createSession( ViewSession _view, QString _name, QString _description)
{
    session = new Session( _view, _name, _description);

}

void SessionManager::writeData(QJsonObject& json)
{


}

Session *SessionManager::getSession() const
{
    return session;
}
