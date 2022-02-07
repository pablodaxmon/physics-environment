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

    ActionItem * item1 = new ActionItem(Unit::Aceleracion, "holasoygerman");
    ActionItem * item2 = new ActionItem(Unit::Aceleracion, "holasoygerman");;
    ActionItem * item3 = new ActionItem(Unit::Aceleracion, "holasoygerman");;
    ActionItem * item4 = new ActionItem(Unit::Aceleracion, "holasoygerman");;

    containerList->addWidget(item1);
    containerList->addWidget(item2);
    containerList->addWidget(item3);
    containerList->addWidget(item4);


    scrooll->setWidget(list);




    setLayout(mainBox);
    mainBox->addWidget(titleContainer);
    mainBox->addWidget(scrooll);
    mainBox->setSpacing(0);




}

