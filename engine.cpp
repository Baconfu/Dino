#include "engine.h"


Engine::Engine(QObject *parent):
    QObject(parent)
{
    timer = new QTimer;
    timer->setInterval(18);

    connect(timer,SIGNAL(timeout()),this,SLOT(iterate()));

    timer->start();
}


void Engine::iterate()
{

}
