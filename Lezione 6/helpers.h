#ifndef _helpers_H_
#define _helpers_H_

#include <iostream>

using namespace std;

#define D(s1,s2)                               \
        cout << __LINE__            << "\t] [" \
             << __PRETTY_FUNCTION__ << "] "    \
             << s1                  << " "     \
             << s2                  << endl ;

#endif