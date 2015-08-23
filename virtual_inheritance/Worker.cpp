#include <iostream>
#include "Worker.h"
using namespace std;

Worker::Worker(string code, string color):Person("Worker" + color)
{
    m_strCode = code;
    cout << "Worker()" << endl;
}

Worker::~Worker()
{
    cout << "~Worker()" << endl;
}

void Worker::carry()
{
    cout << m_strCode << endl;
    cout << "Worker -- carry()" << endl;
}
