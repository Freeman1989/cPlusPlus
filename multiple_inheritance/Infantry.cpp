#include <iostream>
#include "Infantry.h"
using namespace std;

Infantry::Infantry(string name, int age)
{
    m_strName = name;
    m_iAge = age;
    cout << "infantry()" << endl;
}

Infantry::~Infantry()
{
    cout << "~Infantry()" << endl;
}

void Infantry::attack()
{
    cout << m_strName << endl;
    cout << m_iAge << endl;
    cout << "Infantry -- attack()" << endl;
}
