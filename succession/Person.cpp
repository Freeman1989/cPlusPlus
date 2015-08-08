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
    cout << "eat()" << endl;
}

