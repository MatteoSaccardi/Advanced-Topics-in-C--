#include <iostream>
using namespace std;

int main()
{
    int vectA[] = { 0,  1,  2,  3}             ;
    int vectB[] = {10, 11, 12, 13, 14, 15, 16} ;

    int *ptrVect ;

    ptrVect = vectA ;
    for (int i = 0; i < sizeof(vectA)/sizeof(int); ++i)
    {//sizeof takes the dimension in bytes
        cout << i << " -> " << ptrVect[i] << " ";
    }
    cout << endl ;

    ptrVect = vectB ;
    // this optimizes resources, since we do not have to copy every element of vectB
    for (int i = 0; i < sizeof(vectB)/sizeof(int); ++i)
    {
        cout << i << " -> " << ptrVect[i] << " ";
    }
    cout << endl ; ptrVect[3] = -3 ;
}