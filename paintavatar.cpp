#include "paintavatar.h"
#include <QPixmap>
#include <QImage>
#include <QPainter>
#include <QRect>

PaintAvatar::PaintAvatar(QQuickItem * parent):
    QQuickPaintedItem(parent)
{

}

PaintAvatar::~PaintAvatar()
{

}

void PaintAvatar::paint(QPainter *painter)
{
    QImage img(m_url);


    painter->drawImage()
}


