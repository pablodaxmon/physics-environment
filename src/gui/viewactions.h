#ifndef VIEWACTIONS_H
#define VIEWACTIONS_H

#include <QWidget>
#include <QPushButton>
#include "src/core/actionssystem.h"
#include "createactiondialog.h"
class ViewActions : public QWidget
{
    Q_OBJECT
public:
    explicit ViewActions(QWidget *parent = nullptr);

    void setSelectedActor(Actor *newSelectedActor);

signals:
    void addedNewAction(ActionItem* action);
    void actionsChanged(ActionItem* action);
public slots:
    void isSelectedActor(bool isselected);
    void createNewAction();
    void AddNewAction(int unidadCondition, int unidadTo, float valueCondition, float valueTo);
private:
    QPushButton * btnNewAction;
    CreateActionDialog* actiondialog;
    QVBoxLayout * containerList;
    Actor* selectedActor;
};

#endif // VIEWACTIONS_H
