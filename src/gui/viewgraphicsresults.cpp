#include "viewgraphicsresults.h"
#include <QPainter>
#include <QStyleOption>
#include "QVBoxLayout"
#include "pixmapbuilder.h"
#define BARSIZE 24
#define SCALERESULTS 4
#define SCALERESULTSx2 8

ViewGraphicsResults::ViewGraphicsResults(QWidget *parent) : QWidget(parent)
{

    scene = new GraphicsSceneResults;
    view = new GraphicsViewResults(scene, this);
    itemBar = new itemBarTime;
    view->setSceneRect(0,0,4000,1000);
    view->centerOn(0,0);

    scene->addItem(itemBar);
    view->setItemBar(itemBar);

    view->setBackgroundBrush(PixmapBuilder::drawPatternResults(QColor(245,251,251,255),QColor(252,255,255,255)));

    QVBoxLayout* box = new QVBoxLayout;
    box->setContentsMargins(0,0,0,0);
    box->addWidget(view);

    setLayout(box);



    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);


}

QSize ViewGraphicsResults::sizeHint() const
{
    return QSize(500,500);
}

QSize ViewGraphicsResults::minimumSizeHint() const
{
    return QSize(50,50);
}

void ViewGraphicsResults::setInitTime()
{


}

void ViewGraphicsResults::redrawResults(float time)
{
    scene->clear();
    if(!listActors->isEmpty()){
    for(int i = 0;i<listActors->size();i++){
        Actor* act = listActors->at(i);
        for(int j = 1; j<act->getPositionYData().size()-1;j++){

            if(typeGraphics == 0){

                scene->addLine(j,(act->getPositionYData().at(j-1)*SCALERESULTS+300),j-1,(act->getPositionYData().at(j)*SCALERESULTS+300), QPen(act->getColorPen()));

            } else if(typeGraphics == 1){

                scene->addLine(j,(act->getPositionXData().at(j-1)*SCALERESULTS+300),j-1,(act->getPositionXData().at(j)*SCALERESULTS+300), QPen(act->getColorPen()));

            } else if(typeGraphics == 2){

                scene->addLine(j,(act->getVelocityXData().at(j-1)*SCALERESULTSx2+300),j-1,(act->getVelocityXData().at(j)*SCALERESULTSx2+300), QPen(act->getColorPen()));

            } else if(typeGraphics == 3){

                scene->addLine(j,(act->getVelocityYData().at(j-1)*SCALERESULTSx2+300),j-1,(act->getVelocityYData().at(j)*SCALERESULTSx2+300), QPen(act->getColorPen()));

            } else if(typeGraphics == 4){

                scene->addLine(j,(act->getAcelerationXData().at(j-1)*SCALERESULTSx2+300),j-1,(act->getAcelerationXData().at(j)*SCALERESULTSx2+300), QPen(act->getColorPen()));

            } else if(typeGraphics == 5){

                scene->addLine(j,(act->getAcelerationYData().at(j-1)*SCALERESULTSx2+300),j-1,(act->getAcelerationYData().at(j)*SCALERESULTSx2+300), QPen(act->getColorPen()));

            }
        }


    }}

    itemBar = new itemBarTime;
    scene->addItem(itemBar);
    float timeFixed = time*(100/3);
    scene->addLine(timeFixed,0,timeFixed,1000);
    cursorPos = timeFixed;
    update();
}

void ViewGraphicsResults::setTimeNow(float time)
{
    counter++;
    if(counter>5){
        redrawResults(time);

        counter=0;

    }


}




void ViewGraphicsResults::setSelectedActor(Actor *newActorSelected)
{
    actorSelected = newActorSelected;
}

void ViewGraphicsResults::setListActors(QList<Actor *> *newListActors)
{
    listActors = newListActors;
}

void ViewGraphicsResults::graphicTypechanged(int typeG)
{
    typeGraphics = typeG;
    redrawResults(0);
}



