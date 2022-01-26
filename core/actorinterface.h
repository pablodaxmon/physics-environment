#ifndef ACTORINTERFACE_H
#define ACTORINTERFACE_H

#include <QObject>

class ActorInterface : public QObject
{
    Q_OBJECT
public:
    explicit ActorInterface(QObject *parent = nullptr);

signals:

};

#endif // ACTORINTERFACE_H
