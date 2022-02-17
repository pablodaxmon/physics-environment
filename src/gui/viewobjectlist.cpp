#include "viewobjectlist.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QVariant>

ViewObjectList::ViewObjectList(QWidget *parent) : QWidget(parent)
{

    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    setContentsMargins(0,0,0,0);


    QVBoxLayout *box = new QVBoxLayout(this);
    box->setContentsMargins(0,0,0,0);


    QWidget *titleContainer = new QWidget(this);
    QHBoxLayout *titleLayout = new QHBoxLayout;
    titleLayout->setContentsMargins(20,0,0,0);
    titleContainer->setLayout(titleLayout);
    QLabel *title = new QLabel(tr("Objetos"), titleContainer);
    titleLayout->addWidget(title);
    titleContainer->setProperty("class","header");

    list = new QListView;


    box->addWidget(titleContainer);

    box->addWidget(list);
    box->setSpacing(0);
}

void ViewObjectList::addItemToList(QList<Actor *> *actor)
{

}

void ViewObjectList::removeItemToList(const QString name)
{

}

void ViewObjectList::setModel(QStringListModel *newModel)
{
    model = newModel;
    list->setModel(model);
    list->show();
    connect(list, &QAbstractItemView::clicked,this, &ViewObjectList::setSelectedItem);
}

void ViewObjectList::setSelectedActor(Actor *newSelectedActor)
{
    selectedActor = newSelectedActor;
}

