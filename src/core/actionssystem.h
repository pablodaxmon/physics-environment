#ifndef ACTIONSSYSTEM_H
#define ACTIONSSYSTEM_H

#include <QList>
#include <QObject>
#include "src/gui/actionitem.h"
#include "actor.h"
#include "QJsonArray"
#include "QJsonObject"

class ActionsSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActionsSystem(QObject *parent = nullptr);
    void writeJson(QJsonObject &json);


    void setContainerItems(QBoxLayout *newContainerItems);

    void setIsBoxType(bool newIsBoxType);

public slots:
    void setSelectedActor(Actor *newSelectedActor);
    void addNewAction(ActionItem *item);
    void addNewActionFromJson(const QJsonObject &json, Actor *actor);
    void executeAction(float time);
    void reset();
signals:

private:
    QList<ActionItem*> listActions;
    Actor* selectedActor;
    QBoxLayout* containerItems;

    bool isBoxType;
};

#endif // ACTIONSSYSTEM_H
