// Compilazioni separate
// g++ -c -o ex3.o ex3.cpp
// g++ -c -o ex3-sum.o ex3-sum.cpp
// Linking
// g++ -o ex3 ex3.o ex3-sum.o
// ls -la ex3*

// Preprocessing, compiling, assembly insieme + linking
// g++ -o ex3 ex3.cpp ex3-sum.cpp

#include <iostream>

int sum(int, int) ; // forward declaration

int main()
{
    int s = sum(12,4) ;
    std::cout << "Sum = " << s << std::endl ;

    return 0 ;
}