#include <iostream>
#include <csetjmp>

using namespace std ;

std::jmp_buf jBuf;

//=========================================================
void compute (int count)
{
    std::cout << "compute(" << count << ") called" << endl;
    std::longjmp(jBuf, count+1);
}
//=========================================================

int main()
{
    int count = 10;
    int value = setjmp(jBuf) ;
    if(value != 21)
    {
        cout << "Calling compute, value = " << value << "..." ;
        compute(count++);
        cout << "Never reach this point" << endl ;
    }
    cout << "Done!" << endl ;
}