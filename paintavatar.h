#ifndef PAINTAVATAR_H
#define PAINTAVATAR_H

#include <QObject>
#include <QQuickPaintedItem>

class PaintAvatar: public QQuickPaintedItem
{
    Q_OBJECT
public:
    PaintAvatar(QQuickItem * parent = nullptr);

    ~PaintAvatar();


    void paint(QPainter *painter);

private:
    QString m_url = "..\\..\\Dino\\Resources\\";



};

#endif // PAINTAVATAR_H
