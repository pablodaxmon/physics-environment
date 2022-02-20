#include "timerloop.h"
#include <string>

TimerLoop::TimerLoop(ActorSystem& m_actorsystem, ActionsSystem& m_actions, QObject *parent) : QObject(parent)
  , actorsistem(m_actorsystem)
  , actionsSystem(m_actions)
{
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    lastLapse = 0;
    frameDuration = 12;
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

void TimerLoop::setFrameDuration(int newFrameDuration)
{
    frameDuration = 1000/newFrameDuration;
    qDebug() << "TimerLoop::setFrameDuration" << frameDuration;
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
    loopEnable = newLoopEnable;
}



void TimerLoop::startLoop()
{
    if(frameDuration < 5){
        frameDuration = 5;
    }

    timer->start(frameDuration);

    actorsistem.startActors();
    emit signalStart();

    stopActive = true;

}

void TimerLoop::stopLoop()
{
    lastLapse = 0;
    timer->stop();
    if(stopActive){

        actorsistem.updateActors(0);
        actorsistem.stopActors();
        actionsSystem.executeActions(0);
    }
    stopActive = false;
}

void TimerLoop::pauseLoop()
{
    timer->stop();
}

void TimerLoop::toStartLoop()
{
    timer->stop();
    lastLapse = 0;
    timer->start();
}



void TimerLoop::toEndLoop()
{

}

void TimerLoop::update()
{
    lastLapse++;

    if(loopEnable){
        if((lastLapse*30)/1000 > intervalDuration){
            //lastLapse = initTimeLoop;
        }

    }

    actorsistem.updateActors((lastLapse*30)/1000);
    actionsSystem.executeActions((lastLapse*30)/1000);

    emit timeChange((lastLapse*30)/1000);

}

void TimerLoop::setTimeNow(float time)
{
    lastLapse = (100*time)/3;
    emit timeChange(time);
}
