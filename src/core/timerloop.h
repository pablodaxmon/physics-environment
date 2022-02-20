#ifndef TIMERLOOP_H
#define TIMERLOOP_H

#include <QObject>
#include <QTimer>
#include <QDebug>
#include "src/core/actorsystem.h"
#include "actionssystem.h"

class TimerLoop : public QObject
{
    Q_OBJECT
public:
    explicit TimerLoop(ActorSystem& m_actorsystem,ActionsSystem& m_actions, QObject *parent = nullptr);

    bool getLoopEnable() const;

    int getIntervalDuration() const;

    float getInit() const;


signals:
    void signalUpdate();
    void signalStart();
    void timeChange(float time);


private:
    QTimer *timer = new QTimer(this);
    bool loopEnable;
    int intervalDuration;
    float initTimeLoop;
    float durationLoop;
    float lastLapse;
    bool stopActive;
    int frameDuration;

public slots:
    void setFrameDuration(int newFrameDuration);
    void update();

    void setTimeNow(float time);
    void startLoop();
    void stopLoop();
    void pauseLoop();
    void toStartLoop();
    void toEndLoop();

    void setLoopEnable(bool newLoopEnable);
    void setIntervalDuration(const QString &text);
    void setInit(const QString &text);
    void setDurationLoop(const QString &text);

protected:
    ActorSystem& actorsistem;
    ActionsSystem& actionsSystem;

};

#endif // TIMERLOOP_H
