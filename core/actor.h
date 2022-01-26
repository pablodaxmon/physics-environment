#ifndef ACTOR_H
#define ACTOR_H

#include <QObject>
#include <QDebug>
#include <QVector2D>

class Actor : public QObject
{
    Q_OBJECT

public:
    explicit Actor(const char *nameActor, QObject *parent = nullptr);
    QString getTag();
    void setTag(QString t);

    int getIndexInList();
    void setIndexInList(int newIndexInList);

    QString &getName();
    void setName(char * newName);

public slots:

    virtual void StartFrame();
    virtual void UpdateFrame();
    virtual void LastUpdateFrame();

private:
    QString tag;
    int indexInList = 0;
    QString name;
    QVector2D position;
    QVector2D speed;
    float rotation;
    float temperature;



};

#endif // ACTOR_H
