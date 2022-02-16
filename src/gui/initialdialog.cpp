#include "initialdialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QFormLayout>

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


    QPushButton * loadButton = new QPushButton(tr("Cargar entorno"));
    loadButton->setProperty("class", "noicon");
    mainLaydout->addWidget(loadButton);
    setLayout(mainLaydout);

    resize(570, height());

    connect(createNewButton, &QPushButton::clicked, this, InitialDialog::createNewSesionSlot);

}

QWidget *InitialDialog::createListSessions()
{
    // header
    QWidget *widgetContainer = new QWidget(this);
    widgetContainer->setFixedHeight(400);
    QVBoxLayout *widgetLayout = new QVBoxLayout;
    widgetLayout->setContentsMargins(0,0,0,0);
    ///

    QListWidget* list = new QListWidget(widgetContainer);
    QListWidgetItem* item = new QListWidgetItem();
    item->setSizeHint(QSize(100, 50));

    list->addItem(item);
    list->setItemWidget(item, itemListWidget());



    QLabel * title = new QLabel(tr("Cargar sesión"));

    widgetContainer->setLayout(widgetLayout);

    widgetLayout->addWidget(title);
    widgetLayout->addWidget(list);
    return widgetContainer;

}

QWidget *InitialDialog::itemListWidget()
{
    QWidget * res = new QWidget;
    QHBoxLayout * layout = new QHBoxLayout;
    res->setLayout(layout);
    QLabel* label1 = new QLabel(tr("Partida de ldia de hoyy"), res);
    QLabel* label2 = new QLabel(tr(" 15 de febrero de 2022"), res);
    layout->addWidget(label1);
    layout->addWidget(label2);

    return res;
}

QGroupBox *InitialDialog::createTypeBox()
{
    QGroupBox *groupBox = new QGroupBox(tr("Opciones adicionales"));
    groupBox->setCheckable(true);
    groupBox->setChecked(false);

    QRadioButton *radio1 = new QRadioButton(tr("vista superior"));
    QRadioButton *radio2 = new QRadioButton(tr("vista lateral"));
    radio1->setChecked(true);
    QCheckBox *checkBox = new QCheckBox(tr("Gravedad"));
    checkBox->setChecked(true);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(radio1);
    vbox->addWidget(radio2);
    vbox->addWidget(checkBox);
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

    emit createNewSesion(ViewSession::Up, nameEdit->text(), descriptionEdit->text());

    close();

}



void InitialDialog::loadSesionSlot()
{

    emit loadSesion(tr("hola.dat"));

    close();
}

void InitialDialog::loadLastSesionSlot()
{
    emit loadSesion(tr("hola.dat"));

    close();
}
