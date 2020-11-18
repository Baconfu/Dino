#ifndef PAINTAVATAR_H
#define PAINTAVATAR_H

#include <QObject>
#include <QQuickPaintedItem>
#include <QQuickItem>

class PaintAvatar: public QQuickPaintedItem
{
    Q_OBJECT
public:
    PaintAvatar(QQuickItem * parent = nullptr);
    ~PaintAvatar();
    void paint(QPainter *painter);

private:
    QString m_url = ".\\Dino.png";



};

#endif // PAINTAVATAR_H
