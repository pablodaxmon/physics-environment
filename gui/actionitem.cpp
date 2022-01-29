#include "actionitem.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QPainter>
#include <QStyleOption>

ActionItem::ActionItem(QWidget *parent) : QWidget(parent)
{

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    setProperty("class", "actionItem");
    QVBoxLayout * mainBox= new QVBoxLayout(this);
    mainBox->setContentsMargins(0,0,0,0);

    QWidget *upperBar = new QWidget(this);
    upperBar->setContentsMargins(0,0,0,0);
    upperBar->setProperty("class", "actionItemBar");
    upperBar->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    QHBoxLayout* layoutupperBar = new QHBoxLayout(this);
    layoutupperBar->setContentsMargins(5,3,5,3);
    upperBar->setLayout(layoutupperBar);

    QLabel * titulo = new QLabel("Soy un action", upperBar);
    QPushButton *button1 = new QPushButton(upperBar);
    QPushButton *button2 = new QPushButton(upperBar);
    layoutupperBar->addWidget(titulo);
    layoutupperBar->addStretch(1);
    layoutupperBar->addWidget(button1);
    layoutupperBar->addWidget(button2);
    layoutupperBar->setSpacing(0);

    mainBox->addWidget(upperBar);
    QLabel *subtitulo = new QLabel("soy un sutitulo", this);
    mainBox->addWidget(subtitulo);



}

void ActionItem::paintEvent(QPaintEvent *event)
{

    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);



}

