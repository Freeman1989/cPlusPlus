#include "Person.h"
#include <string>

class Soldier:public Person
{
public:
    Soldier(string name = "James", int age = 20);
    virtual ~Soldier();
    void work();
protected:
    int m_iAge;
};
