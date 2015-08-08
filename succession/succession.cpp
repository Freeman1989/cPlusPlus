#include <iostream>
#include <stdlib.h>
#include "Worker.h"
using namespace std;

/********************************************************/
/*
    继承
        要求：
            1.定义Person类，要求含有m_strName和m_iAge两个数
            据成员及构造函数和析构函数、eat函数
            2.定义Worker类，要求共有继承Person类，含有数据
            成员m_iSalary、构造函数、析构函数、work函数
*/
/********************************************************/

int main(void)
{
    Worker *p = new Worker();
    p->m_strName = "Jim";
    p->m_iAge    = 10;
    p->eat();
    p->m_iSalary = 1000;
    p->work();
    delete p;
    p = NULL;

    return 0;
}

