#ifndef VIEWOBJECTLIST_H
#define VIEWOBJECTLIST_H

#include <QWidget>
#include <QListView>
#include <QStringListModel>
#include "src/core/actor.h"

class ViewObjectList : public QWidget
{
    Q_OBJECT
public:
    explicit ViewObjectList(QWidget *parent = nullptr);


    void setSelectedActor(Actor *newSelectedActor);

    void setModel(QStringListModel *newModel);

public slots:
    void addItemToList(QList<Actor*> *actor);
    void removeItemToList(const QString name);

signals:
    void selectItem(const QModelIndex &index);
    void setSelectedItem(const QModelIndex &index);
private:
    QListView* list;
    Actor* selectedActor;
    QStringListModel * model;

};

#endif // VIEWOBJECTLIST_H
