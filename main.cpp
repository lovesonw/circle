#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    Point point;
    point.x = 1;
    point.y = 2;
    Circle circle(point, 3);
    circle.Display();
    Point p;
    p.x = 2;
    p.y = 4;
    circle.MoveTo(p);
    circle.Display();
    return 0;
}
