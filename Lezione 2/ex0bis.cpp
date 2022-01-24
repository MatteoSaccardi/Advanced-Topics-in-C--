#include <iostream>
using namespace std;

int main()
{
    int var = 18;
    cout << "var = " << var << endl;

    int & refToVar = var;
    cout << "refToVar = " << refToVar << endl;
    cout << "&refToVar = " << &refToVar << endl;
    cout << endl;

    refToVar = 20;
    cout << "var = " << var << endl;

    int* ptrToVar = &var;
    cout << "ptrToVar = " << ptrToVar << endl;
    cout << "*ptrToVar = " << *ptrToVar << endl;
    cout << endl;

    ptrToVar = &refToVar;
    cout << "ptrToVar = " << ptrToVar << endl;
    cout << "*ptrToVar = " << *ptrToVar << endl;

}