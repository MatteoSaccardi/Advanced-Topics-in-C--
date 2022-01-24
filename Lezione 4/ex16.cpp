#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if (n == 0 || n == 1) return n;
    return Fibonacci(n-2)+Fibonacci(n-1);
}

int main()
{
    int c = 0;
    while (c <= 20)
        cout << Fibonacci(c++) << endl;
}