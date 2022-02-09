#include "viewobjectlist.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QFileSystemModel>
#include <QTreeView>
#include <QStandardItem>
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
    QLabel *title = new QLabel(tr("Programador de acciones"), titleContainer);
    titleLayout->addWidget(title);
    titleContainer->setProperty("class","header");

    model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels({"Objetos"});



    QTreeView *tree = new QTreeView(this);

    tree->setModel(model);
    tree->show();
    box->setSpacing(0);
    box->addWidget(titleContainer);
    box->addWidget(tree);

    connect(tree, &QTreeView::clicked, this, &selectItem);

}

void ViewObjectList::addItemToList(const QString name, const int index)
{
    QStandardItem *item = new QStandardItem;
    item->setText(name);
    item->setSelectable(true);
    item->setEditable(true);
    model->appendRow(item);
    item->setData(QVariant(index), Qt::DisplayRole);
    model->setData(model->indexFromItem(item), QVariant(index), Qt::ToolTipRole);
    model->setData(model->indexFromItem(item), name, Qt::DisplayRole);
}

void ViewObjectList::removeItemToList(const QString name)
{

}

