#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

struct Point
{
    int x;
    int y;
};

using namespace std;

class Circle
{
    public:
                    Circle(Point p, int r);
        Point       GetO();
        int         GetR();
        void        SetR(int r);
        void        MoveTo(Point p);
        void        SetO(Point p);
        void        Display();
        friend      ostream& operator << (ostream& scout, Point point);
    private:
        Point p;
        int r;
};

#endif // CIRCLE_H
