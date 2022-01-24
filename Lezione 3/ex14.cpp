// g++ -o ex14 ex14.cpp && ./ex14 goofy 123 donald

#include <stdio.h>

using namespace std ;

int main(int argc, char** argv)
{
    while (argc --> 0)
        printf("%s%s", *argv++, (argc > 0) ? ", " : "") ;
        
    printf("\n") ;
    return 0 ;
}