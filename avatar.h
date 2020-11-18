#ifndef AVATAR_H
#define AVATAR_H


class Avatar
{
public:
    Avatar();

    int getID(){return m_id;}
    void setID(int id){m_id = id;}
private:
    int m_id;
};

#endif // AVATAR_H
