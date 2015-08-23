#include "Rect.h"

Rect::Rect(double width, double height)
{
    cout << "Rect()" << endl;
    m_dHeight = height;
    m_dWidth  = width;
}

Rect::~Rect()
{
    cout << "~Rect()" << endl;
}

double Rect::calcArea()
{
    cout << "Rect -> calcArea()" << endl;
    return m_dWidth * m_dHeight;
}
