#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std ;

int a(int i) {return i+1;}
int b(void ) {return  15;}

int main()
{
    int (*fa)(int) = a ;
    int (*fb)()    = b ;

    cout << "       b   : " << b        << endl ;
    cout << "(void*)b   : " << (void*)b << endl ; // address
    cout << "      fb() : " << fb()     << endl ;
    cout << "      fa(6): " << fa(6)    << endl ;

    return 0 ;
}