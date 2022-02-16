#include "viewactions.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QStringListModel>
#include <QScrollArea>
#include "actionitem.h"
#include "QListView"
#include "listactionsmodel.h"
#include <QScrollBar>
ViewActions::ViewActions(QWidget *parent) : QWidget(parent)
{

    QVBoxLayout * mainBox = new QVBoxLayout;
    btnNewAction = new QPushButton(tr("Añadir nueva accion"));
    btnNewAction->setProperty("class","normal");

    setContentsMargins(0,0,0,0);

    mainBox->setContentsMargins(0,0,0,0);
    // header
    QWidget *titleContainer = new QWidget(this);
    QHBoxLayout *titleLayout = new QHBoxLayout;
    titleLayout->setContentsMargins(20,0,0,0);
    titleContainer->setLayout(titleLayout);
    QLabel *title = new QLabel(tr("Programador de acciones"), titleContainer);
    titleLayout->addWidget(title);
    titleContainer->setProperty("class","header");
    ///

    ListActionsModel *model = new ListActionsModel();

    QScrollArea * scrooll = new QScrollArea;

    QWidget * list = new QWidget;
    list->setProperty("class", "actionsList");
    containerList = new QVBoxLayout;
    list->setLayout(containerList);




    scrooll->setWidget(list);
    scrooll->setWidgetResizable(true);


    containerList->addStretch(1);

    mainBox->addWidget(titleContainer);
    mainBox->addWidget(btnNewAction);
    mainBox->addWidget(scrooll);
    mainBox->setSpacing(0);



    setLayout(mainBox);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect(btnNewAction, &QPushButton::clicked, this, &ViewActions::createNewAction);
}

void ViewActions::isSelectedActor(bool isselected)
{
    if(isselected){
        btnNewAction->setEnabled(true);

    } else {

        btnNewAction->setEnabled(false);
    }


}

void ViewActions::createNewAction()
{
    actiondialog = new CreateActionDialog(this);
    actiondialog->show();
    connect(actiondialog, &CreateActionDialog::createdAction, this, &ViewActions::AddNewAction);

}

void ViewActions::AddNewAction(int unidadCondition, int unidadTo, float valueCondition, float valueTo)
{

    ActionItem * action = new ActionItem;
    action->setValueCondition(valueCondition);
    action->setValueTo(valueTo);
    action->setUnitCond(unidadCondition);
    action->setUnitTo(unidadTo);
    action->setName(selectedActor->getName());
    action->setActor(selectedActor);

    emit addedNewAction(action);

    containerList->insertWidget(0,action);



}

QVBoxLayout *ViewActions::getContainerList() const
{
    return containerList;
}

void ViewActions::setSelectedActor(Actor *newSelectedActor)
{
    selectedActor = newSelectedActor;
}

