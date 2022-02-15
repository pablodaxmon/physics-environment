#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

#include "actor.h"
#include "src/gui/actionitem.h"

class SessionManager
{
public:
    SessionManager();

    void saveSession(QList);

    void getActorsList();
    void getACtionsList();

    void writeData() const ;

};

#endif // SESSIONMANAGER_H
