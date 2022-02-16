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

    data[info.fileName()] = dataValues;


    dataOverWriter.write(QJsonDocument(data).toJson());
    dataOverWriter.close();


}

void SessionManager::createSession( ViewSession _view, QString _name, QString _description)
{
    actionsSystem->reset();
    actorsSystem->reset();
    session = new Session( _view, _name, _description);

}

void SessionManager::loadSession(QString url)
{
    actionsSystem->reset();
    actorsSystem->reset();
    QFile data(url);
    if (!data.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open save file.");
        return;
    }
    QByteArray dataArray = data.readAll();
    QJsonDocument dataDoc(QJsonDocument::fromJson(dataArray));

    QJsonObject dataJson = dataDoc.object();

    session = new Session( ViewSession::Free, dataJson["nameSession"].toString(), dataJson["description"].toString());

    QJsonArray arrayActors = dataJson["actors"].toArray();

    for( int i = 0;i<arrayActors.size();i++){
        QJsonObject actorObj = arrayActors[i].toObject();

        Actor* actor = actorsSystem->addActorNS();
        actor->setName(actorObj["name"].toString());

        actor->setIdentifier(actorObj["identifier"].toString());
        actor->setPositionX(actorObj["posX"].toDouble());
        actor->setPositionY(actorObj["posY"].toDouble());

    }

    QJsonArray arrayActions = dataJson["actions"].toArray();

    for( int i = 0;i<arrayActions.size();i++){
        QJsonObject actionObj = arrayActions[i].toObject();
        Actor* actor;
        for(int j = 0;j<actorsSystem->getListActors().count();j++){
            actor = actorsSystem->getListActors().at(j);
            if(actor->getIdentifier() == actionObj["identifier"].toString()){
                break;
            }
        }

        actionsSystem->addNewActionFromJson(actionObj, actor);

    }
}

void SessionManager::writeData(QJsonObject& json)
{


}

Session *SessionManager::getSession() const
{
    return session;
}
