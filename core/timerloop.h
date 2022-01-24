#ifndef TIMERLOOP_H
#define TIMERLOOP_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class TimerLoop : public QObject
{
    Q_OBJECT
public:
    explicit TimerLoop(QObject *parent = nullptr);



signals:


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


};

#endif // TIMERLOOP_H
