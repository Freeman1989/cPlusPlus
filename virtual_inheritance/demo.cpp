#include <iostream>
#include <stdlib.h>
#include "MigrantWorker.h"

/**********************************************************/
/*
虚继承
    要求：1.Farmer类，数据成员：m_strName，成员函数：构造函
            数、析构函数、sow()
          2.Worker类，数据成员：m_strCode，成员函数：构造函
            数、析构函数、carry()
          3.MigrantWorker类，数据成员：无，成员函数：构造函
            数、析构函数
          4.Person类，数据成员：m_strColor，成员函数：构造
            函数、printColor()
*/
/**********************************************************/

int main(void)
{
    MigrantWorker *p = new MigrantWorker("Merry", "200", "yellow");
    p->Farmer::printColor();
    p->Worker::printColor();
    delete p;
    p = NULL;

    return 0;
}

