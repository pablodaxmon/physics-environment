#include "viewproperties.h"


#include <QTabWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QFormLayout>
#include <QHeaderView>
ViewProperties::ViewProperties(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainBox = new QVBoxLayout(this);
    QTabWidget *tab = new QTabWidget(this);

    QWidget *propiedades = new QWidget(this);

    QWidget *optionsEnv = new QWidget(this);

    tab->addTab(optionsEnv, "Entorno");
    tab->addTab(propiedades, "Objetos");

    QVBoxLayout *verticalLayout = new QVBoxLayout(optionsEnv);


    table = new QTableView(optionsEnv);
    model = new QStandardItemModel(optionsEnv);
    verticalLayout->setContentsMargins(0,0,0,0);


    table->setModel(model);
    table->verticalHeader()->setVisible(false);
    table->show();

    model->setHorizontalHeaderLabels({"Datos","Valores"});



    verticalLayout->addWidget(table);

    setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
    mainBox->addWidget(tab);
    setContentsMargins(0,0,0,0);

    mainBox->setContentsMargins(0,0,0,0);

}

void ViewProperties::setValuesFromActor(QMap<Unit, float>* valores)
{
    model->clear();

    model->setHorizontalHeaderLabels({"Datos","Valores"});
    QMap<Unit, float>::iterator i;
    for(i = valores->begin(); i!= valores->end();i++){
        QStandardItem *item = new QStandardItem;
        item->setText(Physics::UnitToChar(i.key()));
        item->setSelectable(false);
        item->setEditable(true);


        QStandardItem *item2 = new QStandardItem;
        item2->setText(QString::number(i.value()));
        item2->setSelectable(false);
        item2->setEditable(true);


        model->appendRow({item, item2});

    }

}

