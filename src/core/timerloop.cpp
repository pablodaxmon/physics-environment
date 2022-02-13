#include "timerloop.h"
#include <string>

TimerLoop::TimerLoop(ActorSystem& m_actorsystem, QObject *parent) : QObject(parent), actorsistem(m_actorsystem)
{
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    lastLapse = 0;
}

bool TimerLoop::getLoopEnable() const
{
    return loopEnable;
}

int TimerLoop::getIntervalDuration() const
{
    return intervalDuration;
}

void TimerLoop::setIntervalDuration(const QString &text)
{
    qDebug() << "TimerLoop: setIntervalDuration";
}

float TimerLoop::getInit() const
{
    return init;
}

void TimerLoop::setInit(const QString &text)
{
    qDebug() << "TimerLoop: setInit";
}

void TimerLoop::setDurationLoop(const QString &text)
{

    qDebug() << "TimerLoop: setDurationLoop";
}

void TimerLoop::setLoopEnable(bool newLoopEnable)
{
    qDebug() << "TimerLoop: setLoopEnable";
    loopEnable = newLoopEnable;
}



void TimerLoop::startLoop()
{
    if(intervalDuration == 0){
        intervalDuration = 200;
    }
    timer->start(30);

    emit signalStart();

    qDebug() << "TimerLoop: startLoop";

}

void TimerLoop::stopLoop()
{
    qDebug() << "TimerLoop: stopLoop";
    lastLapse = 0;
    timer->stop();
}

void TimerLoop::pauseLoop()
{
    qDebug() << "TimerLoop: pauseLoop";
    timer->stop();
}

void TimerLoop::toStartLoop()
{
    qDebug() << "TimerLoop: toStartLoop";
    timer->stop();
    lastLapse = 0;
    timer->start();
}



void TimerLoop::toEndLoop()
{

    qDebug() << "TimerLoop: toEndLoop";
}

void TimerLoop::update()
{
    lastLapse++;

    qDebug() << "TimerLoop: update";
    actorsistem.updateActors();

}
