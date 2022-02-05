#include "viewgraphicsresults.h"
#include <QPainter>
#include <QStyleOption>
#define BARSIZE 24

ViewGraphicsResults::ViewGraphicsResults(QWidget *parent) : QWidget(parent)
{

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    setStyleSheet("background-color: black; border: 2px solid black;");


}

QSize ViewGraphicsResults::sizeHint() const
{
    return QSize(500,500);
}

QSize ViewGraphicsResults::minimumSizeHint() const
{
    return QSize(50,50);
}

void ViewGraphicsResults::paintEvent(QPaintEvent *event)
{

    qDebug() << "painting    " << wheelPos;
     QPainter painter;
     painter.begin(this);

     //painter.setRenderHint(QPainter::Antialiasing);
     painter.setPen(QColor(146,166,173,255));
     painter.setBrush(QColor("#FAFCFC"));

     painter.drawRect(0,0,width()-2,height()-2);

     painter.setPen(Qt::NoPen);
     painter.setBrush(QColor("#F5FAFA"));
     for(int i = 0;i< round(width()/60);i++){
         painter.drawRect(wheelPos+60*i,1,30,height()-4);

     }

     painter.setPen(QColor("#D0DBDF"));
     for(int i = 0;i< round(width()/60);i++){
         painter.drawLine(wheelPos+60*i,1,wheelPos+60*i,height()-4);

     }


     painter.setPen(Qt::NoPen);
     painter.setBrush(QColor("#D7E5E5"));

     painter.drawRect(0,0,width(),BARSIZE);

     painter.setPen(QColor("#4F575A"));
     for(int i = 0;i< round(width()/60);i++){
        painter.drawText(28+i*60,17,"9");

     }


}

void ViewGraphicsResults::wheelEvent(QWheelEvent *event)
{
   qDebug() << "wheeling";
     QPoint numDegrees = event->angleDelta() / 8;
     QPoint numSteps = numDegrees / 15;
     wheelPos += (numDegrees.y()/15)*10;
     if(wheelPos>30 || wheelPos<-30){
         wheelPos = 0;
     }
     update();
     event->ignore();
}
