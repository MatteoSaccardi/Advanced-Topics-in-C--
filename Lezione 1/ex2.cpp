// g++ -E -o ex2.i ex2.cpp --> open ex2.i (do not compile this)

// g++ -S -o ex2.s ex2.cpp --> ex2.s is written in Assembly language

// g++ -c -o ex2.o ex2.cpp --> ex2.o is object code
// -nm --demangle ex2.o

#include "ex2.h"

int main()
{
    a  = 1   ;
    a += 12 ;
}