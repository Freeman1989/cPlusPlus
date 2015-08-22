#include <iostream>
#include <stdlib.h>
#include "Soldier.h"

/*******************************************************/
/*
继承关系中隐藏
    要求：1.Person类，数据成员：m_strName，成员函数：构造
            函数、play()
          2.Soldier类、数据成员：无，成员函数：构造函数、
            play()、work()
*/
/*******************************************************/

int main(void)
{
    Soldier soldier;
    soldier.work();
    soldier.play(7);
    soldier.Person::play();

    return 0;
}
