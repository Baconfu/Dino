#include "paintavatar.h"
#include <QPixmap>
#include <QImage>
#include <QPainter>
#include <QRect>
#include <QDir>

PaintAvatar::PaintAvatar(QQuickItem * parent):
    QQuickPaintedItem(parent)
{


}

PaintAvatar::~PaintAvatar()
{

}

void PaintAvatar::paint(QPainter * painter)
{
    qDebug()<<QDir::currentPath();
    QImage img(QDir::currentPath() + "/debug/Dino_Avatar.png");
    QRect frame;
    frame.setX(0);
    frame.setY(0);
    frame.setWidth(width());
    frame.setHeight(height());

    qDebug()<<img;

    painter->drawImage(frame,img);

}


