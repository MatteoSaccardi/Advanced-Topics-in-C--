#include <iostream>
#include <csignal>
#include <cstdlib>
#include <unistd.h>

using namespace std;

//===============================================
void my_handler(int signum)
{
    if (signum == SIGTERM)
    {
        cout << "\nRequest to save data" << endl;
        return;
    }
    if (signum == SIGINT)
        cout << "\nJob cleaned up..." << endl;

    exit(signum);
}
//===============================================
int main()
{
    signal(SIGINT, my_handler);
    signal(SIGTERM, my_handler);

    int i = 0;
    while (++i)
    {
        cout << "Do some lengthy processing..." << endl;
        if (i == 4) raise(SIGTERM);
        if (i == 5) raise(SIGINT);
        sleep(1);
    }

    cout << "Never reach here" << endl;
    return 0;
}