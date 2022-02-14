#include "actionitem.h"
#include <QAction>

ActionItem::ActionItem(QWidget *parent) : QWidget(parent)
{

    setProperty("class", "action");

    setContentsMargins(0,0,0,0);
    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(0,0,0,0);
    setLayout(mainLayout);



    unitChanged = new QComboBox;
    unitChanged->addItem(tr("Posición X"));
    unitChanged->addItem(tr("Posición Y"));
    unitChanged->addItem(tr("Velocidad"));
    unitChanged->addItem(tr("Velocidad X"));
    unitChanged->addItem(tr("Velocidad Y"));
    unitChanged->addItem(tr("Aceleración"));
    unitChanged->addItem(tr("Aceleración X"));
    unitChanged->addItem(tr("Aceleración Y"));

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


    conditionUnit = new QComboBox;
    conditionUnit->addItem(tr("Tiempo"));
    conditionUnit->addItem(tr("Posición X"));
    conditionUnit->addItem(tr("Posición Y"));
    conditionUnit->addItem(tr("Velocidad"));
    conditionUnit->addItem(tr("Velocidad X"));
    conditionUnit->addItem(tr("Velocidad Y"));
    conditionUnit->addItem(tr("Aceleración"));
    conditionUnit->addItem(tr("Aceleración X"));
    conditionUnit->addItem(tr("Aceleración Y"));

    valueUniteChanged = new QLineEdit;
    conditionalValue = new QLineEdit;

    QLabel *textcuando = new QLabel(tr("cuando"));
    QLabel *textsera = new QLabel(tr("será"));
    QLabel* textsea = new QLabel(tr("sea"));
    gridLayout->addWidget(unitChanged,0,0);
    gridLayout->addWidget(textsera,0,1);
    gridLayout->addWidget(valueUniteChanged,0,2);

    gridLayout->addWidget(textcuando,1,0);

    gridLayout->addWidget(conditionUnit,2,0);
    gridLayout->addWidget(textsea,2,1);
    gridLayout->addWidget(conditionalValue,2,2);

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
    return conditionalValue->text().toFloat();
}

void ActionItem::setValueCondition(float newValueCondition)
{
    conditionalValue->setText(QString::number(newValueCondition));
}

float ActionItem::getValueTo() const
{
    return valueUniteChanged->text().toFloat();
}

void ActionItem::setValueTo(float newValueTo)
{
    valueUniteChanged->setText(QString::number(newValueTo));
}

int ActionItem::getUnitCond() const
{
    return conditionUnit->currentIndex();
}

void ActionItem::setUnitCond(int newUnitCond)
{
    conditionUnit->setCurrentIndex(newUnitCond);
}
int ActionItem::getUnitTo() const
{
    return unitChanged->currentIndex();
}

void ActionItem::setUnitTo(int newUnitTo)
{
    unitChanged->setCurrentIndex(newUnitTo);
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


