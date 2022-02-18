#include "createactiondinamicdialog.h"

CreateActionDinamicDialog::CreateActionDinamicDialog(QWidget *parent) : QDialog(parent)
{
    QGridLayout* grid = new QGridLayout;
    QVBoxLayout * vbox = new QVBoxLayout;


    QWidget *titleContainer = new QWidget(this);


    titleContainer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    QHBoxLayout *titleLayout = new QHBoxLayout;
    titleLayout->setContentsMargins(20,0,0,0);
    titleContainer->setLayout(titleLayout);
    QLabel *title = new QLabel(tr("Crear nueva accion"), titleContainer);
    titleLayout->addWidget(title);
    titleContainer->setProperty("class","header");


    QLabel *txt1 = new QLabel(tr("Cuando el tiempo sea"), titleContainer);

    txt3 = new QLabel(tr("Newtons X:"), titleContainer);
    txt4 = new QLabel(tr("Newtons Y:"), titleContainer);
    txt5 = new QLabel(tr("Newtons:"), titleContainer);

    txt3->setAlignment(Qt::AlignRight);
    txt4->setAlignment(Qt::AlignRight);
    txt5->setAlignment(Qt::AlignRight);
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


    valueCondition->setFixedWidth(60);
    valueToX->setFixedWidth(60);
    valueToY->setFixedWidth(60);
    valueTo->setFixedWidth(60);

    valueCondition->setValidator(new QDoubleValidator);
    valueToX->setValidator(new QDoubleValidator);
    valueToY->setValidator(new QDoubleValidator);
    valueTo->setValidator(new QDoubleValidator);

    valueToX->setText("0");
    valueToY->setText("0");
    valueTo->setText("0");
    variableTo = new QComboBox;
    variableTo->addItem(tr("añadir fuerza"));
    variableTo->addItem(tr("Añadir torque"));


    grid->addWidget(txt1, 0,0,1,3);
    grid->addWidget(valueCondition, 0,3);

    grid->addWidget(variableTo, 1,0,1,4);
    grid->addWidget(txt3, 2,0);
    grid->addWidget(valueToX, 2,1);
    grid->addWidget(txt4, 2,2);
    grid->addWidget(valueToY, 2,3);

    grid->addWidget(txt5, 3,0);
    grid->addWidget(valueTo, 3,1);

    grid->addWidget(crearAction, 4,0,1,4);


    grid->setContentsMargins(8,8,8,8);

    vbox->setContentsMargins(0,0,0,0);
    vbox->addWidget(titleContainer);
    vbox->addLayout(grid);
    vbox->addStretch(1);
    setLayout(vbox);

    connect(variableTo, &QComboBox::currentIndexChanged, this, &CreateActionDinamicDialog::updateGui);
    connect(crearAction, &QPushButton::clicked, this, &CreateActionDinamicDialog::createdActionSlot);
    valueToX->setVisible(true);
    valueToY->setVisible(true);
    txt3->setVisible(true);
    txt4->setVisible(true);
    valueTo->setVisible(false);
    txt5->setVisible(false);

}

void CreateActionDinamicDialog::cancelAction()
{
    close();

}

void CreateActionDinamicDialog::updateGui(int index)
{
    if(index == 0){
        valueToX->setVisible(true);
        valueToY->setVisible(true);
        txt3->setVisible(true);
        txt4->setVisible(true);
        valueTo->setVisible(false);
        txt5->setVisible(false);
    } else {
        valueToX->setVisible(false);
        valueToY->setVisible(false);
        txt3->setVisible(false);
        txt4->setVisible(false);
        valueTo->setVisible(true);
        txt5->setVisible(true);

    }

}

void CreateActionDinamicDialog::createdActionSlot()
{

    emit createdAction(
                variableTo->currentIndex(),
                valueCondition->text().toFloat(),
                valueToX->text().toFloat(),
                valueToY->text().toFloat(),
                valueTo->text().toFloat(), true);
    close();

}
