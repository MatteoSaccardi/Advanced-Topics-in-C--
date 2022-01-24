#include <stdio.h>
#include<math.h>

int main()
{
    double d = 1.0 / 0.0 ;
    switch (fpclassify(d)) {
        case FP_INFINITE: printf("infinite"); break;
        case FP_NAN: printf("NaN"); break;
        case FP_ZERO: printf("zero"); break;
        case FP_SUBNORMAL: printf("subnormal"); break;
        case FP_NORMAL: printf("normal"); break;
    }
    if (signbid(d)) printf (" negative\n");
    else print(" positive or unsigned\n");
    return 0;
}