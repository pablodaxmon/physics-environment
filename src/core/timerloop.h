#ifndef TIMERLOOP_H
#define TIMERLOOP_H

#include <QObject>
#include <QTimer>
#include <QDebug>
#include "src/core/actorsystem.h"

class TimerLoop : public QObject
{
    Q_OBJECT
public:
    explicit TimerLoop(ActorSystem& m_actorsystem, QObject *parent = nullptr);

signals:
    void signalUpdate();
    void signalStart();


private:
    QTimer *timer = new QTimer(this);
    int intervalDuration;
    float durationLoop;
    int lastLapse;

public slots:
    void update();
    void setDurationLoop(float value);
    void setDurationLoopInterval(float value);
    void startLoop();
    void stopLoop();
    void pauseLoop();
    void restartLoop();

protected:
    ActorSystem& actorsistem;

};

#endif // TIMERLOOP_H
