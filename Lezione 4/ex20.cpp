#include <iostream>
#include <stdlib.h>
#include <math.h>

#define DIM 4

struct myData
{
    int    anInt   ;
    double aDouble ;
} ;

int main()
{
    struct myData * pData ;
    pData = (myData*)calloc(DIM,sizeof(myData)) ; // we can also call malloc 4 times

    for (int n = 0; n < DIM; ++n)
    {
        pData[n].anInt   = n               ;
        pData[n].aDouble = sqrt((double)n) ;
    }
    for (int n = 0; n < DIM; ++n)
    {
        std::cout << n << " - "       << " i: "
                  << pData[n].anInt   << " d: "
                  << pData[n].aDouble << std::endl;
    }

    free(pData) ; // To avoid memory overflow

    return 0 ;
}