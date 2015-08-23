#include <iostream>
#include <stdlib.h>
#include "Soldier.h"

/*******************************************************/
/*
共有继承：is a
    要求：1.Person类，数据成员：m_strName，成员函数：构造
            函数、析构函数、play()
          2.Soldier类、数据成员：m_iAge，成员函数：构造函
            数、析构函数、work()
          3.定义函数test1(Person p)、test2(Person &p)、
            test3(Person *p)
*/
/*******************************************************/

void test1(Person p)
{
    p.play();
}


void test2(Person &p)
{
    p.play();
}

void test3(Person *p)
{
    p->play();
}
int main(void)
{
    Person p;
    Soldier s;

    test3(&p);
    test3(&s);
    

    return 0;
}
