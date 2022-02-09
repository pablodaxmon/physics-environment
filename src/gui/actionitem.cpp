#include "actionitem.h"
#include <QAction>

ActionItem::ActionItem(Unit unit, const char * name, QWidget *parent) : QWidget(parent)
{

    setProperty("class", "action");

    setContentsMargins(0,0,0,0);
    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(0,0,0,0);
    setLayout(mainLayout);



    unitChanged = new QComboBox;
    QAction* posicionX = new QAction("posicionX", this);
    QAction* posicionY = new QAction("posicionY", this);
    QAction* velocidadX = new QAction("velocidadX", this);
    QAction* velocidadY = new QAction("velocidadY", this);
    QAction* aceleracionX = new QAction("aceleracionX", this);
    QAction* aceleracionY = new QAction("aceleracionY", this);
    QAction* distancia = new QAction("distancia", this);

    unitChanged->addAction(posicionX);
    unitChanged->addAction(posicionY);
    unitChanged->addAction(velocidadX);
    unitChanged->addAction(velocidadY);
    unitChanged->addAction(aceleracionX);
    unitChanged->addAction(aceleracionY);
    unitChanged->addAction(distancia);

    QWidget * headW = new QWidget;
    QHBoxLayout * headL = new QHBoxLayout;
    headW->setProperty("class", "header");
    headW->setLayout(headL);

    headL->setContentsMargins(10,1,5,1);
    QLabel * title = new QLabel(tr("Soy un sin nombre"));
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
    conditionUnit->addAction(velocidadY);
    conditionUnit->addAction(aceleracionX);
    conditionUnit->addAction(aceleracionY);
    conditionUnit->addAction(distancia);

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

    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Minimum);

}

Actor *ActionItem::getActorChanged() const
{
    return actorChanged;
}

void ActionItem::setActorChanged(Actor *newActorChanged)
{
    actorChanged = newActorChanged;
}

Actor *ActionItem::getActorCondition() const
{
    return actorCondition;
}

void ActionItem::setActorCondition(Actor *newActorCondition)
{
    actorCondition = newActorCondition;
}

QComboBox *ActionItem::getUnitChanged() const
{
    return unitChanged;
}

void ActionItem::setUnitChanged(QComboBox *newUnitChanged)
{
    unitChanged = newUnitChanged;
}

QLineEdit *ActionItem::getValueUniteChanged() const
{
    return valueUniteChanged;
}

void ActionItem::setValueUniteChanged(QLineEdit *newValueUniteChanged)
{
    valueUniteChanged = newValueUniteChanged;
}

QComboBox *ActionItem::getConditionUnit() const
{
    return conditionUnit;
}

void ActionItem::setConditionUnit(QComboBox *newConditionUnit)
{
    conditionUnit = newConditionUnit;
}

QLineEdit *ActionItem::getConditionalValue() const
{
    return conditionalValue;
}

void ActionItem::setConditionalValue(QLineEdit *newConditionalValue)
{
    conditionalValue = newConditionalValue;
}

void ActionItem::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}


