#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#define NEWLINE cout << endl ;

int main()
{
    int r = 0, c = 0, si = sizeof(int);
    int a_[] = { 2, 21        } ;
    int b_[] = {43,  0, 11, 13} ;
    int c_[] = {12,  4, 65    } ;
    int d_[] = { 3            } ;

    int s_[] = {sizeof(a_)/si, sizeof(b_)/si, sizeof(c_)/si, sizeof(d_)/si} ;

    int *m[] = {a_, b_, c_, d_} ;

    for (int i = 0; i < sizeof(s_)/si; ++i)
    {
        while (c < s_[i])
        {
            cout << setw(7) << *(m[r]+c++) << "  " ;
        }
        NEWLINE
        r++; c = 0 ;
    }
    NEWLINE
}