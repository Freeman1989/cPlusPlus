#include <iostream>
#include <stdlib.h>
#include "Person.h"
#include "Worker.h"
#include "Dustman.h"
using namespace std;

/**********************************************************/
/*纯虚函数抽象类：
    要求：
          1.Person类，成员函数：构造函数、虚析构函数、纯虚函数work、
                      数据成员：名字m_strName
          2.Worker类，成员函数：构造函数、work
                      数据成员：年龄m_iAge
          3.Dustman类，成员函数：构造函数，work
*/
/**********************************************************/

int main(void)
{
    Dustman dustman("zhangsan", 20);
    dustman.work();

    return 0;
}

