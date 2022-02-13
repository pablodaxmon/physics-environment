#ifndef ACTIONSSYSTEM_H
#define ACTIONSSYSTEM_H

#include <QObject>

class ActionsSystem : public QObject
{
    Q_OBJECT
public:
    explicit ActionsSystem(QObject *parent = nullptr);

signals:

};

#endif // ACTIONSSYSTEM_H
