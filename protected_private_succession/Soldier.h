#include "Person.h"

class Soldier : private Person
{
public:
    Soldier();
    void work();
protected:
    int m_iAge;
};

