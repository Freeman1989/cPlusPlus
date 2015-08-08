#include <iostream>
#include <stdlib.h>
#include "Infantry.h"
using namespace std;

/********************************************************/
/*
保护继承和私有继承
    要求：1.Person类，数据成员：m_strName，成员函数：构造
            函数、play()
          2.Soldier类，数据成员：m_iAge，成员函数：构造函
            数、work()
          3.Infantry步兵类、成员函数：attack()
*/
/********************************************************/

int main(void)
{
    Infantry soldier;
    soldier.attack();
//    soldier.play();

    return 0;
}

