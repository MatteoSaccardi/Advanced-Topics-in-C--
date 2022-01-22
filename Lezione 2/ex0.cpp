// g++ -o ex0 ex0.cpp
#include <iostream>

int main()
{
    int   a, b = 3 ;
    int* pa        ;

      a = 5   ;
     pa = &a  ;
      a = 7   ;
    *pa = a   ;
      b = *pa ;
 // *pa = 5   ; // compile error: invalid conversion from 'int' to 'int*'

    std::cout << "   a = " <<    a << "\n"
              << "  pa = " <<   pa << "\n"
              << " *pa = " <<  *pa << "\n"
              << "  &a = " <<  &a << "\n"
              << " &pa = " <<  &pa << "\n"
              << "&*pa = " << &*pa << "\n"
              << "*&pa = " << *&pa << "\n"
              << "   b = " <<    b << std::endl;

}