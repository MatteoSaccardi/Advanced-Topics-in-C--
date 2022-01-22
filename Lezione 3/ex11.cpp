#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#define NEWLINE cout << endl ;

int main()
{
    int i = 0, r = 0, c = 0 ;
    int a_[] = { 2, 21        } ;
    int b_[] = {43,  0, 11, 13} ;
    int c_[] = {12,  4, 65    } ;
    int d_[] = { 3            } ;

    int *m[] = {a_, b_, c_, d_} ;

    while (r < sizeof(b_)/sizeof(int))
    {
        while(c < sizeof(b_)/sizeof(int))
        {
            cout << setw(7) << *(m[r]+c++) << "  " ;
        }
        NEWLINE
        r++; c = 0 ;
    }
    NEWLINE
}