#include "viewobjectlist.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QFileSystemModel>
#include <QTreeView>
#include <QDir>

ViewObjectList::ViewObjectList(QWidget *parent) : QWidget(parent)
{

    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    setContentsMargins(0,0,0,0);
    QHBoxLayout *box = new QHBoxLayout(this);
    box->setContentsMargins(0,0,0,0);

    QFileSystemModel *model = new QFileSystemModel;

    model->setRootPath(QDir::currentPath());

    QTreeView *tree = new QTreeView(this);
    tree->setModel(model);

    box->addWidget(tree);
}

