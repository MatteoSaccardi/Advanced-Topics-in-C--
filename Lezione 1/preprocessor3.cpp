#include <iostream>

#define COUT(s) std::cout << __LINE__            \
                          << "] ["               \
                          << __PRETTY_FUNCTION__ \
                          << "] ("               \
                          << " - "               \
                          << __DATE__            \
                          << " - "               \
                          << __TIME__            \
                          << ")\t"               \
                          << s                   \
                          << std::endl ;

int main()
{
    COUT("Here we are") ;
    return 0 ;
}