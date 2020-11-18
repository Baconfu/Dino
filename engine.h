#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QQuickItem>
#include <qtimer.h>


class Engine: public QObject
{
    Q_OBJECT
public:
    Engine(QObject * parent = nullptr);



private:
    QTimer * timer;

public slots:
    void iterate();


};

#endif // ENGINE_H
