#define ABCD 2
#include <iostream>

int main()
{

#ifdef ABCD
    std::cout << "1: yes\n" ; // solo questa istruzione verrà considerata
#else
    std::cout << "1: no\n" ;
#endif

// utile con due versioni del programma, e.g. con due versioni di un compilatore
// --> #define versione_compilatore
// #ifdef versione_compilatore --> prima versione
// #else --> seconda versione
// #endif

#ifndef ABCD
    std::cout << "2: no\n" ;
#elif ABCD == 2
    std::cout << "2: yes\n" ;
#else
    std::cout << "2: no\n" ;
#endif

#if !defined(DCBA) && (ABCD < 2*4-3)
    std::cout << "3: yes\n" ;


}