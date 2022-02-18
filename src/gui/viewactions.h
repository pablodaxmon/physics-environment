#ifndef VIEWACTIONS_H
#define VIEWACTIONS_H

#include <QWidget>
#include <QPushButton>
#include "src/core/actionssystem.h"
#include "createactiondialog.h"
#include "createactiondinamicdialog.h"
class ViewActions : public QWidget
{
    Q_OBJECT
public:
    explicit ViewActions(QWidget *parent = nullptr);

    void setSelectedActor(Actor *newSelectedActor);

    QVBoxLayout *getContainerList() const;

    void setIsBoxtype(bool newIsBoxtype);

signals:
    void addedNewAction(ActionItem* action);
    void actionsChanged(ActionItem* action);
public slots:
    void isSelectedActor(bool isselected);
    void createNewAction();
    void debugSlots();
    void AddNewAction(int unidadCondition,float time, float unidadTo, float valueCondition, float valueTo, bool isDinamic);
private:
    QPushButton * btnNewAction;
    CreateActionDialog* actiondialog = nullptr;
    CreateActionDinamicDialog* actionDinamicdialog = nullptr;
    QVBoxLayout * containerList;
    Actor* selectedActor;
    bool isBoxtype;
};

#endif // VIEWACTIONS_H
