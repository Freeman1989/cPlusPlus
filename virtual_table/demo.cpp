#include <iostream>
#include <stdlib.h>
#include "Circle.h"
using namespace std;

/*********************************************************/
/* 虚函数表
    要求：
        1.定义Shape类，成员函数：calcArea(),构造函数，析构函数
        2.定义Circle类，成员函数：构造函数，析构函数
                        数据成员：m_dR
    概念说明：
        1.对象的大小
        2.对象的地址
        3.对象成员的地址
        4.虚函数表指针
*/
/*********************************************************/

int main(void)
{
    Shape shape;
    //cout << sizeof(shape) << endl;

    int *p = (int *)&shape;
    //cout << p << endl;
    cout << (unsigned int)(*p) << endl;
    
    Circle circle(100);
    //cout << sizeof(circle) << endl;

    int *q = (int *)&circle;
    //cout << q << endl;
    cout << (unsigned int)(*q) << endl;
    q++;
    cout << (unsigned int)(*q) << endl;


    return 0;
}
