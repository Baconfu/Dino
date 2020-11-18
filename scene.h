#ifndef SCENE_H
#define SCENE_H

#include <cactusmover.h>
#include <QVector>

class scene
{
public:
    scene();
    void iterate();

private:
   QVector<CactusMover*> cacti;
   int m_velocity = 1;
};

#endif // SCENE_H