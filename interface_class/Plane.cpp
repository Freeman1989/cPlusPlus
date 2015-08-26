#include <iostream>
#include "Plane.h"
using namespace std;

Plane::Plane(string code)
{
    m_strCode = code;
}

void Plane::printCode()
{
    cout << m_strCode << endl;
}

