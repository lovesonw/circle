#include "Circle.h"

Circle::Circle(Point p, int r)
{
    this->p = p;
    this->r = r;
}

std::ostream& operator << (ostream& scout, Point point)
{
    scout << "(" << point.x << ", " << point.y << ")" << endl;
    return scout;
}
int Circle::GetR()
{
    return r;
}

void Circle::SetR(int r)
{
    this->r = r;
}

void Circle::MoveTo(Point p)
{
    this->p = p;
}

void Circle::SetO(Point p)
{
    this->p = p;
}

void Circle::Display()
{
    cout << this->p;
}
