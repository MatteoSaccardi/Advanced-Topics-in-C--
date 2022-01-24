#include <iostream>

using namespace std;

void myFunction(double) ;

int main()
{
    cout << "This is file   : " << __FILE__            << endl ;
    myFunction(3.14) ;
}

void myFunction(double)
{
    cout << "Function (more): " << __PRETTY_FUNCTION__ << endl ;
    cout << "Function (less): " << __FUNCTION__        << endl ;
    cout << "At line        : " << __LINE__            << endl ;
    cout << "Compiled       : " << __DATE__            << endl ;
    cout << "Time           : " << __TIME__            << endl ;


}