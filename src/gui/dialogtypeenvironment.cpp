#include "dialogtypeenvironment.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <iostream>

DialogTypeEnvironment::DialogTypeEnvironment(QWidget *parent) : QWidget(parent)
{




    QHBoxLayout * mainContainerH = new QHBoxLayout(this);
    QVBoxLayout * mainContainer = new QVBoxLayout(this);
    mainContainer->setContentsMargins(0,0,0,0);

    QLabel* titulo = new QLabel(this);
    titulo->setText("Elija el entorno de simulacion");

    QPushButton *cinematicaButton = new QPushButton("Cinematica",this);
    QPushButton *dinamicaButton = new QPushButton("Dinamica", this);
    QPushButton *fluidSoundButton = new QPushButton( "Fluid sonido",this);


    mainContainer->addStretch(1);
    mainContainer->addWidget(titulo);
    mainContainer->addWidget(cinematicaButton);
    mainContainer->addWidget(dinamicaButton);
    mainContainer->addWidget(fluidSoundButton);

    mainContainer->addStretch(1);


    mainContainerH->addStretch(3);
    mainContainerH->addLayout(mainContainer, 4);
    mainContainerH->addStretch(3);

    QObject::connect(cinematicaButton, &QPushButton::clicked,this , cinematicOnClick);
    QObject::connect(dinamicaButton, &QPushButton::clicked,this, dinamicOnClick);
    QObject::connect(fluidSoundButton, &QPushButton::clicked,this, fluydOnClick);
}

void DialogTypeEnvironment::cinematicOnClick(){

    emit typeOnClick();
}
void DialogTypeEnvironment::dinamicOnClick(){

    emit typeOnClick();
}
void DialogTypeEnvironment::fluydOnClick(){

    emit typeOnClick();
}
