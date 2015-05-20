#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct
{
    int x;
    int y;
}Coord;

void fun(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}

int main(void)
{
    //基本数据类型的引用
    int a  = 10;
    int &b = a;

    b = 20;
    cout << a << endl;

    a = 30;
    cout << b << endl;

    //结构体的引用
    Coord c;
    Coord &c1 = c;

    c1.x = 10;
    c1.y = 20;

    cout << c.x << "," << c.y <<endl;
    
    //指针的引用
    int d   = 3;
    int *p  = &d;
    int *&q = p;

    *q = 5;
    cout << d << endl;

    //函数参数的引用
    int x = 10;
    int y = 20;
    cout << x << "," << y << endl;
    fun(x,y);
    cout << x << "," << y << endl;

    return 0;
}
