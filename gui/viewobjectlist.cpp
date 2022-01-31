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
    QHBoxLayout *box = new QHBoxLayout(this);
    box->setContentsMargins(0,0,0,0);

    model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels({"Objetos"});



    QTreeView *tree = new QTreeView(this);

    tree->setModel(model);
    tree->show();
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

