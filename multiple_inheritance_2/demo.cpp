#include <iostream>
#include <stdlib.h>
#include "MigrantWorker.h"

/**********************************************************/
/*
多继承
    要求：1.Farmer类，数据成员：m_strName，成员函数：构造函
            数、析构函数、sow()
          2.Worker类，数据成员：m_strCode，成员函数：构造函
            数、析构函数、carry()
          3.MigrantWorker类，数据成员：无，成员函数：构造函
            数、析构函数
*/
/**********************************************************/

int main(void)
{
    MigrantWorker *p = new MigrantWorker("Merry", "100");
    p->carry();
    p->sow();

    delete p;
    p = NULL;

    return 0;
}
