#include "actor.h"

Actor::Actor(const char *nameActor,QObject *parent) : QObject(parent)
{
    name = nameActor;

}

int Actor::getIndexInList()
{
    return indexInList;
}

void Actor::setIndexInList(int newIndexInList)
{
    indexInList = newIndexInList;
}

QString &Actor::getName()
{
    return name;
}

void Actor::setName(char* newName)
{
    name = newName;
}

void Actor::StartFrame()
{
    qDebug("startframe");
}

void Actor::UpdateFrame()
{
    qDebug("updateFrame");
}

void Actor::LastUpdateFrame()
{
    qDebug("LastUpdateFrame");
}
