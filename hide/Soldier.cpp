#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{

}

void Soldier::play(int x)
{
    cout << m_strName << endl;
    cout << Person::m_strName << endl;
    cout << "Soldier -- play()" << endl;
}

void Soldier::work()
{
    m_strName = "Jim";
    Person::m_strName = "James";
    cout << "Soldier -- work()" << endl;
}
