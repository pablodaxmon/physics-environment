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
    gridMain->setContentsMargins(20,0,10,0);
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
    QLabel *rotT = new QLabel(tr("Rotación"), this);
    QLabel *masT = new QLabel(tr("Masa"), this);
    QLabel *velxT = new QLabel(tr("Velocidad X"), this);
    QLabel *velyT = new QLabel(tr("Velocidad Y"), this);
    QLabel *velT = new QLabel(tr(" Velocidad"), this);
    QLabel *acexT = new QLabel(tr("Aceleración X"), this);
    QLabel *aceyT = new QLabel(tr("Aceleración Y"), this);
    QLabel *aceT = new QLabel(tr(" Aceleración"), this);
    QLabel *disT = new QLabel(tr("Distancia a"), this);


    posxT->setAlignment(Qt::AlignRight);
    posyT->setAlignment(Qt::AlignRight);
    rotT->setAlignment(Qt::AlignRight);
    masT->setAlignment(Qt::AlignRight);
    velxT->setAlignment(Qt::AlignRight);
    velyT->setAlignment(Qt::AlignRight);
    velT->setAlignment(Qt::AlignRight);
    acexT->setAlignment(Qt::AlignRight);
    aceyT->setAlignment(Qt::AlignRight);
    aceT->setAlignment(Qt::AlignRight);
    disT->setAlignment(Qt::AlignRight);


    posxE = new QLineEdit;
    posyE = new QLineEdit;
    rotE = new QLineEdit;
    masE = new QLineEdit;
    velxE = new QLineEdit;
    velyE = new QLineEdit;
    velE = new QLineEdit;
    acexE = new QLineEdit;
    aceyE = new QLineEdit;
    aceE = new QLineEdit;
    disE = new QLineEdit;


    posxE->setAlignment(Qt::AlignCenter);
    posyE->setAlignment(Qt::AlignCenter);
    rotE->setAlignment(Qt::AlignCenter);
    masE->setAlignment(Qt::AlignCenter);
    velxE->setAlignment(Qt::AlignCenter);
    velyE->setAlignment(Qt::AlignCenter);
    velE->setAlignment(Qt::AlignCenter);
    acexE->setAlignment(Qt::AlignCenter);
    aceyE->setAlignment(Qt::AlignCenter);
    aceE->setAlignment(Qt::AlignCenter);
    disE->setAlignment(Qt::AlignCenter);

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

    /*posxB->setFixedSize(35,22);
    posyB->setFixedSize(35,22);
    velxB->setFixedSize(35,22);
    velyB->setFixedSize(35,22);
    acexB->setFixedSize(35,22);
    aceyB->setFixedSize(35,22);*/

    /*posxB->setIcon(QIcon(":/icons/resources/icons16/book.png"));
    posyB->setIcon(QIcon(":/icons/resources/icons16/book.png"));
    velxB->setIcon(QIcon(":/icons/resources/icons16/book.png"));
    velyB->setIcon(QIcon(":/icons/resources/icons16/book.png"));
    acexB->setIcon(QIcon(":/icons/resources/icons16/book.png"));
    aceyB->setIcon(QIcon(":/icons/resources/icons16/book.png"));*/



    gridMain->addWidget(posxT, 1,0,1,1);
    gridMain->addWidget(posyT, 2,0,1,1);
    gridMain->addWidget(rotT, 3,0,1,1);
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
    gridMain->addWidget(disT, 14,0);

    gridMain->addWidget(posxE, 1,2);
    gridMain->addWidget(posyE, 2,2);
    gridMain->addWidget(rotE, 3,2);
    gridMain->addWidget(masE, 4,2);
    gridMain->addWidget(velxE, 6,2);
    gridMain->addWidget(velyE, 7,2);
    gridMain->addWidget(velE, 8,2);
    gridMain->addWidget(acexE, 10,2);
    gridMain->addWidget(aceyE, 11,2);
    gridMain->addWidget(aceE, 12,2);
    gridMain->addWidget(disE, 14,2);

    gridMain->addWidget(posxB, 1,3);
    gridMain->addWidget(posyB, 2,3);
    gridMain->addWidget(velxB, 6,3);
    gridMain->addWidget(velyB, 7,3);
    gridMain->addWidget(acexB, 10,3);
    gridMain->addWidget(aceyB, 11,3);

    gridMain->addWidget(spacer,1,1);




    gridMain->setHorizontalSpacing(0);
    gridMain->setVerticalSpacing(0);

    mainLayout->addWidget(titleContainer);
    mainLayout->addLayout(gridMain);
    setLayout(mainLayout);


    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    posxT->setAlignment(Qt::AlignRight);
    posyT->setAlignment(Qt::AlignRight);
    rotT->setAlignment(Qt::AlignRight);
    masT->setAlignment(Qt::AlignRight);
    velxT->setAlignment(Qt::AlignRight);
    velyT->setAlignment(Qt::AlignRight);
    velT->setAlignment(Qt::AlignRight);
    acexT->setAlignment(Qt::AlignRight);
    aceyT->setAlignment(Qt::AlignRight);
    aceT->setAlignment(Qt::AlignRight);
    disT->setAlignment(Qt::AlignRight);
    connect(posxE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(posyE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(velE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(velxE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(velyE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(aceE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(acexE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);
    connect(aceyE, &QLineEdit::editingFinished, this, &ViewProperties::edicionFinalizada);

}

void ViewProperties::setValuesNull()
{
    valoresSelectedActor = nullptr;
}

void ViewProperties::edicionFinalizada()
{
    if(valoresSelectedActor != nullptr){
        valoresSelectedActor->insert(Unit::PosicionX, posxE->text().toFloat());
        valoresSelectedActor->insert(Unit::PosicionY, posyE->text().toFloat());
        valoresSelectedActor->insert(Unit::Velocidad, velE->text().toFloat());
        valoresSelectedActor->insert(Unit::VelocidadX, velxE->text().toFloat());
        valoresSelectedActor->insert(Unit::VelocidadY, velyE->text().toFloat());
        valoresSelectedActor->insert(Unit::Aceleracion, aceE->text().toFloat());
        valoresSelectedActor->insert(Unit::AceleracionX, acexE->text().toFloat());
        valoresSelectedActor->insert(Unit::AceleracionY, aceyE->text().toFloat());


        emit valuesChanged();
    }

}

void ViewProperties::setValuesFromActor(QMap<Unit, float>* valores)
{
    valoresSelectedActor = valores;
    posxE->setText(QString::number(valoresSelectedActor->value(Unit::PosicionX)));
    posyE->setText(QString::number(valoresSelectedActor->value(Unit::PosicionY)));
    velxE->setText(QString::number(valoresSelectedActor->value(Unit::VelocidadX)));
    velyE->setText(QString::number(valoresSelectedActor->value(Unit::VelocidadY)));
    velE->setText(QString::number(valoresSelectedActor->value(Unit::Velocidad)));
    acexE->setText(QString::number(valoresSelectedActor->value(Unit::AceleracionX)));
    aceyE->setText(QString::number(valoresSelectedActor->value(Unit::AceleracionY)));
    aceE->setText(QString::number(valoresSelectedActor->value(Unit::Aceleracion)));

}



