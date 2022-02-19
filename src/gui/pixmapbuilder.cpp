#include "pixmapbuilder.h"
#include <QPainter>

QPixmap PixmapBuilder::drawPattern(int type, int step, const QColor &color)
{
    QPixmap pixmap(step, step);
    QPainter painter;
    int pixmapWidth = pixmap.width() - 1;
    pixmap.fill(Qt::transparent);
    painter.begin(&pixmap);

    switch (type) {
    case PT_Square:
        drawSquare(&painter, pixmapWidth, color);
        break;
    case PT_Cross:
        drawCross(&painter, pixmapWidth, color);
        break;
    case PT_Fancy:
        drawFancy(&painter, pixmapWidth, color);
        break;
    }

    return pixmap;
}

QPixmap PixmapBuilder::drawPatternResults(const QColor &color1, const QColor &color2)
{
    QPixmap pixmap(50, 20);
    QPainter painter;
    pixmap.fill(Qt::transparent);
    painter.begin(&pixmap);
    painter.setPen(Qt::NoPen);
    painter.setBrush(color1);
    painter.drawRect(0,0,49,20);
    painter.setBrush(color2);
    painter.drawRect(24,0,25,20);
    painter.setPen(QColor(203,215,215,255));
    painter.drawLine(0,0,0,19);


    return pixmap;
}

void PixmapBuilder::drawSquare(QPainter *painter, int width, const QColor &color)
{
    painter->setPen(color);
    painter->drawLine(0,0,width,0);
    painter->drawLine(0,0,0,width);
}

void PixmapBuilder::drawCross(QPainter *painter, int width, const QColor &color)
{
    painter->setPen(color);
    painter->drawLine(0, 0, 2, 0);
    painter->drawLine(0, 0, 0, 2);
    painter->drawLine(0, width - 1, 0, width);
    painter->drawLine(width - 1, 0, width, 0);
}


void PixmapBuilder::drawFancy(QPainter *painter, int width, const QColor &color)
{
    int halfWidth = 0.5*width + 0.5;
    painter->setPen(color.lighter(106));
    painter->drawLine(0, halfWidth, width, halfWidth);
    painter->drawLine(halfWidth, 0, halfWidth, width);
    painter->setPen(color);
    painter->drawLine(0, 0, width, 0);
    painter->drawLine(0, 0, 0, width);
    painter->setPen(color.darker(118));
    painter->drawPoint(halfWidth, halfWidth);
    painter->setPen(color.darker(160));
    painter->drawPoint(0, 0);
}
