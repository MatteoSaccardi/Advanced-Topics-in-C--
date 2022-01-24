#include <iostream>
#include <string>
#include <stdlib.h>

#define errMsg(m) cout << m << endl; return 0 ;

using namespace std ;

int add(int a, int b) {return a+b;}
int sub(int a, int b) {return a-b;}

int main(int argc, char** argv)
{
    int (*fPtr)(int, int) ;

    if( argc != 4 ) {errMsg("Wrong number of arguments|")}

    int     a   = atoi(argv[1]) ; // ascii to integer
    string oper =      argv[2]  ;
    int     b   = atoi(argv[3]) ;

    if(oper == "+" )
    {
        fPtr = add ;
    } else if (oper == "-")
    {
        fPtr = sub ;
    } else {
        errMsg("Unsupported operand")
    }

    cout << a << " " << oper << " " << b << " = " << fPtr(a,b) << endl ;

    return 0 ;
}