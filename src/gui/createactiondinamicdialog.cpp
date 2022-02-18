#include "createactiondinamicdialog.h"

CreateActionDinamicDialog::CreateActionDinamicDialog(QWidget *parent) : QDialog(parent)
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


    QLabel *txt1 = new QLabel(tr("Cuando el tiempo sea"), titleContainer);

    txt3 = new QLabel(tr("X"), titleContainer);
    txt4 = new QLabel(tr("Y"), titleContainer);
    txt5 = new QLabel(tr("Value"), titleContainer);
    valueToX = new QLineEdit;
    valueToY = new QLineEdit;

    QPushButton * crearAction = new QPushButton(tr("Create Action"));
    crearAction->setProperty("class","normal");

    valueCondition = new QLineEdit;
    valueCondition->setText(tr("0"));
    valueToX->setText(tr("0"));
    valueToY->setText(tr("0"));
    valueTo = new QLineEdit;
    valueTo->setText(tr("0"));
    valueTo->setHidden(true);
    txt5->setHidden(true);

    valueCondition->setValidator(new QDoubleValidator);
    valueToX->setValidator(new QDoubleValidator);
    valueToY->setValidator(new QDoubleValidator);
    valueTo->setValidator(new QDoubleValidator);

    variableTo = new QComboBox;
    variableTo->addItem(tr("añadir fuerza"));
    variableTo->addItem(tr("Añadir torque"));


    grid->addWidget(txt1, 0,0);
    grid->addWidget(valueCondition, 0,1);

    grid->addWidget(variableTo, 2,0);
    grid->addWidget(txt3, 3,0);
    grid->addWidget(valueToX, 3,1);
    grid->addWidget(txt4, 3,2);
    grid->addWidget(valueToY, 3,3);

    grid->addWidget(txt5, 4,0);
    grid->addWidget(valueTo, 4,1);

    grid->addWidget(crearAction, 5,0,1,3);


    grid->setContentsMargins(8,8,8,8);
    vbox->setContentsMargins(0,0,0,0);
    vbox->addWidget(titleContainer);
    vbox->addLayout(grid);
    setLayout(vbox);

    connect(variableTo, &QComboBox::currentIndexChanged, this, &CreateActionDinamicDialog::updateGui);
    connect(crearAction, &QPushButton::clicked, this, &CreateActionDinamicDialog::createdActionSlot);
    connect(crearAction, &QPushButton::clicked, this, &CreateActionDinamicDialog::cancelAction);

}

void CreateActionDinamicDialog::cancelAction()
{
    close();

}

void CreateActionDinamicDialog::updateGui(int index)
{
    if(index == 0){
        valueToX->setHidden(false);
        valueToY->setHidden(false);
        txt3->setHidden(false);
        txt4->setHidden(false);
        valueTo->setHidden(true);
        txt5->setHidden(true);
    } else {

        valueToX->setHidden(true);
        valueToY->setHidden(true);
        txt3->setHidden(true);
        txt4->setHidden(true);
        valueTo->setHidden(false);
        txt5->setHidden(false);
    }

}

void CreateActionDinamicDialog::createdActionSlot()
{

    emit createdAction(
                0,
                variableTo->currentIndex(),
                valueCondition->text().toFloat(),
                valueTo->text().toFloat());
    close();

}
