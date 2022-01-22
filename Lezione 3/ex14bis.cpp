// ! g++ -o ex14bis ex14bis.cpp && ./ex14bis goofy 123 donald

#include <iostream>

using namespace std ;

#define A "argc=" << argc << "] "
#define E endl

int main(int argc, char** argv)
{
    while (--argc >= 0)
    {
        cout << A << " *argv    : " << *argv    <<E;
        cout << A << " *argv [0]: " << *argv [0]<<E;
        cout << A << " *argv [1]: " << *argv [1]<<E;
        cout << A<< "(*argv) [0]: " <<(*argv)[0]<<E;
        *argv++;
    }

    return 0;
}