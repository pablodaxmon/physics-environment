#include "timerloop.h"
#include <string>

TimerLoop::TimerLoop(ActorSystem& m_actorsystem, QObject *parent) : QObject(parent), actorsistem(m_actorsystem)
{
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    lastLapse = 0;
}

void TimerLoop::setDurationLoop(float value)
{
    durationLoop = value;
}

void TimerLoop::setDurationLoopInterval(float value)
{
    intervalDuration = value;
}

void TimerLoop::startLoop()
{
    if(intervalDuration == 0){
        intervalDuration = 200;
    }
    timer->start(400);

    emit signalStart();

    actorsistem.startActors();

}

void TimerLoop::stopLoop()
{
    lastLapse = 0;
    timer->stop();
}

void TimerLoop::pauseLoop()
{
    timer->stop();
}

void TimerLoop::restartLoop()
{
    timer->stop();
    lastLapse = 0;
    timer->start();
}

void TimerLoop::update()
{
    lastLapse++;

    actorsistem.updateActors();

    qDebug() << "Lapso: " << lastLapse << " intervalos ";
}
