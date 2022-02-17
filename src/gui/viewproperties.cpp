#include "viewproperties.h"


#include <QTabWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QFormLayout>
#include <QSpacerItem>
#include <QHeaderView>
#include <QComboBox>
ViewProperties::ViewProperties(QWidget *parent) : QWidget(parent)
{
    setContentsMargins(0,0,0,0);
    QVBoxLayout * mainLayout = new QVBoxLayout;

    QWidget *spacer = new QWidget;
    spacer->setFixedSize(7,15);


    QGridLayout *gridMain = new QGridLayout;
    gridMain->setContentsMargins(20,10,10,20);
    mainLayout->setContentsMargins(0,0,0,0);

    QWidget *titleContainer = new QWidget(this);
    QHBoxLayout *titleLayout = new QHBoxLayout;
    titleLayout->setContentsMargins(20,0,0,0);
    titleContainer->setLayout(titleLayout);


    valoresSelectedActor = nullptr;



    QLabel *title = new QLabel(tr("Propiedades"), titleContainer);
    titleLayout->addWidget(title);

    titleContainer->setProperty("class","header");

    QLabel *posxT = new QLabel(tr("Posición X"), this);
    QLabel *posyT = new QLabel(tr("Y"), this);
    QLabel *masT = new QLabel(tr("Masa"), this);
    QLabel *velxT = new QLabel(tr("Velocidad X"), this);
    QLabel *velyT = new QLabel(tr("Velocidad Y"), this);
    QLabel *velT = new QLabel(tr(" Velocidad"), this);
    QLabel *acexT = new QLabel(tr("Aceleración X"), this);
    QLabel *aceyT = new QLabel(tr("Aceleración Y"), this);
    QLabel *aceT = new QLabel(tr(" Aceleración"), this);


    posxT->setAlignment(Qt::AlignRight);
    posyT->setAlignment(Qt::AlignRight);
    masT->setAlignment(Qt::AlignRight);
    velxT->setAlignment(Qt::AlignRight);
    velyT->setAlignment(Qt::AlignRight);
    velT->setAlignment(Qt::AlignRight);
    acexT->setAlignment(Qt::AlignRight);
    aceyT->setAlignment(Qt::AlignRight);
    aceT->setAlignment(Qt::AlignRight);


    posxE = new QLineEdit;
    posyE = new QLineEdit;
    masE = new QLineEdit;
    velxE = new QLineEdit;
    velyE = new QLineEdit;
    velE = new QLineEdit;
    acexE = new QLineEdit;
    aceyE = new QLineEdit;
    aceE = new QLineEdit;

    posxE->setValidator(new QDoubleValidator);
    posyE->setValidator(new QDoubleValidator);
    velxE->setReadOnly(true);
    velyE->setReadOnly(true);
    velE->setReadOnly(true);
    acexE->setReadOnly(true);
    aceyE->setReadOnly(true);
    aceE->setReadOnly(true);


    posxE->setAlignment(Qt::AlignCenter);
    posyE->setAlignment(Qt::AlignCenter);
    masE->setAlignment(Qt::AlignCenter);
    velxE->setAlignment(Qt::AlignCenter);
    velyE->setAlignment(Qt::AlignCenter);
    velE->setAlignment(Qt::AlignCenter);
    acexE->setAlignment(Qt::AlignCenter);
    aceyE->setAlignment(Qt::AlignCenter);
    aceE->setAlignment(Qt::AlignCenter);

    velxE->setProperty("class","noeditable");
    velyE->setProperty("class","noeditable");
    velE->setProperty("class","noeditable");
    acexE->setProperty("class","noeditable");
    aceyE->setProperty("class","noeditable");
    aceE->setProperty("class","noeditable");

    QPushButton * posxB = new QPushButton;
    QPushButton * posyB = new QPushButton;
    QPushButton * velxB = new QPushButton;
    QPushButton * velyB = new QPushButton;
    QPushButton * acexB = new QPushButton;
    QPushButton * aceyB = new QPushButton;

    posxB->setIcon(QIcon(":/icons/resources/icons16/tablero.png"));
    posyB->setIcon(QIcon(":/icons/resources/icons16/tablero.png"));
    velxB->setIcon(QIcon(":/icons/resources/icons16/tablero.png"));
    velyB->setIcon(QIcon(":/icons/resources/icons16/tablero.png"));
    acexB->setIcon(QIcon(":/icons/resources/icons16/tablero.png"));
    aceyB->setIcon(QIcon(":/icons/resources/icons16/tablero.png"));

    posxB->setProperty("class", "icon");
    posyB->setProperty("class", "icon");
    velxB->setProperty("class", "icon");
    velyB->setProperty("class", "icon");
    acexB->setProperty("class", "icon");
    aceyB->setProperty("class", "icon");



    gridMain->addWidget(posxT, 1,0,1,1);
    gridMain->addWidget(posyT, 2,0,1,1);
    gridMain->addWidget(masT, 4,0);
    gridMain->addWidget(spacer,5,1); /// spacer
    gridMain->addWidget(velxT, 6,0);
    gridMain->addWidget(velyT, 7,0);
    gridMain->addWidget(velT, 8,0);
    gridMain->addWidget(spacer,9,1); /// spacer
    gridMain->addWidget(acexT, 10,0);
    gridMain->addWidget(aceyT, 11,0);
    gridMain->addWidget(aceT, 12,0);
    gridMain->addWidget(spacer,13,1); /// spacer

    gridMain->addWidget(posxE, 1,2);
    gridMain->addWidget(posyE, 2,2);
    gridMain->addWidget(masE, 4,2);
    gridMain->addWidget(velxE, 6,2);
    gridMain->addWidget(velyE, 7,2);
    gridMain->addWidget(velE, 8,2);
    gridMain->addWidget(acexE, 10,2);
    gridMain->addWidget(aceyE, 11,2);
    gridMain->addWidget(aceE, 12,2);

    gridMain->addWidget(posxB, 1,3);
    gridMain->addWidget(posyB, 2,3);
    gridMain->addWidget(velxB, 6,3);
    gridMain->addWidget(velyB, 7,3);
    gridMain->addWidget(acexB, 10,3);
    gridMain->addWidget(aceyB, 11,3);

    gridMain->addWidget(spacer,1,1);




    gridMain->setHorizontalSpacing(0);
    gridMain->setVerticalSpacing(2);

    mainLayout->addWidget(titleContainer);
    mainLayout->addLayout(gridMain);
    setLayout(mainLayout);


    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    posxT->setAlignment(Qt::AlignRight);
    posyT->setAlignment(Qt::AlignRight);
    masT->setAlignment(Qt::AlignRight);
    velxT->setAlignment(Qt::AlignRight);
    velyT->setAlignment(Qt::AlignRight);
    velT->setAlignment(Qt::AlignRight);
    acexT->setAlignment(Qt::AlignRight);
    aceyT->setAlignment(Qt::AlignRight);
    aceT->setAlignment(Qt::AlignRight);
    connect(posxE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(posyE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);

}



void ViewProperties::edicionFinalizada()
{
    if(actorSelected != nullptr){
        actorSelected->setPositionX(posxE->text().toFloat());
        actorSelected->setPositionY(posyE->text().toFloat());
        actorSelected->setMass(masE->text().toFloat());


        emit valuesChanged();
    }

}

void ViewProperties::setValuesFromActor()
{
    if(actorSelected != nullptr){
        posxE->setText(QString::number((actorSelected->getPositionX()),'f',2));
        posyE->setText(QString::number((actorSelected->getPositionY()),'f',2));
        velxE->setText(QString::number((actorSelected->getVelocityX()),'f',2));
        velyE->setText(QString::number((actorSelected->getVelocityY()),'f',2));
        velE->setText(QString::number((actorSelected->getVelocity()),'f',2));
        acexE->setText(QString::number((actorSelected->getAcelerationX()),'f',2));
        aceyE->setText(QString::number((actorSelected->getAcelerationY()),'f',2));
        aceE->setText(QString::number((actorSelected->getAceleration()),'f',2));
        masE->setText(QString::number((actorSelected->getMass()),'f',2));
    }
}

void ViewProperties::setSelectedActor(Actor *newActorSelected)
{
    actorSelected = newActorSelected;

    if(actorSelected != nullptr){
        posxE->setText(QString::number(newActorSelected->getPositionX(),'f',2));
        posyE->setText(QString::number(newActorSelected->getPositionY(),'f',2));
        velxE->setText(QString::number(newActorSelected->getVelocityX(),'f',2));
        velyE->setText(QString::number(newActorSelected->getVelocityY(),'f',2));
        velE->setText(QString::number(newActorSelected->getVelocity(),'f',2));
        acexE->setText(QString::number(newActorSelected->getAcelerationX(),'f',2));
        aceyE->setText(QString::number(newActorSelected->getAcelerationY(),'f',2));
        aceE->setText(QString::number(newActorSelected->getAceleration(),'f',2));
    }

}



