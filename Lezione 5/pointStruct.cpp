#include <iostream>
#include <math.h>

struct Point
{
    double x;
    double y;
    double z;
} ;
double distance(Point p1, Point p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) +
                (p1.y-p2.y)*(p1.y-p2.y) +
                (p1.z-p2.z)*(p1.z-p2.z));
}
int main()
{
    Point p1,p2;
    p1.x = 12.3;
    p1.y = 5.6;
    p1.z = -2.2;
    p2.x = 7.4;
    p2.y = 4.5;
    p2.z = 3.0;
    std::cout << "D = " << distance(p1,p2) << std::endl;
}