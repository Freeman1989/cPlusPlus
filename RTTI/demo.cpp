#include <iostream>
#include "stdlib.h"
#include "Plane.h"
#include "Bird.h"
using namespace std;

/*********************************************************/
/* RTTI
    1.Flyable类，成员函数：takeoff、land
    2.Plane类，成员函数：takeoff、land、carry
    3.Bird类，成员函数：takeoff、land、foraging
    4.全局函数doSomething(Flyable *obj)
*/
/*********************************************************/

void doSomething(Flyable *obj)
{
    cout << typeid(*obj).name() << endl;
    obj->takeoff();
    if(typeid(*obj) == typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if(typeid(*obj) == typeid(Plane))
    {
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane->carry();
    }
    obj->land();
}

int main(void)
{
    Flyable p;
    Bird b = dynamic_cast<Bird>p;

    return 0;
}

