#include <iostream>
#include <iomanip>

using namespace std;

#define DIM 4
#define NEWLINE cout << endl ;

int main()
{
    int r = 0, c = 0;
    int m[DIM][DIM] = {
                        { 2, 21,  0,  0},
                        {43,  0, 11, 13},
                        {12,  4, 65,  0},
                        { 3,  0,  0,  0}
                      } ;
    while(r < DIM)
    {
        while(c < DIM)
        {
            cout << "m[" << r << "][" << c << "] = " << setw(2) << m[r][c++] << "  " ;
        }
        NEWLINE
        r++; c = 0 ;
    }
    NEWLINE
}