#ifndef CREATEACTIONDINAMICDIALOG_H
#define CREATEACTIONDINAMICDIALOG_H

#include <QObject>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QComboBox>
#include <QGridLayout>
#include <QPushButton>
#include "actionitem.h"

class CreateActionDinamicDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CreateActionDinamicDialog(QWidget *parent = nullptr);

signals:
    void createdAction(int unidadCondition,float time, float unidadTo, float valueCondition, float valueTo, bool isDinamic);
private:

    QLineEdit* valueCondition;
    QLineEdit* valueToX;
    QLineEdit* valueToY;
    QLineEdit* valueTo;
    QComboBox* variableComdition;
    QComboBox* variableTo;
    QLabel *txt3;
    QLabel *txt4;
    QLabel *txt5;
 private slots:
    void createdActionSlot();
    void cancelAction();
    void updateGui(int index);
};

#endif // CREATEACTIONDINAMICDIALOG_H
