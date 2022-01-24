// g++ -o ex13 ex13.cpp && ./ex13 goofy 123 donald

#include <stdio.h>

using namespace std ;

int main(int argc, char* argv[])
{
    for(int i = 0; i < argc; ++i)
    {
        printf("%s%s", argv[i], (i < argc - 1) ? ", " : "") ;
        // the above sintax means that if (i < argc-1) then (indicated by ?)
        // it prints ", ", otherwise (indicated by :) it prints "";
        // implicit if statement
    }
    printf("\n") ;
    return 0 ;
}