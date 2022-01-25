#include <iostream>
#include <math.h>

double distance(double x1, double y1, double z1,
                double x2, double y2, double z2)
    {
        return sqrt((x1-x2)*(x1-x2) +
                    (y1-y2)*(y1-y2) +
                    (z1-z2)*(z1-z2)) ;
    }

int main()
{
    double x1 = 12.3;
    double y1 = 5.6;
    double z1 = -2.2;
    double x2 = 7.4;
    double y2 = 4.5;
    double z2 = 3.0;
    std::cout << "D = " << distance(x1,y1,z1,x2,y2,z2) << std::endl;
}