#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

#include <QObject>
#include "actionssystem.h"
#include "actorsystem.h"
#include "actor.h"
#include "src/gui/actionitem.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QStringLiteral>
#include <QJsonDocument>
#include "Session.h"

class SessionManager : public QObject
{
    Q_OBJECT
public:
    SessionManager(ActionsSystem* actionss, ActorSystem* actorss, QObject *parent = nullptr);



    void writeData(QJsonObject& json);

    Session *getSession() const;
public slots:

    void createSession( ViewSession _view, QString _name, QString _description);
    void saveSession();
private:
    ActionsSystem* actionsSystem;
    ActorSystem* actorsSystem;
    Session* session;

};

#endif // SESSIONMANAGER_H
