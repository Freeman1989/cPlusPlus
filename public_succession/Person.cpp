#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
    cout << "Persion()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::eat()
{
    m_strName = "Jim";
    m_iAge    = 20;
    cout << "eat()" << endl;
}

