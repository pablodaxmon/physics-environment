#ifndef PIXMAPBUILDER_H
#define PIXMAPBUILDER_H

#include <QObject>
#include <QPixmap>
enum PixmapType : int {
    PT_Square = 0,
    PT_Cross,
    PT_Fancy
};

class PixmapBuilder
{
public:
    explicit PixmapBuilder(QObject *parent = nullptr);
    static QPixmap drawPattern(int type, int step, const QColor &color);
protected:
    static void drawSquare(QPainter *painter, int width, const QColor &color);
    static void drawCross(QPainter *painter, int width, const QColor &color);
    static void drawFancy(QPainter *painter, int width, const QColor &color);

};

#endif // PIXMAPBUILDER_H
