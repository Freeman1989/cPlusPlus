#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Rect.h"
using namespace std;

/*********************************************************/
/* 虚析构函数
    要求：
        1.定义Shape类，成员函数：calcArea(),构造函数，析构函数
        2.定义Rect类，成员函数：calcArea()，构造函数，析构函数
                      数据成员：m_dWidth，m_dHeight
        3.定义Circle类，成员函数：calcArea()，构造函数，析构函数
                        数据成员：m_dR，m_pCenter
        4.定义Coordinate类，成员函数：构造函数，析构函数
                        数据成员：m_iX，m_iY
*/
/*********************************************************/

int main(void)
{
    Shape *shape1 = new Rect(3, 6);
    Shape *shape2 = new Circle(5);

    shape1->calcArea();
    shape2->calcArea();

    delete shape1;
    shape1 = NULL;
    delete shape2;
    shape2 = NULL;

    return 0;
}
