#include "maintoolbar.h"

#include <QHBoxLayout>
#include <QStyleOption>
#include <QApplication>
#include <QPainter>
#include <QFile>

MainToolBar::MainToolBar(QWidget *parent) : QWidget(parent)
{
    setMinimumHeight(40);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
    QWidget * wmain = new QWidget(this);
    wmain->setFixedWidth(2000);
    wmain->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    wmain->setProperty("class", "containerToolbar");

    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    wmain->setLayout(mainLayout);
    mainLayout->setContentsMargins(6,6,0,6);
    mainLayout->setSpacing(1);


    createButtons();
    setIconsButtons();


    mainLayout->addWidget(playButton);
    mainLayout->addWidget(pauseButton);
    mainLayout->addWidget(stopButton);
    mainLayout->addWidget(statsButton);
    mainLayout->addWidget(clockButton);
    mainLayout->addWidget(debugButton);
    mainLayout->addStretch(1);


}

void MainToolBar::createButtons()
{


    statsButton = new QPushButton();
    clockButton = new QPushButton();
    debugButton = new QPushButton();
    playButton = new QPushButton();
    pauseButton = new QPushButton();
    stopButton = new QPushButton();

    statsButton->setProperty("class","toolbar");
    clockButton->setProperty("class","toolbar");
    debugButton->setProperty("class","toolbar");
    playButton->setProperty("class","toolbar");
    pauseButton->setProperty("class","toolbar");
    stopButton->setProperty("class","toolbar");

    statsButton->setFixedSize(30,30);
    clockButton->setFixedSize(30,30);
    debugButton->setFixedSize(30,30);
    playButton->setFixedSize(30,30);
    pauseButton->setFixedSize(30,30);
    stopButton->setFixedSize(30,30);


}

void MainToolBar::setIconsButtons()
{
    statsButton->setIcon(QIcon(":/icons/resources/icons24/3d bar chart.png"));
    clockButton->setIcon(QIcon(":/icons/resources/icons24/Clock.png"));
    debugButton->setIcon(QIcon(":/icons/resources/icons24/Error.png"));
    playButton->setIcon(QIcon(":/icons/resources/icons24/Play.png"));
    pauseButton->setIcon(QIcon(":/icons/resources/icons24/Stop.png"));
    stopButton->setIcon(QIcon(":/icons/resources/icons24/Stop sign.png"));

}

void MainToolBar::paintEvent( QPaintEvent *){
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
