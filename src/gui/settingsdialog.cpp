#include "settingsdialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QFormLayout>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>
#include <QApplication>

SettingsDialog::SettingsDialog(QWidget *parent) : QDialog(parent)
{
    QVBoxLayout * mainLaydout = new QVBoxLayout;

    QHBoxLayout * frameLay = new QHBoxLayout;
    QLabel * txtFram = new QLabel(tr("Cuadros por segundo:"));
    leFram = new QLineEdit;

    leFram->setValidator(new QIntValidator(9,201,this));
    leFram->setAlignment(Qt::AlignRight);
    leFram->setFixedWidth(60);
    leFram->setText("100");



    txtFram2 = new QLabel(tr("actualizar cada 10ms (min10 max200)"));


    frameLay->addWidget(txtFram);
    frameLay->addWidget(leFram);
    frameLay->addWidget(txtFram2);




    QGridLayout * grid = new QGridLayout;

    QLabel * txtFramGraphics = new QLabel(tr("Actualizar plot cada:"));
    QLabel * txtFramGraphics2 = new QLabel(tr("frames (min1 max30)"));
    leFramGraphics = new QLineEdit;

    leFramGraphics->setValidator(new QIntValidator(10,30,this));
    leFramGraphics->setAlignment(Qt::AlignRight);
    leFramGraphics->setFixedWidth(60);
    leFramGraphics->setText("4");

    QLabel * gravity = new QLabel(tr("Valor de la gravedad:"));
    QLabel * gravity2 = new QLabel(tr("m/s^2"));
    legravity = new QLineEdit;

    legravity->setValidator(new QDoubleValidator(this));
    legravity->setAlignment(Qt::AlignRight);
    legravity->setFixedWidth(60);
    legravity->setText("9.8");

    QCheckBox * antialiasing = new QCheckBox(tr(" antialisasing:"));
    antialiasing->setChecked(true);


    QLabel * stopForces = new QLabel(tr("Detener fuerzas cada :"));
    QLabel * stopForces2 = new QLabel(tr("frames (min1 max200)"));
    lestopForces = new QLineEdit;

    lestopForces->setValidator(new QIntValidator(1,200,this));
    lestopForces->setAlignment(Qt::AlignRight);
    lestopForces->setFixedWidth(60);
    lestopForces->setText("10");

    grid->addWidget(txtFramGraphics,0,0);
    grid->addWidget(leFramGraphics,0,1);
    grid->addWidget(txtFramGraphics2,0,2);


    grid->addWidget(gravity,1,0);
    grid->addWidget(legravity,1,1);
    grid->addWidget(gravity2,1,2);



    grid->addWidget(antialiasing,2,0,1,2);


    grid->addWidget(stopForces,3,0);
    grid->addWidget(lestopForces,3,1);
    grid->addWidget(stopForces2,3,2);


    mainLaydout->addLayout(frameLay);
    mainLaydout->addLayout(grid);
    setLayout(mainLaydout);

    connect(leFram, &QLineEdit::editingFinished, this, &SettingsDialog::frameRateSlot);
    connect(leFram, &QLineEdit::textEdited, this, &SettingsDialog::frameRateTextSlot);

    connect(leFramGraphics, &QLineEdit::editingFinished, this, &SettingsDialog::plotRateSlot);
    connect(legravity, &QLineEdit::editingFinished, this, &SettingsDialog::gravitySlot);
    connect(lestopForces, &QLineEdit::editingFinished, this, &SettingsDialog::stopForcesSlot);

    connect(antialiasing, &QCheckBox::stateChanged, this, &SettingsDialog::antialiasingChanged);



}

void SettingsDialog::frameRateSlot()
{
    qDebug() << "aloeveras";
    emit frameRateChanged(leFram->text().toInt());
}

void SettingsDialog::frameRateTextSlot(const QString &text)
{
    float val = text.toFloat();
    val = round(1000/val);
    txtFram2->setText(tr("actualizar cada ") + QString::number(val) + tr("ms"));
}

void SettingsDialog::plotRateSlot()
{
    emit plotframeRateChanged(leFramGraphics->text().toInt());
}

void SettingsDialog::gravitySlot()
{
    emit gravityChanged(legravity->text().toInt());
}

void SettingsDialog::stopForcesSlot()
{
    emit stopForcesChanged(lestopForces->text().toInt());
}


