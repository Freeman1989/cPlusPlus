#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/******************************************/
/* Teacher类
 *      自定义拷贝构造函数
 * 数据：
 *      名字
 *      年龄
 * 成员函数：
 *      数据成员的封装函数 */
/******************************************/

void test(Teacher t)
{
    
}

int main(void)
{
    Teacher t1;
    Teacher t2 = t1;
    Teacher t3(t1);
    
    test(t1);
    return 0;
}
