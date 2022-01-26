#ifndef ACTOR_H
#define ACTOR_H

#include <QObject>
#include <QDebug>

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

};

#endif // ACTOR_H
