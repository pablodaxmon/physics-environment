#include "viewactions.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QStringListModel>
#include <QScrollArea>
#include "actionitem.h"
#include "QListView"
#include "listactionsmodel.h"
ViewActions::ViewActions(QWidget *parent) : QWidget(parent)
{

    QVBoxLayout * mainBox = new QVBoxLayout;

    setContentsMargins(0,0,0,0);

    mainBox->setContentsMargins(0,0,0,0);
    // header
    QWidget *titleContainer = new QWidget(this);
    QHBoxLayout *titleLayout = new QHBoxLayout;
    titleContainer->setLayout(titleLayout);
    QLabel *title = new QLabel(tr("Programador de acciones"), titleContainer);
    titleLayout->addWidget(title);
    titleContainer->setProperty("class","header");
    ///

    ListActionsModel *model = new ListActionsModel();

    QScrollArea * scrooll = new QScrollArea;
    QWidget * list = new QWidget(this);
    QVBoxLayout * containerList = new QVBoxLayout;
    list->setLayout(containerList);

    ActionItem * item1 = new ActionItem;
    ActionItem * item2 = new ActionItem;
    ActionItem * item3 = new ActionItem;
    ActionItem * item4 = new ActionItem;
    ActionItem * item5 = new ActionItem;
    ActionItem * item51 = new ActionItem;
    ActionItem * item52 = new ActionItem;
    ActionItem * item53 = new ActionItem;
    ActionItem * item54 = new ActionItem;
    ActionItem * item55 = new ActionItem;
    ActionItem * item56 = new ActionItem;
    ActionItem * item57 = new ActionItem;

    containerList->addWidget(item1);

    containerList->addWidget(item2);
    containerList->addWidget(item3);
    containerList->addWidget(item4);
    containerList->addWidget(item5);
    containerList->addWidget(item51);
    containerList->addWidget(item52);
    containerList->addWidget(item53);
    containerList->addWidget(item54);
    containerList->addWidget(item55);
    containerList->addWidget(item56);
    containerList->addWidget(item57);


    scrooll->setWidget(list);




    setLayout(mainBox);
    mainBox->addWidget(titleContainer);
    mainBox->addWidget(scrooll);
    mainBox->setSpacing(0);




}

