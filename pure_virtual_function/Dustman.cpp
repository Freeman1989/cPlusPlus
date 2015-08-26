#include "Dustman.h"
#include <iostream>
using namespace std;

Dustman::Dustman(string name, int age):Worker(name, age)
{

}

void Dustman::work()
{
    cout << "扫地" << endl;
}
