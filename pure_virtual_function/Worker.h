#ifndef WORKER_H
#define WORKER_H


#include "Person.h"

class Worker : public Person
{
public:
    Worker(string name, int age);
    virtual void work();
protected:
    string m_iAge;
};

#endif
