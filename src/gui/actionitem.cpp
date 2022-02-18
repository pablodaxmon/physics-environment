#include "actionitem.h"
#include <QAction>

ActionItem::ActionItem(bool isDynamic, QWidget *parent) : isDinamic(isDynamic), QWidget(parent)
{

    setProperty("class", "action");


    setContentsMargins(0,0,0,0);
    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->setContentsMargins(0,0,0,0);
    setLayout(mainLayout);




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

    unitTarget = new QComboBox;
    unitCondition = new QComboBox;
    valueCondition = new QLineEdit;

    if(isDynamic){
        unitCondition->addItem(tr("Tiempo"));

        unitTarget->addItem(tr("Aplicar fuerza"));
        unitTarget->addItem(tr("Aplicar torque"));

        valueXTarget = new QLineEdit;
        valueYTarget = new QLineEdit;
        valueTorqueTarget = new QLineEdit;

        gridLayout->addWidget(valueXTarget,0,1);
        gridLayout->addWidget(valueYTarget,0,2);
        gridLayout->addWidget(valueTorqueTarget,0,1);

    } else {

        unitTarget->addItem(tr("Posición X"));
        unitTarget->addItem(tr("Posición Y"));
        unitTarget->addItem(tr("Velocidad"));
        unitTarget->addItem(tr("Velocidad X"));
        unitTarget->addItem(tr("Velocidad Y"));
        unitTarget->addItem(tr("Aceleración"));
        unitTarget->addItem(tr("Aceleración X"));
        unitTarget->addItem(tr("Aceleración Y"));

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

        QLabel *textsera = new QLabel(tr("será"));
        gridLayout->addWidget(textsera,0,1);
        gridLayout->addWidget(valueTarget,0,2);



    }

    gridLayout->addWidget(unitTarget,0,0);

    QLabel *textcuando = new QLabel(tr("cuando"));
    gridLayout->addWidget(textcuando,1,0);
    gridLayout->addWidget(unitCondition,2,0);
    QLabel* textsea = new QLabel(tr("sea"));
    gridLayout->addWidget(textsea,2,1);
    gridLayout->addWidget(valueCondition,2,2);

    mainLayout->addLayout(gridLayout);

    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

}

void ActionItem::setValueX(float value)
{
    valueXTarget->setText(QString::number(value));
}

void ActionItem::setValueY(float value)
{
    valueYTarget->setText(QString::number(value));
}

void ActionItem::setValueTorque(float value)
{
    valueTorqueTarget->setText(QString::number(value));
}

float ActionItem::getValueX() const
{
    return valueXTarget->text().toFloat();
}

float ActionItem::getValueY() const
{
    return valueYTarget->text().toFloat();
}

float ActionItem::getValueTorque() const
{
    return valueTorqueTarget->text().toFloat();
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
    if(isDinamic){
        if(newUnitTo == 0){
            valueXTarget->setVisible(true);
            valueYTarget->setVisible(true);
            valueTorqueTarget->setVisible(false);
        } else {
            valueXTarget->setVisible(false);
            valueYTarget->setVisible(false);
            valueTorqueTarget->setVisible(true);
        }
    }


}
const QString &ActionItem::getName() const
{
    return name;
}

void ActionItem::setIdentifier(const QString &newName)
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

bool ActionItem::getIsDinamic() const
{
    return isDinamic;
}

void ActionItem::setIsDinamic(bool newIsDinamic)
{
    isDinamic = newIsDinamic;
}


