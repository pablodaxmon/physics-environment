#include "createactiondialog.h"

CreateActionDialog::CreateActionDialog(QWidget *parent) : QDialog(parent)
{
    QGridLayout* grid = new QGridLayout;
    QVBoxLayout * vbox = new QVBoxLayout;

    QWidget *titleContainer = new QWidget(this);

    QHBoxLayout *titleLayout = new QHBoxLayout;
    titleLayout->setContentsMargins(20,0,0,0);
    titleContainer->setLayout(titleLayout);
    QLabel *title = new QLabel(tr("Crear nueva accion"), titleContainer);
    titleLayout->addWidget(title);
    titleContainer->setProperty("class","header");


    QLabel *txt1 = new QLabel(tr("La variable"), titleContainer);

    QLabel *txt2 = new QLabel(tr("será"), titleContainer);

    QLabel *txt3 = new QLabel(tr("Cuando"), titleContainer);

    QLabel *txt4 = new QLabel(tr("sea"), titleContainer);

    QPushButton * crearAction = new QPushButton(tr("Create Action"));
    crearAction->setProperty("class","normal");

    valueCondition = new QLineEdit;
    valueCondition->setText(tr("0"));
    valueTo = new QLineEdit;
    valueTo->setText(tr("0"));

    valueCondition->setValidator(new QDoubleValidator);
    valueTo->setValidator(new QDoubleValidator);

    variableComdition = new QComboBox;
    variableComdition->addItem(tr("Tiempo"));
    variableComdition->addItem(tr("Posición X"));
    variableComdition->addItem(tr("Posición Y"));
    variableComdition->addItem(tr("Velocidad"));
    variableComdition->addItem(tr("Velocidad X"));
    variableComdition->addItem(tr("Velocidad Y"));
    variableComdition->addItem(tr("Aceleración"));
    variableComdition->addItem(tr("Aceleración X"));
    variableComdition->addItem(tr("Aceleración Y"));

    variableTo = new QComboBox;
    variableTo->addItem(tr("Posición X"));
    variableTo->addItem(tr("Posición Y"));
    variableTo->addItem(tr("Velocidad"));
    variableTo->addItem(tr("Velocidad X"));
    variableTo->addItem(tr("Velocidad Y"));
    variableTo->addItem(tr("Aceleración"));
    variableTo->addItem(tr("Aceleración X"));
    variableTo->addItem(tr("Aceleración Y"));

    grid->addWidget(txt1, 0,0);
    grid->addWidget(variableTo, 1,0);
    grid->addWidget(txt2, 1,1);
    grid->addWidget(valueTo, 1,2);

    grid->addWidget(txt3, 2,0);

    grid->addWidget(variableComdition, 3,0);
    grid->addWidget(txt4, 3,1);
    grid->addWidget(valueCondition, 3,2);
    grid->addWidget(crearAction, 4,0,1,3);


    grid->setContentsMargins(8,8,8,8);
    vbox->setContentsMargins(0,0,0,0);
    vbox->addWidget(titleContainer);
    vbox->addLayout(grid);
    setLayout(vbox);

    connect(crearAction, &QPushButton::clicked, this, &CreateActionDialog::createdActionSlot);
    connect(crearAction, &QPushButton::clicked, this, &CreateActionDialog::cancelAction);
}

void CreateActionDialog::cancelAction()
{
    close();

}

void CreateActionDialog::createdActionSlot()
{

    emit createdAction(
                variableComdition->currentIndex(),0,
                variableTo->currentIndex(),
                valueCondition->text().toFloat(),
                valueTo->text().toFloat(), false);
    close();

}
