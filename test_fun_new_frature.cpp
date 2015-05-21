#include <iostream>
#include <stdlib.h>
using namespace std;

inline void fun(int i = 30, int j = 20, int k =10);
inline void fun(double i, double j);

int main(void)
{
    //测试函数默认值
    fun();
    fun(100);
    fun(100, 200);
    fun(100, 200, 300);

    //测试函数重载
    fun(1.1, 2.2);
    fun(1, 2);

    //测试inline函数

    return 0;
}

void fun(int i, int j, int k)
{
    cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j)
{
    cout << i << "," << j << endl;
}
