#include "actionitem.h"
#include <QAction>

ActionItem::ActionItem(QWidget *parent) : QWidget(parent)
{

    setProperty("class", "action");

    setContentsMargins(0,0,0,0);
    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(0,0,0,0);
    setLayout(mainLayout);



    unitTarget = new QComboBox;
    unitTarget->addItem(tr("Posición X"));
    unitTarget->addItem(tr("Posición Y"));
    unitTarget->addItem(tr("Velocidad"));
    unitTarget->addItem(tr("Velocidad X"));
    unitTarget->addItem(tr("Velocidad Y"));
    unitTarget->addItem(tr("Aceleración"));
    unitTarget->addItem(tr("Aceleración X"));
    unitTarget->addItem(tr("Aceleración Y"));

    QWidget * headW = new QWidget;
    QHBoxLayout * headL = new QHBoxLayout;
    headW->setProperty("class", "header");
    headW->setLayout(headL);

    headL->setContentsMargins(10,1,5,1);
    title = new QLabel(tr("Soy un sin nombre"));
    QPushButton * info = new QPushButton;
    QPushButton * deleteItem = new QPushButton;
    info->setIcon(QIcon(":/icons/resources/icons16/hoja.png"));
    deleteItem->setIcon(QIcon(":/icons/resources/icons16/exit.png"));


    headL->addWidget(title);
    headL->addStretch(1);
    headL->addWidget(info);
    headL->addWidget(deleteItem);

    mainLayout->addWidget(headW);

    QGridLayout * gridLayout = new QGridLayout;
    gridLayout->setContentsMargins(8,8,8,16);
    gridLayout->setSpacing(3);


    unitCondition = new QComboBox;
    unitCondition->addItem(tr("Tiempo"));
    unitCondition->addItem(tr("Posición X"));
    unitCondition->addItem(tr("Posición Y"));
    unitCondition->addItem(tr("Velocidad"));
    unitCondition->addItem(tr("Velocidad X"));
    unitCondition->addItem(tr("Velocidad Y"));
    unitCondition->addItem(tr("Aceleración"));
    unitCondition->addItem(tr("Aceleración X"));
    unitCondition->addItem(tr("Aceleración Y"));

    valueTarget = new QLineEdit;
    valueCondition = new QLineEdit;

    QLabel *textcuando = new QLabel(tr("cuando"));
    QLabel *textsera = new QLabel(tr("será"));
    QLabel* textsea = new QLabel(tr("sea"));
    gridLayout->addWidget(unitTarget,0,0);
    gridLayout->addWidget(textsera,0,1);
    gridLayout->addWidget(valueTarget,0,2);

    gridLayout->addWidget(textcuando,1,0);

    gridLayout->addWidget(unitCondition,2,0);
    gridLayout->addWidget(textsea,2,1);
    gridLayout->addWidget(valueCondition,2,2);

    mainLayout->addLayout(gridLayout);

    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

}







void ActionItem::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

float ActionItem::getValueCondition() const
{
    return valueCondition->text().toFloat();
}

void ActionItem::setValueCondition(float newValueCondition)
{
    valueCondition->setText(QString::number(newValueCondition));
}

float ActionItem::getValueTo() const
{
    return valueTarget->text().toFloat();
}

void ActionItem::setValueTo(float newValueTo)
{
    valueTarget->setText(QString::number(newValueTo));
}

int ActionItem::getUnitCond() const
{
    return unitCondition->currentIndex();
}

void ActionItem::setUnitCond(int newUnitCond)
{
    unitCondition->setCurrentIndex(newUnitCond);
}
int ActionItem::getUnitTo() const
{
    return unitTarget->currentIndex();
}

void ActionItem::setUnitTo(int newUnitTo)
{
    unitTarget->setCurrentIndex(newUnitTo);
}
const QString &ActionItem::getName() const
{
    return name;
}

void ActionItem::setName(const QString &newName)
{
    name = newName;
    title->setText(name);
}

Actor *ActionItem::getActor() const
{
    return actor;
}

void ActionItem::setActor(Actor *newActor)
{
    actor = newActor;
}


