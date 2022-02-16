#include "timerloop.h"
#include <string>

TimerLoop::TimerLoop(ActorSystem& m_actorsystem, ActionsSystem& m_actions, QObject *parent) : QObject(parent)
  , actorsistem(m_actorsystem)
  , actionsSystem(m_actions)
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
    intervalDuration = (&text)->toFloat();
}

float TimerLoop::getInit() const
{
    return initTimeLoop;
}

void TimerLoop::setInit(const QString &text)
{

    initTimeLoop = (&text)->toFloat();
}

void TimerLoop::setDurationLoop(const QString &text)
{

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
    timer->start(16);

    actorsistem.startActors();
    emit signalStart();

    qDebug() << "TimerLoop: startLoop";

}

void TimerLoop::stopLoop()
{
    qDebug() << "TimerLoop: stopLoop";
    lastLapse = 0;
    timer->stop();
    actorsistem.updateActors(0);
    actionsSystem.executeAction(0);
    emit timeChange(0);
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
    qDebug() << "TimerLoop: update";
    lastLapse++;

    if(loopEnable){
        if((lastLapse*30)/1000 > intervalDuration){
            lastLapse = initTimeLoop;
        }

    }
    actorsistem.updateActors((lastLapse*30)/1000);
    actionsSystem.executeAction((lastLapse*30)/1000);
    emit timeChange((lastLapse*30)/1000);

}

void TimerLoop::setTimeNow(float time)
{
    lastLapse = (100*time)/3;
    emit timeChange(time);
}
