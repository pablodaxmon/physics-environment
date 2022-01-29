#include "viewproperties.h"


#include <QTabWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QFormLayout>
ViewProperties::ViewProperties(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainBox = new QVBoxLayout(this);
    QTabWidget *tab = new QTabWidget(this);

    QWidget *propiedades = new QWidget(this);

    QWidget *optionsEnv = new QWidget(this);

    tab->addTab(propiedades, "Objetos");
    tab->addTab(optionsEnv, "Entorno");

    QVBoxLayout *verticalLayout = new QVBoxLayout(optionsEnv);
    QLineEdit *gravity = new QLineEdit(optionsEnv);
    QLineEdit *soundSpeed = new QLineEdit(optionsEnv);
    QLineEdit *temperature = new QLineEdit(optionsEnv);


    QFormLayout *layoutOptions = new QFormLayout(optionsEnv);
    layoutOptions->addRow(tr("&Gravity"), gravity);
    layoutOptions->addRow(tr("&Gravity"), soundSpeed);
    layoutOptions->addRow(tr("&Gravity"), temperature);
    verticalLayout->addLayout(layoutOptions);

    setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
    mainBox->addWidget(tab);
    setContentsMargins(0,0,0,0);
    mainBox->setContentsMargins(0,0,0,0);

}
