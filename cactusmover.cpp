#include "cactusmover.h"

CactusMover::CactusMover(int location, int size)
{
    m_location = location;
    m_size = size;
}

void CactusMover::cactusPlace(){
    m_location = 650;
}

void CactusMover::moveCactus(int velocity)
{
    m_location+=velocity;
}


