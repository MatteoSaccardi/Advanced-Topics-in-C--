#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19} ;
    int i = 5 ;

    cout << " a[" << i << "] = " << a[i] << endl
         << "(*a + " << i << ") = " << (*a+i) << endl
         << "*(a + " << i <<") = " << *(a+i) << endl ;
}