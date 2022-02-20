#include "initialdialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QFormLayout>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>
#include <QApplication>

InitialDialog::InitialDialog(QWidget *parent) : QDialog(parent)
{
    QVBoxLayout * mainLaydout = new QVBoxLayout;
    QGroupBox * mainBox = new QGroupBox(tr("Crear nueva sesión"));
    QVBoxLayout * createLayout = new QVBoxLayout;
    QPushButton * createNewButton = new QPushButton(tr("Crear nuevo entorno"));
    createNewButton->setProperty("class", "noicon");
    createNewButton->setFixedHeight(35);
    nameEdit = new QLineEdit;
    nameEdit->setText("untitle");
    descriptionEdit = new QLineEdit;



    QFormLayout * formLayout = new QFormLayout;
    formLayout->addRow(tr("Nombre de la sesión"), nameEdit);
    formLayout->addRow(tr("Descripción"), descriptionEdit);

    formLayout->setHorizontalSpacing(80);


    createLayout->addLayout(formLayout);
    createLayout->addWidget(createTypeBox());
    createLayout->addWidget(createNewButton);


    setProperty("class","initialDialog");

    mainBox->setLayout(createLayout);

    mainLaydout->addWidget(mainBox);
    mainLaydout->addWidget(createListSessions());


    loadButton = new QPushButton(tr("Cargar entorno"));
    loadButton->setEnabled(false);
    loadButton->setProperty("class", "noicon");
    mainLaydout->addWidget(loadButton);
    setLayout(mainLaydout);

    resize(570, height());

    connect(createNewButton, &QPushButton::clicked, this, &InitialDialog::createNewSesionSlot);

    connect(loadButton, &QPushButton::clicked, this, &InitialDialog::loadSesionSlot);

}



QWidget *InitialDialog::createListSessions()
{
    //widget
    QWidget *widgetContainer = new QWidget(this);
    QVBoxLayout *widgetLayout = new QVBoxLayout;
    QListWidget* list = new QListWidget(widgetContainer);
    widgetContainer->setFixedHeight(300);
    widgetLayout->setContentsMargins(0,0,0,0);


    // reading data


    QFile data("datastorage.json");
    if (!data.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open save file.");
    }
    QByteArray tempdata = data.readAll();
    QJsonDocument loadData(QJsonDocument::fromJson(tempdata));
    QJsonObject jsonData = loadData.object();

    //data to items

    foreach (const QString& key, jsonData.keys()) {
        QJsonValue value = jsonData.value(key);
        QListWidgetItem* item = new QListWidgetItem();
        item->setSizeHint(QSize(100, 50));
        item->setData(Qt::UserRole, key);
        list->addItem(item);
        list->setItemWidget(item, itemListWidget(key, value['description'].toString()));
    }




    QLabel * title = new QLabel(tr("Cargar sesión"));
    widgetContainer->setLayout(widgetLayout);
    widgetLayout->addWidget(title);
    widgetLayout->addWidget(list);


    connect(list, QListWidget::itemClicked, this, InitialDialog::setCurrentItem);
    connect(list, QListWidget::itemClicked, this, InitialDialog::setEnabledLoadButton);
    return widgetContainer;

}

QWidget *InitialDialog::itemListWidget(const QString &text, const QString &text2)
{
    QWidget * res = new QWidget;
    QHBoxLayout * layout = new QHBoxLayout;
    res->setLayout(layout);
    QLabel* label1 = new QLabel(text);
    QLabel* label2 = new QLabel(text2);
    layout->addWidget(label1);
    layout->addWidget(label2);

    return res;
}

QGroupBox *InitialDialog::createTypeBox()
{
    QGroupBox *groupBox = new QGroupBox(tr("Opciones:"));

    option1 = new QRadioButton(tr("Basado en formula de aceleración"));
    option2 = new QRadioButton(tr("Basado en leyes de newton"));
    option1->setChecked(true);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(option1);
    vbox->addWidget(option2);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;

}

QGroupBox *InitialDialog::createViewBox()
{
    QGroupBox *groupBox = new QGroupBox(tr("E&xclusive Radio Buttons"));
    groupBox->setCheckable(true);
    groupBox->setChecked(false);

    QRadioButton *radio1 = new QRadioButton(tr("Rad&io button 1"));
    QRadioButton *radio2 = new QRadioButton(tr("Radi&o button 2"));
    QRadioButton *radio3 = new QRadioButton(tr("Radio &button 3"));
    radio1->setChecked(true);
    QCheckBox *checkBox = new QCheckBox(tr("Ind&ependent checkbox"));
    checkBox->setChecked(true);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(radio1);
    vbox->addWidget(radio2);
    vbox->addWidget(radio3);
    vbox->addWidget(checkBox);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;

}

void InitialDialog::createNewSesionSlot()
{

    emit createNewSesion(ViewSession::Up, nameEdit->text(), descriptionEdit->text(), option2->isChecked(), true);

    close();

}



void InitialDialog::loadSesionSlot()
{
    if(itemNow != nullptr){
        emit loadSesion(itemNow->data(Qt::UserRole).toString());
        close();
    }

}

void InitialDialog::loadLastSesionSlot()
{
    emit loadSesion(tr("hola.dat"));

    close();
}

void InitialDialog::setCurrentItem(QListWidgetItem *item)
{
    itemNow = item;
}

void InitialDialog::setEnabledLoadButton()
{
    loadButton->setEnabled(true);
}
