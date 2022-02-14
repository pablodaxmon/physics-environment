#ifndef CREATEACTIONDIALOG_H
#define CREATEACTIONDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QComboBox>
#include <QGridLayout>
#include <QPushButton>
#include "actionitem.h"

class CreateActionDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CreateActionDialog(QWidget *parent = nullptr);

signals:
    void createdAction(int unidadCondition, int unidadTo, float valueCondition, float valueTo);
private:

    QLineEdit* valueCondition;
    QLineEdit* valueTo;
    QComboBox* variableComdition;
    QComboBox* variableTo;
 private slots:
    void createdActionSlot();
    void cancelAction();
};

#endif // CREATEACTIONDIALOG_H
