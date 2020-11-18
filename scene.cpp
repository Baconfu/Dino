#include "scene.h"
#include "cactusmover.h"

#include <QVector>

scene::scene()
{

}

void scene::iterate(){
    for(int i=0; i<cacti.length(); i++){
        if(cacti[i]->getLocation() < -20){
                cacti.removeAt(i);
            }
        else{
        cacti[i]->moveCactus(m_velocity);
        }
    }
}
