#ifndef CACTUSMOVER_H
#define CACTUSMOVER_H


class CactusMover
{
public:
    CactusMover(int, int);

    void cactusPlace();

    void moveCactus(int velocity);

private:

    int m_location;

    int m_size;
};

#endif // CACTUSMOVER_H
