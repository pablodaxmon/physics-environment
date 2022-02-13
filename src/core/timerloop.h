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

    bool getLoopEnable() const;

    int getIntervalDuration() const;

    float getInit() const;

signals:
    void signalUpdate();
    void signalStart();


private:
    QTimer *timer = new QTimer(this);
    bool loopEnable;
    int intervalDuration;
    float init;
    float durationLoop;
    int lastLapse;

public slots:
    void update();

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

};

#endif // TIMERLOOP_H
