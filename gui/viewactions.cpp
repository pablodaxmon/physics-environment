#include "viewactions.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QScrollArea>
#include "actionitem.h"

ViewActions::ViewActions(QWidget *parent) : QWidget(parent)
{

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QHBoxLayout *mainBox = new QHBoxLayout(this);
    mainBox->setContentsMargins(2,0,3,0);


    ActionItem *itemact = new ActionItem(this);
    mainBox->addWidget(itemact);
}

