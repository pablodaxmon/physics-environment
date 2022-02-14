#ifndef ACTIONSSYSTEM_H
#define ACTIONSSYSTEM_H

#include <QList>
#include <QObject>
#include "src/gui/actionitem.h"
#include "actor.h"


class ActionsSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActionsSystem(QObject *parent = nullptr);

public slots:
    void setSelectedActor(Actor *newSelectedActor);
    void addNewAction(ActionItem *item);
    void executeAction(float time);
signals:

private:
    QList<ActionItem*> * listActions;
    Actor* selectedActor;

};

#endif // ACTIONSSYSTEM_H
