#include <assert.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int   l;
    char* c;
    cout << "Enter length: " ;
    cin >> l ;

    c = (char*)malloc(l+1) ;
    assert(c) ; // Abort program if the number is 0 and create an error

    c[l+1] = '\0' ;
    while(--l >= 0)
        c[l] = rand()%26 + 'a' ;

    printf("%s\n",c) ;
}